//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/BaseSingleton.h>

@class NSMutableDictionary, NSObject, UIView, UIViewController;
@protocol OS_dispatch_queue;

@interface CFT_TPSceneMananger : BaseSingleton
{
    int _bindCardScene;
    int _withdrawScene;
    int _modifyPswScene;
    int _balanceScene;
    int _idCardVerifyScene;
    NSObject<OS_dispatch_queue> *_queue_serial;
    _Bool _backforwarding;
    UIViewController *_currentViewController;
    UIView *_currentLoadingView;
    NSMutableDictionary *_accept_agreement_dict;
    NSMutableDictionary *_qzhb_money_dict;
    NSMutableDictionary *_bindCardSceneParam;
}

+ (_Bool)isCallerVcDisappear;
+ (_Bool)isInPaycenterSDK:(id)arg1;
+ (_Bool)navIsInQQWalletFor:(id)arg1;
+ (void)backToCallerVcWithAnimated:(_Bool)arg1;
+ (void)backToQQTabViewControllerFrom:(id)arg1 animated:(_Bool)arg2;
+ (void)backToQQTabWithAnimated:(_Bool)arg1;
+ (void)backToClass:(Class)arg1 from:(id)arg2 animated:(_Bool)arg3;
+ (void)backToClass:(Class)arg1 animated:(_Bool)arg2;
+ (_Bool)backToViewController:(id)arg1 from:(id)arg2 animated:(_Bool)arg3;
+ (_Bool)backToViewController:(id)arg1 animated:(_Bool)arg2;
+ (void)setIdCardVerifyScene:(int)arg1;
+ (void)setBalanceScene:(int)arg1;
+ (void)setModifyPswScene:(int)arg1;
+ (void)setWithdrawScene:(int)arg1;
+ (void)setBindCardScene:(int)arg1;
+ (int)idCardVerifyScene;
+ (int)balanceScene;
+ (int)modifyPswScene;
+ (int)withdrawScene;
+ (int)bindCardScene;
+ (id)bindCardSceneParam;
@property(retain, nonatomic) NSMutableDictionary *bindCardSceneParam; // @synthesize bindCardSceneParam=_bindCardSceneParam;
@property(nonatomic) _Bool backforwarding; // @synthesize backforwarding=_backforwarding;
@property(retain, nonatomic) NSMutableDictionary *qzhb_money_dict; // @synthesize qzhb_money_dict=_qzhb_money_dict;
@property(retain, nonatomic) NSMutableDictionary *accept_agreement_dict; // @synthesize accept_agreement_dict=_accept_agreement_dict;
@property(nonatomic) __weak UIView *currentLoadingView; // @synthesize currentLoadingView=_currentLoadingView;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void).cxx_destruct;
- (void)onReport:(id)arg1;
- (void)onSessionTimeoutNotify;
- (void)onForceOfflineNotify;
- (void)onQQLoginSuccess;
- (void)onRecvQQMessage:(id)arg1;
- (void)onAppLaunchFinish;
- (void)openWebPage:(id)arg1;
- (void)openEmbeledPage:(id)arg1;
- (id)rootViewController;
- (void)dealloc;
- (void)setBindCardScene:(int)arg1;
- (void)resetBackforwarding;
- (void)hotPathchOCSPlugins;
- (id)init;

@end

