// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8URL.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8Blob.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8URL.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
WrapperTypeInfo V8URL::wrapperTypeInfo = { gin::kEmbedderBlink, V8URL::domTemplate, V8URL::refObject, V8URL::derefObject, V8URL::trace, 0, 0, V8URL::preparePrototypeObject, V8URL::installConditionallyEnabledProperties, "URL", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMURL.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DOMURL::s_wrapperTypeInfo = V8URL::wrapperTypeInfo;

namespace DOMURLV8Internal {
static void (*createObjectURLMethodForPartialInterface)(const v8::FunctionCallbackInfo<v8::Value>&) = 0;

static void hrefAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMURL* impl = V8URL::toImpl(holder);
    v8SetReturnValueString(info, impl->href(), info.GetIsolate());
}

static void hrefAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMURLV8Internal::hrefAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void hrefAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "href", "URL", holder, info.GetIsolate());
    DOMURL* impl = V8URL::toImpl(holder);
    V8StringResource<> cppValue = toUSVString(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setHref(cppValue);
}

static void hrefAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    DOMURLV8Internal::hrefAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void originAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMURL* impl = V8URL::toImpl(holder);
    v8SetReturnValueString(info, impl->origin(), info.GetIsolate());
}

static void originAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMURLV8Internal::originAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void protocolAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMURL* impl = V8URL::toImpl(holder);
    v8SetReturnValueString(info, impl->protocol(), info.GetIsolate());
}

static void protocolAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMURLV8Internal::protocolAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void protocolAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "protocol", "URL", holder, info.GetIsolate());
    DOMURL* impl = V8URL::toImpl(holder);
    V8StringResource<> cppValue = toUSVString(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setProtocol(cppValue);
}

static void protocolAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    DOMURLV8Internal::protocolAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void usernameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMURL* impl = V8URL::toImpl(holder);
    v8SetReturnValueString(info, impl->username(), info.GetIsolate());
}

static void usernameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMURLV8Internal::usernameAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void usernameAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "username", "URL", holder, info.GetIsolate());
    DOMURL* impl = V8URL::toImpl(holder);
    V8StringResource<> cppValue = toUSVString(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setUsername(cppValue);
}

static void usernameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    DOMURLV8Internal::usernameAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void passwordAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMURL* impl = V8URL::toImpl(holder);
    v8SetReturnValueString(info, impl->password(), info.GetIsolate());
}

static void passwordAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMURLV8Internal::passwordAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void passwordAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "password", "URL", holder, info.GetIsolate());
    DOMURL* impl = V8URL::toImpl(holder);
    V8StringResource<> cppValue = toUSVString(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setPassword(cppValue);
}

static void passwordAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    DOMURLV8Internal::passwordAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void hostAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMURL* impl = V8URL::toImpl(holder);
    v8SetReturnValueString(info, impl->host(), info.GetIsolate());
}

static void hostAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMURLV8Internal::hostAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void hostAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "host", "URL", holder, info.GetIsolate());
    DOMURL* impl = V8URL::toImpl(holder);
    V8StringResource<> cppValue = toUSVString(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setHost(cppValue);
}

static void hostAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    DOMURLV8Internal::hostAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void hostnameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMURL* impl = V8URL::toImpl(holder);
    v8SetReturnValueString(info, impl->hostname(), info.GetIsolate());
}

static void hostnameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMURLV8Internal::hostnameAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void hostnameAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "hostname", "URL", holder, info.GetIsolate());
    DOMURL* impl = V8URL::toImpl(holder);
    V8StringResource<> cppValue = toUSVString(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setHostname(cppValue);
}

static void hostnameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    DOMURLV8Internal::hostnameAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void portAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMURL* impl = V8URL::toImpl(holder);
    v8SetReturnValueString(info, impl->port(), info.GetIsolate());
}

static void portAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMURLV8Internal::portAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void portAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "port", "URL", holder, info.GetIsolate());
    DOMURL* impl = V8URL::toImpl(holder);
    V8StringResource<> cppValue = toUSVString(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setPort(cppValue);
}

static void portAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    DOMURLV8Internal::portAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void pathnameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMURL* impl = V8URL::toImpl(holder);
    v8SetReturnValueString(info, impl->pathname(), info.GetIsolate());
}

static void pathnameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMURLV8Internal::pathnameAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void pathnameAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "pathname", "URL", holder, info.GetIsolate());
    DOMURL* impl = V8URL::toImpl(holder);
    V8StringResource<> cppValue = toUSVString(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setPathname(cppValue);
}

static void pathnameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    DOMURLV8Internal::pathnameAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void searchAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMURL* impl = V8URL::toImpl(holder);
    v8SetReturnValueString(info, impl->search(), info.GetIsolate());
}

static void searchAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMURLV8Internal::searchAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void searchAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "search", "URL", holder, info.GetIsolate());
    DOMURL* impl = V8URL::toImpl(holder);
    V8StringResource<> cppValue = toUSVString(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setSearch(cppValue);
}

static void searchAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    DOMURLV8Internal::searchAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void hashAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMURL* impl = V8URL::toImpl(holder);
    v8SetReturnValueString(info, impl->hash(), info.GetIsolate());
}

static void hashAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMURLV8Internal::hashAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void hashAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "hash", "URL", holder, info.GetIsolate());
    DOMURL* impl = V8URL::toImpl(holder);
    V8StringResource<> cppValue = toUSVString(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setHash(cppValue);
}

static void hashAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    DOMURLV8Internal::hashAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void createObjectURL1Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createObjectURL", "URL", info.Holder(), info.GetIsolate());
    Blob* blob;
    {
        blob = V8Blob::toImplWithTypeCheck(info.GetIsolate(), info[0]);
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    String result = DOMURL::createObjectURL(executionContext, blob, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueStringOrNull(info, result, info.GetIsolate());
}

static void revokeObjectURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "revokeObjectURL", "URL", 1, info.Length()), info.GetIsolate());
        return;
    }
    V8StringResource<> url;
    {
        url = info[0];
        if (!url.prepare())
            return;
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    DOMURL::revokeObjectURL(executionContext, url);
}

static void revokeObjectURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DOMURLV8Internal::revokeObjectURLMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void toStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMURL* impl = V8URL::toImpl(info.Holder());
    v8SetReturnValueString(info, impl->href(), info.GetIsolate());
}

static void toStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DOMURLV8Internal::toStringMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void createObjectURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createObjectURL", "URL", info.Holder(), info.GetIsolate());
    switch (std::min(1, info.Length())) {
    case 1:
        if (isUndefinedOrNull(info[0])) {
            createObjectURL1Method(info);
            return;
        }
        if (V8Blob::hasInstance(info[0], info.GetIsolate())) {
            createObjectURL1Method(info);
            return;
        }
        break;
    }
    ASSERT(createObjectURLMethodForPartialInterface);
    (createObjectURLMethodForPartialInterface)(info);
}

static void createObjectURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DOMURLV8Internal::createObjectURLMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor1(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "URL", info.Holder(), info.GetIsolate());
    V8StringResource<> url;
    {
        url = toUSVString(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RawPtr<DOMURL> impl = DOMURL::create(url, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8URL::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

static void constructor2(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "URL", info.Holder(), info.GetIsolate());
    V8StringResource<> url;
    V8StringResource<> base;
    {
        url = toUSVString(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        base = toUSVString(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RawPtr<DOMURL> impl = DOMURL::create(url, base, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8URL::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

static void constructor3(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "URL", info.Holder(), info.GetIsolate());
    V8StringResource<> url;
    DOMURL* base;
    {
        url = toUSVString(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        base = V8URL::toImplWithTypeCheck(info.GetIsolate(), info[1]);
    }
    RawPtr<DOMURL> impl = DOMURL::create(url, base, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8URL::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "URL", info.Holder(), info.GetIsolate());
    switch (std::min(2, info.Length())) {
    case 1:
        if (true) {
            DOMURLV8Internal::constructor1(info);
            return;
        }
        break;
    case 2:
        if (V8URL::hasInstance(info[1], info.GetIsolate())) {
            DOMURLV8Internal::constructor3(info);
            return;
        }
        if (true) {
            DOMURLV8Internal::constructor2(info);
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

} // namespace DOMURLV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8URLAccessors[] = {
    {"href", DOMURLV8Internal::hrefAttributeGetterCallback, DOMURLV8Internal::hrefAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"origin", DOMURLV8Internal::originAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"protocol", DOMURLV8Internal::protocolAttributeGetterCallback, DOMURLV8Internal::protocolAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"username", DOMURLV8Internal::usernameAttributeGetterCallback, DOMURLV8Internal::usernameAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"password", DOMURLV8Internal::passwordAttributeGetterCallback, DOMURLV8Internal::passwordAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"host", DOMURLV8Internal::hostAttributeGetterCallback, DOMURLV8Internal::hostAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"hostname", DOMURLV8Internal::hostnameAttributeGetterCallback, DOMURLV8Internal::hostnameAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"port", DOMURLV8Internal::portAttributeGetterCallback, DOMURLV8Internal::portAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"pathname", DOMURLV8Internal::pathnameAttributeGetterCallback, DOMURLV8Internal::pathnameAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"search", DOMURLV8Internal::searchAttributeGetterCallback, DOMURLV8Internal::searchAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"hash", DOMURLV8Internal::hashAttributeGetterCallback, DOMURLV8Internal::hashAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

void V8URL::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("URL"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    DOMURLV8Internal::constructor(info);
}

void V8URL::installV8URLTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "URL", v8::Local<v8::FunctionTemplate>(), V8URL::internalFieldCount,
        0, 0,
        V8URLAccessors, WTF_ARRAY_LENGTH(V8URLAccessors),
        0, 0);
    functionTemplate->SetCallHandler(V8URL::constructorCallback);
    functionTemplate->SetLength(1);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    const V8DOMConfiguration::MethodConfiguration revokeObjectURLMethodConfiguration = {
        "revokeObjectURL", DOMURLV8Internal::revokeObjectURLMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts,
    };
    V8DOMConfiguration::installMethod(isolate, functionTemplate, v8::Local<v8::Signature>(), v8::None, revokeObjectURLMethodConfiguration);
    const V8DOMConfiguration::MethodConfiguration toStringMethodConfiguration = {
        "toString", DOMURLV8Internal::toStringMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
    };
    V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum), toStringMethodConfiguration);
    const V8DOMConfiguration::MethodConfiguration createObjectURLMethodConfiguration = {
        "createObjectURL", DOMURLV8Internal::createObjectURLMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts,
    };
    V8DOMConfiguration::installMethod(isolate, functionTemplate, v8::Local<v8::Signature>(), v8::None, createObjectURLMethodConfiguration);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8URL::domTemplate(v8::Isolate* isolate)
{
    ASSERT(V8URL::installV8URLTemplateFunction != V8URL::installV8URLTemplate);
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), V8URL::installV8URLTemplateFunction);
}

bool V8URL::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8URL::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DOMURL* V8URL::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8URL::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8URL::derefObject(ScriptWrappable* scriptWrappable)
{
}

InstallTemplateFunction V8URL::installV8URLTemplateFunction = (InstallTemplateFunction)&V8URL::installV8URLTemplate;

void V8URL::updateWrapperTypeInfo(InstallTemplateFunction installTemplateFunction, PreparePrototypeObjectFunction preparePrototypeObjectFunction)
{
    V8URL::installV8URLTemplateFunction = installTemplateFunction;
    if (preparePrototypeObjectFunction)
        V8URL::wrapperTypeInfo.preparePrototypeObjectFunction = preparePrototypeObjectFunction;
}

void V8URL::registerCreateObjectURLMethodForPartialInterface(void (*method)(const v8::FunctionCallbackInfo<v8::Value>&))
{
    DOMURLV8Internal::createObjectURLMethodForPartialInterface = method;
}
} // namespace blink