//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, WXSDKInstance;

@interface MCWeexCardContainerView : UIView
{
    CDUnknownBlockType _onDeleteBlock;
    NSString *_pageName;
    UIView *_dynamicCardView;
    WXSDKInstance *_wxSDKInstance;
    CDUnknownBlockType _wxModuleCallback;
    NSString *_lastWeexIdentify;
    UILabel *_loadingTipLabel;
}

+ (id)weexEnvWithOfficialWeexMessage:(id)arg1;
+ (id)weexEnvWithWeexMessage:(id)arg1;
@property(retain, nonatomic) UILabel *loadingTipLabel; // @synthesize loadingTipLabel=_loadingTipLabel;
@property(retain, nonatomic) NSString *lastWeexIdentify; // @synthesize lastWeexIdentify=_lastWeexIdentify;
@property(copy, nonatomic) CDUnknownBlockType wxModuleCallback; // @synthesize wxModuleCallback=_wxModuleCallback;
@property(retain, nonatomic) WXSDKInstance *wxSDKInstance; // @synthesize wxSDKInstance=_wxSDKInstance;
@property(retain, nonatomic) UIView *dynamicCardView; // @synthesize dynamicCardView=_dynamicCardView;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) CDUnknownBlockType onDeleteBlock; // @synthesize onDeleteBlock=_onDeleteBlock;
- (void).cxx_destruct;
- (void)menuControllerWillHideMenuNotification:(id)arg1;
- (void)customMenuAction:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)showCustomMenuViewWithTitles:(id)arg1;
- (void)innerFinishUpdatedWeexViewWithWXSDKInstance:(id)arg1 aSuccessView:(id)arg2;
- (void)dealloc;
- (void)setLoadingTipLabelFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateWeexContainerWithTemplate:(id)arg1 renderData:(id)arg2 identifier:(id)arg3 renderFinished:(CDUnknownBlockType)arg4;
- (void)innerUpdateWeexBubbleWithTemplateStr:(id)arg1 renderData:(id)arg2 wxSDKInstance:(id)arg3 finished:(CDUnknownBlockType)arg4;
- (void)initView;
- (void)onDelete;
- (id)init;

@end

