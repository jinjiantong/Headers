//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/QQTracerouteHandlerDelegate-Protocol.h>

@class NSString, QQTracerouteAndPingHandler;

@interface QQJSBridgeDevicePlugin : QQWebViewPluginQQBizBase <QQTracerouteHandlerDelegate>
{
    QQTracerouteAndPingHandler *_pingHandler;
    QQTracerouteAndPingHandler *_traceRouteHandler;
}

- (void)dealloc;
- (double)totalMemory;
- (double)usedMemory;
- (double)availableMemory;
- (void)tracerouteHandler:(id)arg1 traceRouteStepDone:(id)arg2;
- (void)tracerouteHandler:(id)arg1 traceRouteStepTimeout:(id)arg2;
- (void)tracerouteHandler:(id)arg1 tracerouteFailed:(id)arg2;
- (void)tracerouteHandler:(id)arg1 endedTracerouteWithSteps:(id)arg2;
- (void)handleJsBridgeRequest_device_getTraceRouteStatus:(id)arg1;
- (void)handleJsBridgeRequest_device_getPingStatus:(id)arg1;
- (void)handleJsBridgeRequest_device_setScreenStatus:(id)arg1;
- (_Bool)handleJsBridgeRequest_device_webviewType:(id)arg1;
- (_Bool)handleJsBridgeRequest_device_getNetworkInfo:(id)arg1;
- (_Bool)handleJsBridgeRequest_device_networkStatus:(id)arg1;
- (_Bool)handleJsBridgeRequest_device_getDeviceInfo:(id)arg1;
- (_Bool)handleJsBridgeRequest_device_qqBuild:(id)arg1;
- (_Bool)handleJsBridgeRequest_device_getClientInfo:(id)arg1;
- (_Bool)handleJsBridgeRequest_device_qqVersion:(id)arg1;
- (_Bool)handleJsBridgeRequest_device_modelVersion:(id)arg1;
- (_Bool)handleJsBridgeRequest_device_model:(id)arg1;
- (_Bool)handleJsBridgeRequest_device_systemVersion:(id)arg1;
- (_Bool)handleJsBridgeRequest_device_systemName:(id)arg1;
- (_Bool)handleJsBridgeRequest_device_isMobileQQ:(id)arg1;
- (_Bool)handleJsBridgeRequest_device_isJailBreakend:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

