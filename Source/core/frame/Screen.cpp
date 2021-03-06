/*
 * Copyright (C) 2007 Apple Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 * 3.  Neither the name of Apple Computer, Inc. ("Apple") nor the names of
 *     its contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#include "config.h"
#include "core/frame/Screen.h"

#include "core/frame/FrameHost.h"
#include "core/frame/FrameView.h"
#include "core/frame/LocalFrame.h"
#include "core/frame/Settings.h"
#include "core/inspector/InspectorInstrumentation.h"
#include "core/page/Chrome.h"
#include "public/platform/WebScreenInfo.h"

namespace blink {

Screen::Screen(LocalFrame* frame)
    : DOMWindowProperty(frame)
{
}

unsigned Screen::height() const
{
    if (!m_frame)
        return 0;
    FrameHost* host = m_frame->host();
    if (!host)
        return 0;
    if (host->settings().reportScreenSizeInPhysicalPixelsQuirk())
        return lroundf(host->chrome().screenInfo().rect.height * host->deviceScaleFactor());
    return static_cast<unsigned>(host->chrome().screenInfo().rect.height);
}

unsigned Screen::width() const
{
    if (!m_frame)
        return 0;
    FrameHost* host = m_frame->host();
    if (!host)
        return 0;
    if (host->settings().reportScreenSizeInPhysicalPixelsQuirk())
        return lroundf(host->chrome().screenInfo().rect.width * host->deviceScaleFactor());
    return static_cast<unsigned>(host->chrome().screenInfo().rect.width);
}

unsigned Screen::colorDepth() const
{
    if (!m_frame || !m_frame->host())
        return 0;
    return static_cast<unsigned>(m_frame->host()->chrome().screenInfo().depth);
}

unsigned Screen::pixelDepth() const
{
    if (!m_frame)
        return 0;
    return static_cast<unsigned>(m_frame->host()->chrome().screenInfo().depth);
}

int Screen::availLeft() const
{
    if (!m_frame)
        return 0;
    FrameHost* host = m_frame->host();
    if (!host)
        return 0;
    if (host->settings().reportScreenSizeInPhysicalPixelsQuirk())
        return lroundf(host->chrome().screenInfo().availableRect.x * host->deviceScaleFactor());
    return static_cast<int>(host->chrome().screenInfo().availableRect.x);
}

int Screen::availTop() const
{
    if (!m_frame)
        return 0;
    FrameHost* host = m_frame->host();
    if (!host)
        return 0;
    if (host->settings().reportScreenSizeInPhysicalPixelsQuirk())
        return lroundf(host->chrome().screenInfo().availableRect.y * host->deviceScaleFactor());
    return static_cast<int>(host->chrome().screenInfo().availableRect.y);
}

unsigned Screen::availHeight() const
{
    if (!m_frame)
        return 0;
    FrameHost* host = m_frame->host();
    if (!host)
        return 0;
    if (host->settings().reportScreenSizeInPhysicalPixelsQuirk())
        return lroundf(host->chrome().screenInfo().availableRect.height * host->deviceScaleFactor());
    return static_cast<unsigned>(host->chrome().screenInfo().availableRect.height);
}

unsigned Screen::availWidth() const
{
    if (!m_frame)
        return 0;
    FrameHost* host = m_frame->host();
    if (!host)
        return 0;
    if (host->settings().reportScreenSizeInPhysicalPixelsQuirk())
        return lroundf(host->chrome().screenInfo().availableRect.width * host->deviceScaleFactor());
    return static_cast<unsigned>(host->chrome().screenInfo().availableRect.width);
}

DEFINE_TRACE(Screen)
{
    HeapSupplementable<Screen>::trace(visitor);
    DOMWindowProperty::trace(visitor);
}

} // namespace blink
