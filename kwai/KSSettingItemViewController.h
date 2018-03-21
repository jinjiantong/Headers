//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseSettingViewController.h"

#import "KSURLPortalAnnotation-Protocol.h"

@class KSSettingItem, NSString;

@interface KSSettingItemViewController : KSBaseSettingViewController <KSURLPortalAnnotation>
{
    KSSettingItem *_saveProduceLimitItem;
    _Bool _isLoginOut;
    KSSettingItem *_blankHeaderItem;
    KSSettingItem *_phoneItem;
    KSSettingItem *_securityItem;
    KSSettingItem *_privacyItem;
    KSSettingItem *_notifyItem;
    KSSettingItem *_emailItem;
    KSSettingItem *_kcardPromoteItem;
    KSSettingItem *_renwokanPromoteItem;
    KSSettingItem *_feedbackItem;
    KSSettingItem *_labItem;
    KSSettingItem *_logoutItem;
    KSSettingItem *_halfBlankHeaderItem;
    NSString *_settingBindPhonePointToken;
    NSString *_settingAccountProtectPointToken;
    NSString *_settingFeedbackPointToken;
    NSString *_settingLabPointToken;
    NSString *_settingKcardPromotePointToken;
    NSString *_settingRenwokanPromotePointToken;
}

+ (id)ks_portalPath;
@property(nonatomic) _Bool isLoginOut; // @synthesize isLoginOut=_isLoginOut;
@property(copy, nonatomic) NSString *settingRenwokanPromotePointToken; // @synthesize settingRenwokanPromotePointToken=_settingRenwokanPromotePointToken;
@property(retain, nonatomic) NSString *settingKcardPromotePointToken; // @synthesize settingKcardPromotePointToken=_settingKcardPromotePointToken;
@property(copy, nonatomic) NSString *settingLabPointToken; // @synthesize settingLabPointToken=_settingLabPointToken;
@property(retain, nonatomic) NSString *settingFeedbackPointToken; // @synthesize settingFeedbackPointToken=_settingFeedbackPointToken;
@property(retain, nonatomic) NSString *settingAccountProtectPointToken; // @synthesize settingAccountProtectPointToken=_settingAccountProtectPointToken;
@property(retain, nonatomic) NSString *settingBindPhonePointToken; // @synthesize settingBindPhonePointToken=_settingBindPhonePointToken;
@property(retain, nonatomic) KSSettingItem *halfBlankHeaderItem; // @synthesize halfBlankHeaderItem=_halfBlankHeaderItem;
@property(retain, nonatomic) KSSettingItem *logoutItem; // @synthesize logoutItem=_logoutItem;
@property(retain, nonatomic) KSSettingItem *labItem; // @synthesize labItem=_labItem;
@property(retain, nonatomic) KSSettingItem *feedbackItem; // @synthesize feedbackItem=_feedbackItem;
@property(retain, nonatomic) KSSettingItem *renwokanPromoteItem; // @synthesize renwokanPromoteItem=_renwokanPromoteItem;
@property(retain, nonatomic) KSSettingItem *kcardPromoteItem; // @synthesize kcardPromoteItem=_kcardPromoteItem;
@property(retain, nonatomic) KSSettingItem *emailItem; // @synthesize emailItem=_emailItem;
@property(retain, nonatomic) KSSettingItem *notifyItem; // @synthesize notifyItem=_notifyItem;
@property(retain, nonatomic) KSSettingItem *privacyItem; // @synthesize privacyItem=_privacyItem;
@property(retain, nonatomic) KSSettingItem *securityItem; // @synthesize securityItem=_securityItem;
@property(retain, nonatomic) KSSettingItem *phoneItem; // @synthesize phoneItem=_phoneItem;
@property(retain, nonatomic) KSSettingItem *blankHeaderItem; // @synthesize blankHeaderItem=_blankHeaderItem;
- (void).cxx_destruct;
- (void)logClickEventWithName:(id)arg1 action:(int)arg2;
- (id)ksuShowMetaData;
- (void)didSixTapTitleLabel:(id)arg1;
- (void)addLogsItem;
- (void)showFreeTrafficView;
- (void)logoutAction;
- (void)mywalletAction;
- (void)labAction;
- (void)fansTopAction;
- (void)aboutUsAction;
- (void)feedbackAction;
- (id)bindingPhone;
- (unsigned long long)bytesOfCache;
- (id)freeTrafficItem;
- (id)aboutUsItem;
- (id)fansTopFooterItem;
- (id)fansTopItem;
- (id)socialStar;
- (id)walletItem;
- (id)saveToLocalItem;
- (id)cacheItem;
- (id)notificationItem;
- (_Bool)snapshotNavigationBarWhenDisappear;
- (void)refreshFreeTrafficState;
- (void)reloadPrivateItemsSettings;
- (void)refreshUserGuidePointWithShow:(_Bool)arg1;
- (void)refreshPhoneBindingStatus;
- (void)receiveBindPhoneSuccessNotification:(id)arg1;
- (void)recoverNetWorkNotification;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updatePhoneIfNeeded;
- (void)clearAllUserGuideObserver;
- (void)addUserGuideObserver;
- (void)configItems;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)ks_presentViewControllerWithContext:(id)arg1;
- (_Bool)ks_presentViewNeedUserAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
