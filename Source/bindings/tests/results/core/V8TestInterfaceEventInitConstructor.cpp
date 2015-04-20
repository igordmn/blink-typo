// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8TestInterfaceEventInitConstructor.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8TestInterfaceEventInit.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

const WrapperTypeInfo V8TestInterfaceEventInitConstructor::wrapperTypeInfo = { gin::kEmbedderBlink, V8TestInterfaceEventInitConstructor::domTemplate, V8TestInterfaceEventInitConstructor::refObject, V8TestInterfaceEventInitConstructor::derefObject, V8TestInterfaceEventInitConstructor::trace, 0, 0, V8TestInterfaceEventInitConstructor::preparePrototypeObject, V8TestInterfaceEventInitConstructor::installConditionallyEnabledProperties, "TestInterfaceEventInitConstructor", &V8Event::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::WillBeGarbageCollectedObject };

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TestInterfaceEventInitConstructor.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& TestInterfaceEventInitConstructor::s_wrapperTypeInfo = V8TestInterfaceEventInitConstructor::wrapperTypeInfo;

namespace TestInterfaceEventInitConstructorV8Internal {

static void readonlyStringAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TestInterfaceEventInitConstructor* impl = V8TestInterfaceEventInitConstructor::toImpl(holder);
    v8SetReturnValueString(info, impl->readonlyStringAttribute(), info.GetIsolate());
}

static void readonlyStringAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestInterfaceEventInitConstructorV8Internal::readonlyStringAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "TestInterfaceEventInitConstructor", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    V8StringResource<> type;
    TestInterfaceEventInit testInterfaceEventInit;
    {
        type = info[0];
        if (!type.prepare())
            return;
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('testInterfaceEventInit') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8TestInterfaceEventInit::toImpl(info.GetIsolate(), info[1], testInterfaceEventInit, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RefPtrWillBeRawPtr<TestInterfaceEventInitConstructor> impl = TestInterfaceEventInitConstructor::create(type, testInterfaceEventInit);
    v8::Local<v8::Object> wrapper = info.Holder();
    impl->associateWithWrapper(info.GetIsolate(), &V8TestInterfaceEventInitConstructor::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace TestInterfaceEventInitConstructorV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8TestInterfaceEventInitConstructorAccessors[] = {
    {"readonlyStringAttribute", TestInterfaceEventInitConstructorV8Internal::readonlyStringAttributeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::CheckHolder},
};

void V8TestInterfaceEventInitConstructor::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("TestInterfaceEventInitConstructor"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    TestInterfaceEventInitConstructorV8Internal::constructor(info);
}

static void installV8TestInterfaceEventInitConstructorTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "TestInterfaceEventInitConstructor", V8Event::domTemplate(isolate), V8TestInterfaceEventInitConstructor::internalFieldCount,
        0, 0,
        V8TestInterfaceEventInitConstructorAccessors, WTF_ARRAY_LENGTH(V8TestInterfaceEventInitConstructorAccessors),
        0, 0);
    functionTemplate->SetCallHandler(V8TestInterfaceEventInitConstructor::constructorCallback);
    functionTemplate->SetLength(2);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8TestInterfaceEventInitConstructor::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TestInterfaceEventInitConstructorTemplate);
}

bool V8TestInterfaceEventInitConstructor::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8TestInterfaceEventInitConstructor::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TestInterfaceEventInitConstructor* V8TestInterfaceEventInitConstructor::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8TestInterfaceEventInitConstructor::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<TestInterfaceEventInitConstructor>()->ref();
#endif
}

void V8TestInterfaceEventInitConstructor::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<TestInterfaceEventInitConstructor>()->deref();
#endif
}

} // namespace blink
