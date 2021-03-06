//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "GCVImageLoaderProtocol-Protocol.h"
#import "GLKViewDelegate-Protocol.h"

@class EAGLContext, JSContext, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WVGCanvasModule : WVDynamicHandler <GLKViewDelegate, GCVImageLoaderProtocol>
{
    JSContext *_jsContext;
    double _devicePixelRatio;
    NSMutableDictionary *_pluginDict;
    NSMutableDictionary *_componentDict;
    NSObject<OS_dispatch_queue> *_gcanvasQueue;
    EAGLContext *_firstContext;
}

+ (id)executeCallNative:(id)arg1;
+ (void)removeModuleByComponentId:(id)arg1;
+ (id)moduleByComponentId:(id)arg1;
+ (void)setModule:(id)arg1 forComponentId:(id)arg2;
+ (void)initialize;
+ (unsigned long long)instanceScope;
@property(retain, nonatomic) EAGLContext *firstContext; // @synthesize firstContext=_firstContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *gcanvasQueue; // @synthesize gcanvasQueue=_gcanvasQueue;
@property(retain, nonatomic) NSMutableDictionary *componentDict; // @synthesize componentDict=_componentDict;
@property(retain, nonatomic) NSMutableDictionary *pluginDict; // @synthesize pluginDict=_pluginDict;
@property(nonatomic) double devicePixelRatio; // @synthesize devicePixelRatio=_devicePixelRatio;
@property(retain, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
- (void).cxx_destruct;
- (id)callGCanvasNative:(id)arg1;
- (id)callGCanvasNativeOnMainThread:(id)arg1;
- (void)loadImage:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)execCommandById:(id)arg1;
- (id)gcanvasComponentByGLKView:(id)arg1;
- (id)getEAGLContext;
- (void)setContextType:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)bindImageTexture:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)preLoadImage:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)render:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)registerGlobalMethod;
- (void)enable:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)releaseManager;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

