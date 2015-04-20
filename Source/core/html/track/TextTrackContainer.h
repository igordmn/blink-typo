/*
 * Copyright (C) 2008, 2009, 2010, 2011 Apple Inc. All rights reserved.
 * Copyright (C) 2012 Google Inc. All rights reserved.
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

#ifndef TextTrackContainer_h
#define TextTrackContainer_h

#include "core/html/HTMLDivElement.h"

namespace blink {

class HTMLMediaElement;

class TextTrackContainer final : public HTMLDivElement {
public:
    static PassRefPtrWillBeRawPtr<TextTrackContainer> create(Document&);

    // Runs the "rules for updating the text track rendering". The
    // ExposingControls enum is used in the WebVTT processing model to reset the
    // layout when the media controls become visible, to avoid overlapping them.
    enum ExposingControls {
        DidNotStartExposingControls,
        DidStartExposingControls
    };
    void updateDisplay(HTMLMediaElement&, ExposingControls);

private:
    TextTrackContainer(Document&);

    virtual bool isTextTrackContainer() const override { return true; }

    virtual LayoutObject* createLayoutObject(const ComputedStyle&) override;
};

DEFINE_ELEMENT_TYPE_CASTS(TextTrackContainer, isTextTrackContainer());

} // namespace blink

#endif // TextTrackContainer_h