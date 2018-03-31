//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface DWInstanceModule : NSObject <WXModuleProtocol>
{
    _Bool _resumePlay;
    WXSDKInstance *weexInstance;
}

+ (id)toast:(id)arg1 inView:(id)arg2 dismissAfterSeconds:(double)arg3 delayTime:(double)arg4 isFullScreen:(_Bool)arg5;
+ (id)wx_export_method_69;
+ (id)wx_export_method_68;
+ (id)wx_export_method_67;
+ (id)wx_export_method_66;
+ (id)wx_export_method_65;
+ (id)wx_export_method_64;
+ (id)wx_export_method_63;
+ (id)wx_export_method_62;
+ (id)wx_export_method_61;
+ (id)wx_export_method_60;
+ (id)wx_export_method_59;
+ (id)wx_export_method_58;
+ (id)wx_export_method_57;
+ (id)wx_export_method_56;
+ (id)wx_export_method_55;
+ (id)wx_export_method_51;
+ (id)wx_export_method_49;
+ (id)wx_export_method_48;
+ (id)wx_export_method_47;
+ (id)wx_export_method_45;
+ (id)wx_export_method_44;
@property(nonatomic) _Bool resumePlay; // @synthesize resumePlay=_resumePlay;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)openWebViewLayer:(id)arg1;
- (void)closeWeexViewLayer;
- (void)openWeexViewLayer:(id)arg1;
- (void)share:(unsigned long long)arg1 index:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (id)getCurrentVC;
- (id)parseDictToJSONString:(id)arg1;
- (void)openVideo:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (void)onWXCmpDismiss:(id)arg1;
- (void)showAllInteractiveCmp:(id)arg1;
- (void)addFollow:(CDUnknownBlockType)arg1;
- (void)sendDanma:(CDUnknownBlockType)arg1;
- (void)likeVideo:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getUTParams:(CDUnknownBlockType)arg1;
- (void)getConfig:(CDUnknownBlockType)arg1;
- (void)syncData:(id)arg1;
- (void)playVideo;
- (void)pauseVideo;
- (void)openurl:(id)arg1;
- (void)openUrlAction:(id)arg1;
- (void)toast:(id)arg1;
- (void)visible;
- (void)invisibale;
- (void)closeAction;
- (void)addToCartWithItemInfo:(id)arg1;
- (void)addCart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

