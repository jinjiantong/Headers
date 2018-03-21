//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DRObject.h"

#import "DRContextProtocol-Protocol.h"
#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface DRWeexContext : DRObject <DRContextProtocol, WXModuleProtocol>
{
}

+ (double)heightOfViewWithTemplate:(id)arg1 data:(id)arg2 width:(double)arg3 renderType:(id)arg4 moduleName:(id)arg5;
+ (id)sharedInstance;
+ (id)wx_export_method_63;
- (void)reset;
- (void)clear;
- (_Bool)resetWithModuleName:(id)arg1;
- (void)clearWithModuleName:(id)arg1;
- (id)imageViewWithDRItem:(id)arg1 imageTag:(id)arg2;
- (_Bool)isContextReadyWithRenderType:(id)arg1;
- (_Bool)isContextReadyWithDRItem:(id)arg1;
- (void)renderViewClickWithProps:(id)arg1 data:(id)arg2;
- (id)dItemWithItemProps:(id)arg1;
- (void)refreshWithDRItem:(id)arg1;
- (void)bindDataWithDRItem:(id)arg1;
- (void)failCallbackWithDRItem:(id)arg1;
- (void)refreshFinishCallbackWithDRItem:(id)arg1;
- (void)renderFinishCallbackWithDRItem:(id)arg1;
- (void)createCallbackWithDRItem:(id)arg1;
- (id)itemPropsWithDRItem:(id)arg1;
- (void)recycleDItemViewWithDRItem:(id)arg1;
- (id)dItemViewWithDRItem:(id)arg1;
- (void)initContextWithModuleName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end
