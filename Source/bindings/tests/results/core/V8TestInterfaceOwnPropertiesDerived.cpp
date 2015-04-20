// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8TestInterfaceOwnPropertiesDerived.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

const WrapperTypeInfo V8TestInterfaceOwnPropertiesDerived::wrapperTypeInfo = { gin::kEmbedderBlink, V8TestInterfaceOwnPropertiesDerived::domTemplate, V8TestInterfaceOwnPropertiesDerived::refObject, V8TestInterfaceOwnPropertiesDerived::derefObject, V8TestInterfaceOwnPropertiesDerived::trace, 0, 0, V8TestInterfaceOwnPropertiesDerived::preparePrototypeObject, V8TestInterfaceOwnPropertiesDerived::installConditionallyEnabledProperties, "TestInterfaceOwnPropertiesDerived", &V8TestInterfaceOwnProperties::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::RefCountedObject };

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TestInterfaceOwnPropertiesDerived.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& TestInterfaceOwnPropertiesDerived::s_wrapperTypeInfo = V8TestInterfaceOwnPropertiesDerived::wrapperTypeInfo;

namespace TestInterfaceOwnPropertiesDerivedV8Internal {

static void noExposeJSAccessorAttributeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TestInterfaceOwnPropertiesDerived* impl = V8TestInterfaceOwnPropertiesDerived::toImpl(holder);
    v8SetReturnValueInt(info, impl->noExposeJSAccessorAttribute());
}

static void noExposeJSAccessorAttributeAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestInterfaceOwnPropertiesDerivedV8Internal::noExposeJSAccessorAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void noExposeJSAccessorAttributeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "noExposeJSAccessorAttribute", "TestInterfaceOwnPropertiesDerived", holder, info.GetIsolate());
    TestInterfaceOwnPropertiesDerived* impl = V8TestInterfaceOwnPropertiesDerived::toImpl(holder);
    int cppValue = toInt32(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setNoExposeJSAccessorAttribute(cppValue);
}

static void noExposeJSAccessorAttributeAttributeSetterCallback(v8::Local<v8::Name>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    TestInterfaceOwnPropertiesDerivedV8Internal::noExposeJSAccessorAttributeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void exposeJSAccessorAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TestInterfaceOwnPropertiesDerived* impl = V8TestInterfaceOwnPropertiesDerived::toImpl(holder);
    v8SetReturnValueInt(info, impl->exposeJSAccessorAttribute());
}

static void exposeJSAccessorAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestInterfaceOwnPropertiesDerivedV8Internal::exposeJSAccessorAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void exposeJSAccessorAttributeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "exposeJSAccessorAttribute", "TestInterfaceOwnPropertiesDerived", holder, info.GetIsolate());
    TestInterfaceOwnPropertiesDerived* impl = V8TestInterfaceOwnPropertiesDerived::toImpl(holder);
    int cppValue = toInt32(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setExposeJSAccessorAttribute(cppValue);
}

static void exposeJSAccessorAttributeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    TestInterfaceOwnPropertiesDerivedV8Internal::exposeJSAccessorAttributeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotExposeJSAccessorAttributeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TestInterfaceOwnPropertiesDerived* impl = V8TestInterfaceOwnPropertiesDerived::toImpl(holder);
    v8SetReturnValueInt(info, impl->doNotExposeJSAccessorAttribute());
}

static void doNotExposeJSAccessorAttributeAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestInterfaceOwnPropertiesDerivedV8Internal::doNotExposeJSAccessorAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotExposeJSAccessorAttributeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "doNotExposeJSAccessorAttribute", "TestInterfaceOwnPropertiesDerived", holder, info.GetIsolate());
    TestInterfaceOwnPropertiesDerived* impl = V8TestInterfaceOwnPropertiesDerived::toImpl(holder);
    int cppValue = toInt32(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setDoNotExposeJSAccessorAttribute(cppValue);
}

static void doNotExposeJSAccessorAttributeAttributeSetterCallback(v8::Local<v8::Name>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    TestInterfaceOwnPropertiesDerivedV8Internal::doNotExposeJSAccessorAttributeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace TestInterfaceOwnPropertiesDerivedV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8TestInterfaceOwnPropertiesDerivedAttributes[] = {
    {"noExposeJSAccessorAttribute", TestInterfaceOwnPropertiesDerivedV8Internal::noExposeJSAccessorAttributeAttributeGetterCallback, TestInterfaceOwnPropertiesDerivedV8Internal::noExposeJSAccessorAttributeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance},
    {"doNotExposeJSAccessorAttribute", TestInterfaceOwnPropertiesDerivedV8Internal::doNotExposeJSAccessorAttributeAttributeGetterCallback, TestInterfaceOwnPropertiesDerivedV8Internal::doNotExposeJSAccessorAttributeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance},
};

static const V8DOMConfiguration::AccessorConfiguration V8TestInterfaceOwnPropertiesDerivedAccessors[] = {
    {"exposeJSAccessorAttribute", TestInterfaceOwnPropertiesDerivedV8Internal::exposeJSAccessorAttributeAttributeGetterCallback, TestInterfaceOwnPropertiesDerivedV8Internal::exposeJSAccessorAttributeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::CheckHolder},
};

static void installV8TestInterfaceOwnPropertiesDerivedTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "TestInterfaceOwnPropertiesDerived", V8TestInterfaceOwnProperties::domTemplate(isolate), V8TestInterfaceOwnPropertiesDerived::internalFieldCount,
        V8TestInterfaceOwnPropertiesDerivedAttributes, WTF_ARRAY_LENGTH(V8TestInterfaceOwnPropertiesDerivedAttributes),
        V8TestInterfaceOwnPropertiesDerivedAccessors, WTF_ARRAY_LENGTH(V8TestInterfaceOwnPropertiesDerivedAccessors),
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8TestInterfaceOwnPropertiesDerived::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TestInterfaceOwnPropertiesDerivedTemplate);
}

bool V8TestInterfaceOwnPropertiesDerived::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8TestInterfaceOwnPropertiesDerived::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TestInterfaceOwnPropertiesDerived* V8TestInterfaceOwnPropertiesDerived::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8TestInterfaceOwnPropertiesDerived::refObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<TestInterfaceOwnPropertiesDerived>()->ref();
}

void V8TestInterfaceOwnPropertiesDerived::derefObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<TestInterfaceOwnPropertiesDerived>()->deref();
}

} // namespace blink
