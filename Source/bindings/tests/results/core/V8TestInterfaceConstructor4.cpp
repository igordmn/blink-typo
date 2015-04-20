// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8TestInterfaceConstructor4.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8TestInterfaceConstructor4.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

const WrapperTypeInfo V8TestInterfaceConstructor4::wrapperTypeInfo = { gin::kEmbedderBlink, V8TestInterfaceConstructor4::domTemplate, V8TestInterfaceConstructor4::refObject, V8TestInterfaceConstructor4::derefObject, V8TestInterfaceConstructor4::trace, 0, 0, V8TestInterfaceConstructor4::preparePrototypeObject, V8TestInterfaceConstructor4::installConditionallyEnabledProperties, "TestInterfaceConstructor4", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::RefCountedObject };

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TestInterfaceConstructor4.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& TestInterfaceConstructor4::s_wrapperTypeInfo = V8TestInterfaceConstructor4::wrapperTypeInfo;

namespace TestInterfaceConstructor4V8Internal {

static void constructor1(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TestInterfaceConstructor4* testInterface4Arg;
    {
        testInterface4Arg = V8TestInterfaceConstructor4::toImplWithTypeCheck(info.GetIsolate(), info[0]);
    }
    RefPtr<TestInterfaceConstructor4> impl = TestInterfaceConstructor4::create(testInterface4Arg);
    v8::Local<v8::Object> wrapper = info.Holder();
    impl->associateWithWrapper(info.GetIsolate(), &V8TestInterfaceConstructor4::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

static void constructor2(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "TestInterfaceConstructor4", info.Holder(), info.GetIsolate());
    V8StringResource<> usvStringArg;
    {
        usvStringArg = toUSVString(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RefPtr<TestInterfaceConstructor4> impl = TestInterfaceConstructor4::create(usvStringArg);
    v8::Local<v8::Object> wrapper = info.Holder();
    impl->associateWithWrapper(info.GetIsolate(), &V8TestInterfaceConstructor4::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "TestInterfaceConstructor4", info.Holder(), info.GetIsolate());
    switch (std::min(1, info.Length())) {
    case 1:
        if (V8TestInterfaceConstructor4::hasInstance(info[0], info.GetIsolate())) {
            TestInterfaceConstructor4V8Internal::constructor1(info);
            return;
        }
        if (true) {
            TestInterfaceConstructor4V8Internal::constructor2(info);
            return;
        }
        break;
    default:
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        exceptionState.throwIfNeeded();
        return;
    }
    exceptionState.throwTypeError("No matching constructor signature.");
    exceptionState.throwIfNeeded();
}

} // namespace TestInterfaceConstructor4V8Internal

void V8TestInterfaceConstructor4::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("TestInterfaceConstructor4"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    TestInterfaceConstructor4V8Internal::constructor(info);
}

static void installV8TestInterfaceConstructor4Template(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "TestInterfaceConstructor4", v8::Local<v8::FunctionTemplate>(), V8TestInterfaceConstructor4::internalFieldCount,
        0, 0,
        0, 0,
        0, 0);
    functionTemplate->SetCallHandler(V8TestInterfaceConstructor4::constructorCallback);
    functionTemplate->SetLength(1);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8TestInterfaceConstructor4::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TestInterfaceConstructor4Template);
}

bool V8TestInterfaceConstructor4::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8TestInterfaceConstructor4::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TestInterfaceConstructor4* V8TestInterfaceConstructor4::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8TestInterfaceConstructor4::refObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<TestInterfaceConstructor4>()->ref();
}

void V8TestInterfaceConstructor4::derefObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<TestInterfaceConstructor4>()->deref();
}

} // namespace blink
