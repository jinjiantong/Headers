//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MMPNavigationDelegate-Protocol.h"

@class ImmPayAccountView, ImmPayEventHandler, ImmPaySettingService, ImmPayWindows, MMPNavigation, MMPToastView, NSMutableArray, NSString, UIView;

@interface ImmPayViewHandler : NSObject <MMPNavigationDelegate>
{
    ImmPayWindows *_windowsMg;
    MMPToastView *_loadingView;
    ImmPayAccountView *_accountView;
    UIView *_maskView;
    MMPNavigation *_navi;
    _Bool _isLoadingNow;
    _Bool _keepLoading;
    _Bool _hadHideAllView;
    NSString *_loadingText;
    ImmPayEventHandler *_eventHandler;
    NSMutableArray *_viewArray;
    ImmPaySettingService *_paySetting;
    NSMutableArray *_docTrash;
}

@property(nonatomic) _Bool hadHideAllView; // @synthesize hadHideAllView=_hadHideAllView;
@property(retain, nonatomic) NSMutableArray *docTrash; // @synthesize docTrash=_docTrash;
@property(retain, nonatomic) ImmPaySettingService *paySetting; // @synthesize paySetting=_paySetting;
@property(retain, nonatomic) NSMutableArray *viewArray; // @synthesize viewArray=_viewArray;
@property(nonatomic) __weak ImmPayEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
@property(nonatomic) _Bool keepLoading; // @synthesize keepLoading=_keepLoading;
@property(nonatomic) _Bool isLoadingNow; // @synthesize isLoadingNow=_isLoadingNow;
- (void).cxx_destruct;
- (void)navigation:(id)arg1 didPopViewController:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resumeAllView:(id)arg1;
- (void)hideAllView:(id)arg1;
- (void)cancelLoginNotification;
- (void)observerLoginNotification;
- (void)updatePaySettingWithData:(id)arg1;
- (void)showPaySettingWithAction:(id)arg1;
- (void)updateBackgroundViewWithUsrName:(id)arg1 andPhoto:(id)arg2;
- (void)setupBackgroundViewForThirdApp;
- (void)onActions:(id)arg1;
- (void)onAction:(id)arg1;
- (void)onBackAnimated:(_Bool)arg1;
- (void)onDestroy:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)showMessage:(id)arg1 withAction:(id)arg2;
- (void)showErrorMessage:(id)arg1;
- (void)showLoadingViewWithText:(id)arg1 bShow:(_Bool)arg2;
- (void)showLoading:(_Bool)arg1;
- (_Bool)showVCView:(id)arg1 show:(_Bool)arg2 animation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showViewBetween2VC:(_Bool)arg1;
- (id)getNavigation;
- (void)dismissVC:(_Bool)arg1;
- (void)presentVC:(id)arg1 backFlag:(_Bool)arg2 wpageFlag:(_Bool)arg3;
- (_Bool)setAccessibilityLabelInView:(id)arg1 isRootView:(_Bool)arg2;
- (void)undoModal4AccessibilityView;
- (void)doModal4AccessibilityView:(unsigned long long)arg1;
- (_Bool)vcIsView:(id)arg1;
- (_Bool)vcIndexIsView:(unsigned long long)arg1;
- (id)createMaskView;
- (void)checkExit;
- (void)dismissViewType:(unsigned long long)arg1 removeView:(_Bool)arg2;
- (_Bool)removeVCView:(id)arg1;
- (void)removeVC:(id)arg1;
- (void)dismissView:(id)arg1 animated:(_Bool)arg2 exitFlag:(_Bool)arg3;
- (void)beforeViewShow;
- (void)presentView:(id)arg1 backFlag:(_Bool)arg2;
- (void)dismissAllView:(_Bool)arg1;
- (void)onView:(id)arg1 backFlag:(_Bool)arg2 wpageFlag:(_Bool)arg3;
- (void)close;
- (void)dealloc;
- (id)initWithEventHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

