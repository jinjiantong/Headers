//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

#import "TBIctEventSubscriber-Protocol.h"

@class NSString, TBVideoTweSVVC;

@interface TBVideoSVWXComponent : WXComponent <TBIctEventSubscriber>
{
    TBVideoTweSVVC *_videoTweSVVC;
}

+ (id)wx_export_method_32;
+ (id)wx_export_method_31;
+ (id)wx_export_method_30;
+ (id)wx_export_method_29;
+ (id)wx_export_method_28;
+ (id)wx_export_method_27;
+ (id)wx_export_method_26;
+ (id)wx_export_method_25;
+ (id)wx_export_method_24;
+ (id)wx_export_method_23;
+ (id)wx_export_method_22;
+ (id)wx_export_method_21;
+ (id)wx_export_method_20;
@property(retain, nonatomic) TBVideoTweSVVC *videoTweSVVC; // @synthesize videoTweSVVC=_videoTweSVVC;
- (void).cxx_destruct;
- (void)destroy:(CDUnknownBlockType)arg1;
- (void)callShareBtn:(CDUnknownBlockType)arg1;
- (void)callDanmakuBtn:(CDUnknownBlockType)arg1;
- (void)callReportBtn:(CDUnknownBlockType)arg1;
- (void)getScreenMode:(CDUnknownBlockType)arg1;
- (void)setScreenMode:(id)arg1;
- (void)getMuted:(CDUnknownBlockType)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)pause;
- (void)play;
- (void)getDuration:(CDUnknownBlockType)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)getCurrentTime:(CDUnknownBlockType)arg1;
- (id)handleEvent:(id)arg1;
- (void)unregistEvent;
- (void)registEvent;
- (void)updateAttributes:(id)arg1;
- (void)removeFromSuperview;
- (void)viewWillUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

