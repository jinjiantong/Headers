//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IQQLockDictionaryValidChecker-Protocol.h>

@class NSArray, NSString, QQLockDictionary;

@interface QQAppSetting : NSObject <IQQLockDictionaryValidChecker>
{
    QQLockDictionary *_appSetting;
    _Bool _isFirstLanuch;
    _Bool _openVideoBackgroud;
    _Bool _isEuropeOrAmericaLocale;
}

+ (id)GetInstance;
@property(nonatomic) _Bool isEuropeOrAmericaLocale; // @synthesize isEuropeOrAmericaLocale=_isEuropeOrAmericaLocale;
@property(nonatomic) _Bool openVideoBackgroud; // @synthesize openVideoBackgroud=_openVideoBackgroud;
@property(nonatomic) _Bool isFirstLaunch; // @synthesize isFirstLaunch=_isFirstLanuch;
@property(readonly, nonatomic) QQLockDictionary *appSetting; // @synthesize appSetting=_appSetting;
- (void)setAioAnimojiTipsDisplayTimes:(id)arg1;
- (id)aioAnimojiTipsDisplayParam;
- (id)getNowActivityPendantPush:(id)arg1;
- (void)setNowActivityPendantPush:(id)arg1 withUin:(id)arg2;
- (id)getNowActivityPendantConfig:(id)arg1;
- (void)setNowActivityPendantConfig:(id)arg1 withUin:(id)arg2;
- (id)getNearbyUserCardSetting:(id)arg1 key:(id)arg2;
- (void)setNearbyUserCardSetting:(id)arg1 key:(id)arg2 withUin:(id)arg3;
- (void)setAvatarStoreEnterTimes:(long long)arg1;
- (long long)avatarStoreEnterTimes;
- (long long)getNearbyLottieVersion:(id)arg1;
- (void)setNearbyLottieVersion:(long long)arg1 withID:(id)arg2;
- (id)getTinyVideoResMd5;
- (void)setTinyVideoResMd5:(id)arg1;
- (id)getTinyVideoResUrl;
- (void)setTinyVideoResUrl:(id)arg1;
- (_Bool)isShowJumpNowBtnConfig;
- (id)getNearbyListEntrConfig;
- (void)setNearbyVideoChatBannerPromotionConfigDic:(id)arg1 uin:(id)arg2;
- (id)nearbyVideoChatBannerPromotionConfigDic:(id)arg1;
- (void)setNearbyVideoChatAlertPromotionConfigDic:(id)arg1 uin:(id)arg2;
- (id)nearbyVideoChatAlertPromotionConfigDic:(id)arg1;
- (_Bool)getNearbyHeartSwitchOn;
- (void)setNearbyVideoAuthConfigDic:(id)arg1 uin:(id)arg2;
- (id)nearbyVideoAuthConfigDic:(id)arg1;
- (int)getMaxAutoInviteNumWhenCreateGrp;
- (void)setReportQQDiskSpaceUse;
- (unsigned long long)getAIODouTuSmartHeadPicCount;
- (void)setAIODouTuSmartHeadPicCount:(unsigned long long)arg1;
- (_Bool)getAIODouTuSmartSwitchEnable;
- (void)setAIODouTuSmartSwitchEnable:(_Bool)arg1;
- (_Bool)shouldReportQQDiskSpaceUse;
- (void)setAIODouTuUserSettingEnable:(_Bool)arg1;
- (_Bool)getAIODouTuUserSettingEnable;
- (void)setAIODouTuComboKeepTime:(unsigned long long)arg1;
- (unsigned long long)getAIODouTuComboKeepTime;
- (void)setAIODouTuComboAnimDuration:(unsigned long long)arg1;
- (unsigned long long)getAIODouTuComboAnimDuration;
- (void)setAIODouTuTimeGap:(unsigned long long)arg1;
- (unsigned long long)getAIODouTuTimeGap;
- (id)getAIODouTuResMd5;
- (void)setAIODouTuResMd5:(id)arg1;
- (id)getAIODouTuResUrl;
- (void)setAIODouTuResUrl:(id)arg1;
- (void)setAIODouTuEnable:(_Bool)arg1;
- (_Bool)getAIODouTuEnable;
- (void)setTimeStampWhenPersonalSignTipsViewClickedInGuestMode:(double)arg1;
- (double)timeStampWhenPersonalSignTipsViewClickedInGuestMode;
- (void)setTimeStampWhenPersonalSignTipsViewClickedInOwnerMode:(double)arg1;
- (double)timeStampWhenPersonalSignTipsViewClickedInOwnerMode;
- (void)saveGroupRankConfig:(id)arg1;
- (id)groupRankConfig;
- (void)setAioMagicFontTipsDisplayTimes:(long long)arg1;
- (long long)aioMagicFontTipsDisplayTimes;
- (void)setAioPhotoVideoGuideDisplayTimes:(long long)arg1;
- (long long)aioPhotoVideoGuideDisplayTimes;
- (void)setIsEnteredShortVideoRecordVC:(_Bool)arg1;
- (_Bool)isEnteredShortVideoRecordVC;
- (void)setIsClickedGuajian:(_Bool)arg1;
- (_Bool)isClickedGuajian;
- (void)setNeedShowGuideView;
- (_Bool)needShowGuideView;
- (void)saveGroupCommonConfig:(id)arg1;
- (id)groupCommonConfig;
- (id)robotVoiceAtConfig;
- (id)robotVoiceTailConfig;
- (id)robotAIOItemBarConfig;
- (void)saveStoryNowOpenCfg:(id)arg1;
- (id)storyNowOpenCfg;
- (void)setVocalPrint:(id)arg1 isFirstTimeReceive:(_Bool)arg2;
- (_Bool)isFirstTimeReceiveVocalPrint:(id)arg1;
- (void)setVocalPrint:(id)arg1 isFirstTimePlay:(_Bool)arg2;
- (void)updateLastRichImagePickerCaptureDevicePosition:(int)arg1;
- (int)getLastRichImagePickerCaptureDevicePosition;
- (void)updateLastVideoUploadAlertTime;
- (_Bool)shouldUploadVideoNoWifi;
- (void)updateLastVideoLiveStreamingAlertTime;
- (_Bool)shouldPlayVideoLiveStreamingNoWifi;
- (void)setPushOpenRemindSetting:(id)arg1;
- (id)getPushOpenRemindSetting;
- (void)updateDpcConfig:(id)arg1;
- (void)updateSideAccountConfigData;
- (void)updateAIOMsgOpertionConfigure;
- (int)getAIOMsgOperCategory:(int)arg1;
- (int)getReceiveDataCountWhileLogout;
- (void)setReceiveDataCountWhileLogout:(int)arg1;
- (double)lastReportTimeOfReceiveDataCountWhileLogout;
- (void)setLastReportTimeOfReceiveDataCountWhileLogout:(double)arg1;
- (_Bool)shouldReqLoginedAccountUnreadInfo;
- (_Bool)shouldShowLoginedAccount;
- (_Bool)shouldSupportLongPressHeadBtn;
- (void)setDiscoverHidden:(id)arg1;
- (_Bool)discoverHidden;
- (void)setQQWifiXmlConfig:(id)arg1;
- (id)qqWifiXmlConfig;
- (void)setQQWifiProviderMask:(id)arg1;
- (id)qqWifiProviderMask;
- (void)setQFindAssist:(int)arg1;
- (int)getQFindAssistFlag;
- (_Bool)isQFindAssist;
- (_Bool)isQFindAssistLoaded;
- (void)setTimeStampOfLastTimeCheckMemberCardFillCompletion:(id)arg1 timeStamp:(double)arg2;
- (double)timeStampOfLastTimeCheckMemberCardFillCompletion:(id)arg1;
- (void)setFlashSnapTimeStamp:(double)arg1;
- (double)getFlashSnapTimeStamp;
- (void)setFlashBtnSelectedFlag:(_Bool)arg1;
- (_Bool)getFlashBtnSelectedFlag;
- (void)ftsSetStagingReqAllTroopMemFlag:(_Bool)arg1;
- (_Bool)ftsGetStagingReqAllTroopMemFlag;
- (void)ftsResetAllGetTroopMemTimeStamp;
- (double)ftsGetTimeStampForGetTroopMem:(id)arg1;
- (void)ftsSetTimeStampForGetTroopMem:(id)arg1 time:(double)arg2;
- (void)ftsSetMsgIndexSearchSchemeFlag:(id)arg1 state:(_Bool)arg2;
- (_Bool)ftsGetMsgIndexSearchSchemeFlag:(id)arg1;
- (void)setFlagForNewMemNumOfGetTroopListV2:(_Bool)arg1;
- (_Bool)flagForNewMemNumOfGetTroopListV2;
- (void)setFlagForNewVerOfGetTroopListV2;
- (_Bool)flagForNewVerOfGetTroopListV2;
- (id)groupContactsTipsFlagKey;
- (void)saveGroupContactsTipsFlag;
- (_Bool)groupContactsTipsFlag;
- (void)increaseRankListTraticBannerShowtime;
- (void)setNoNeedsToShowRankListTraticBanner;
- (_Bool)shouldShowRankListTraticBanner;
- (_Bool)showGodList;
- (void)setShowGodList:(_Bool)arg1;
- (_Bool)doNotEnrollInRankingList;
- (void)setDoNotEnrollInRankingList:(_Bool)arg1;
- (_Bool)isUpgradeDisplay:(id)arg1;
- (void)setUpgradeDisplaySwitch:(_Bool)arg1 forUin:(id)arg2;
- (id)picPreuploadInfo;
- (void)setOrigPicSentFlag;
- (void)calcPicPreuploadInfo:(int)arg1 uploadBytes:(unsigned long long)arg2;
- (void)clearPreuploadInfo;
- (void)accumulatePreuploadFileBytes:(id)arg1 delta:(unsigned long long)arg2;
- (void)accumulatePreuploadFileNum:(id)arg1 delta:(int)arg2;
- (_Bool)UpdatePicPreuploadTimeStamp;
- (void)clearRecordPicInfo;
- (int)sentBrowseTotal;
- (void)addSentBrowseTotal:(int)arg1;
- (int)quicklyBrowseTotal;
- (void)addQuicklyBrowseTotal:(int)arg1;
- (int)editedPicTotal;
- (void)addSentEditedPicTotal:(int)arg1;
- (int)sentPhotoTotal;
- (void)addSentPhotoTotal:(int)arg1;
- (int)takedPhotoTotal;
- (void)addTakedPhotoTotal:(int)arg1;
- (int)sentPicTotal;
- (void)addSentPicTotal:(int)arg1;
- (int)selectedPicTotal;
- (void)addSelectedPicTotal:(int)arg1;
- (int)getCommonObjectVal:(id)arg1;
- (void)addCommonObjectVal:(id)arg1 delta:(int)arg2;
- (_Bool)isSameDayOfPicSel;
- (void)updatePicSelInfoTimeStamp;
- (void)setOfflineAppMd5Dic:(id)arg1;
- (id)getOfflineAppMd5Dic;
- (_Bool)hasReportQQSpaceUsed;
- (int)themeAuthTmp:(id)arg1;
- (void)setThemeAuthTmp:(int)arg1 uin:(id)arg2;
- (int)themeAuthResult:(id)arg1;
- (void)setThemeAuthResult:(int)arg1 uin:(id)arg2;
- (void)SaveAVVoipDic:(id)arg1 withUin:(id)arg2;
- (id)GetAVVoipDic:(id)arg1;
- (id)groupAnonymousFirstUseFlagKey;
- (void)saveGroupAnonymousNoFirstUseFlag;
- (_Bool)groupAnonymousFirstUseFlag;
- (id)groupAnonymousTipsFlagKey;
- (void)saveGroupAnonymousTipsFlag;
- (_Bool)groupAnonymousTipsFlag;
- (_Bool)isFunChatIntreactiveTipsShown;
- (void)setFunChatIntreactiveTipsShown:(_Bool)arg1;
- (_Bool)isFunChatTipsShown;
- (void)setFunChatTipsShown:(_Bool)arg1;
- (void)setValueOfAVBeautifyChanged:(_Bool)arg1;
- (_Bool)isValueOfAVBeautifyChanged;
- (void)setValueOfAVBeautify:(float)arg1;
- (float)getValueOfAVBeautify;
- (_Bool)getIsUseAVBeautify;
- (void)setIsUseAVBeautify;
- (_Bool)getIsFirstUseConsrotiumAVIn3G;
- (_Bool)getIsFirstUseRandomAVIn3G;
- (_Bool)getIsFirstUseAVIn3G;
- (_Bool)getIsFirstUseGAVIn3G;
- (void)saveDiscussTipsMessageHiddenFlag:(id)arg1 withUin:(id)arg2;
- (id)dicussTipsMessageHiddenFlag:(id)arg1;
- (id)timeOfDiscussGroupAudioLastShow:(id)arg1;
- (void)setEncounterOnewayFriendTipsDict:(id)arg1;
- (id)getEncounterOnewayFriendTipsDict;
- (void)setRichKeyboardNewFlags:(id)arg1;
- (id)getRichKeyboardNewFlags;
- (void)setQQWebviewPublicAccountWebFontScale:(id)arg1;
- (id)getQQWebviewPublicAccountWebFontScale;
- (void)asyncMoveBgImageToDoc;
- (void)moveBGImageToDoc;
- (void)delayMoveBGImageToDoc;
- (void)setPreviosAccountUin:(id)arg1;
- (id)getPreviosAccountUin;
- (void)setChangingSideAccountUin:(id)arg1;
- (id)getChangingSideAccountUin;
- (void)setGetSideMsgInterval:(int)arg1;
- (int)getSideMsgInterval;
- (id)keyChainValueForKey:(id)arg1 status:(int *)arg2;
- (id)getKeyChainValueFor:(id)arg1;
- (void)setKeyChainValue:(id)arg1 forKey:(id)arg2;
- (_Bool)openDebug;
- (void)setGroupDeliverGiftDic:(id)arg1 uin:(id)arg2;
- (id)getGroupDeliverGiftDic:(id)arg1;
- (_Bool)getNearbyPushBannerSwitchLocal:(id)arg1;
- (void)setNearbyPushBannerSwitchLocal:(_Bool)arg1 uin:(id)arg2;
- (id)getNearByWerewolfEntranceConfig:(id)arg1;
- (void)setNearByWerewolfEntranceConfig:(id)arg1 withUin:(id)arg2;
- (id)getNearbyAutoEnterWithoutReddot:(id)arg1;
- (void)setNearbyNow1V1AdsConfig:(id)arg1 withUin:(id)arg2;
- (id)getNearbyNow1V1AdsConfig:(id)arg1;
- (void)setNearbyAutoEnterWithoutReddot:(id)arg1 withUin:(id)arg2;
- (void)setNearbyBannerConfig:(id)arg1 withUin:(id)arg2;
- (id)getNearbyBannerConfig:(id)arg1;
- (void)setNearbyTabConfig:(id)arg1 withUin:(id)arg2;
- (id)getNearbyTabConfig:(id)arg1;
- (void)setEmojiStickSwitch:(_Bool)arg1 uin:(id)arg2;
- (_Bool)getEmojiStickSwitch:(id)arg1;
- (unsigned long long)getReadInJoyType;
- (_Bool)shouldUpdateReadInJoyTabRemoteSwitch;
- (_Bool)getReadInJoyTabLocalSwitch;
- (_Bool)getReadInJoyTabRemoteSwitch;
- (_Bool)isDianDianWebOn;
- (_Bool)isReadInJoyVideoTabOn;
- (_Bool)getReadInJoyTabSwitch;
- (void)updateStoryShowInMsgTabDPCConfig;
- (void)sameVersionUpdateDpcConfig:(id)arg1;
- (void)setMsgTabStoryNodeConfigRsp:(unsigned long long)arg1 uin:(id)arg2;
- (void)setStoryShowInMessageTab:(_Bool)arg1 uin:(id)arg2;
- (_Bool)storyShowInMessageTab:(id)arg1;
- (void)setMsgTabStoryNodeSwitchValueFromRoam:(int)arg1 uin:(id)arg2;
- (int)msgTabStoryNodeSwitchValueFromRoam:(id)arg1;
- (void)setIsStoryTabLocalSwitchOperated:(_Bool)arg1 uin:(id)arg2;
- (_Bool)getIsStoryTabLocalSwitchOperated:(id)arg1;
- (_Bool)getStoryTabSwitchFinalValue:(id)arg1;
- (_Bool)getIsStorySwitchShowInMore:(id)arg1;
- (void)setStoryTabSwitchValueFromRoam:(int)arg1 uin:(id)arg2;
- (int)getStoryTabSwitchValueFromRoam:(id)arg1;
- (void)setStoryTabSwitchValueFromLocal:(_Bool)arg1 uin:(id)arg2;
- (_Bool)getStoryTabSwitchValueFromLocal:(id)arg1;
- (void)setMyVideoSwitchValueFromLocal:(_Bool)arg1 uin:(id)arg2;
- (_Bool)getMyVideoSwitchValueFromLocal:(id)arg1;
- (void)setStoryTabIndexValueFromSvr:(long long)arg1 uin:(id)arg2;
- (long long)getStoryTabIndexValueFromSvr:(id)arg1;
- (int)getStoryEntranceConfigFromSvr:(id)arg1;
- (void)setStoryEntranceConfig:(int)arg1 FromSvr:(id)arg2;
- (_Bool)isAutoAddGroupAVArrangeInfoIntoCalender:(id)arg1;
- (void)setAutoAddGroupAVArrangeInfoIntoCalender:(_Bool)arg1 withUin:(id)arg2;
- (_Bool)delAioLBSTipsShow:(id)arg1;
- (_Bool)getAioLBSTipsShow:(id)arg1;
- (void)setAioLBSTipsShow:(id)arg1;
- (id)getClearAllMessageTime;
- (void)setClearAllMessageTime:(double)arg1;
- (id)uinPairLocalDeleteMsgTime:(id)arg1 uinType:(BOOL)arg2;
- (void)setUinPair:(id)arg1 uinType:(BOOL)arg2 loacalDeleteMsgSeq:(id)arg3;
- (id)getMQZAppFeedTime;
- (_Bool)isDisplayGroupNick;
- (void)saveSoundName:(id)arg1 value:(id)arg2;
- (id)getSoundName:(id)arg1;
- (_Bool)isSupportAIOFont;
- (int)getChatAvatarVipChangeFlag;
- (void)setChatAvatarVipChangeFlag:(int)arg1;
- (void)removeDBVersion:(id)arg1;
- (void)removeChatDefaultCover:(id)arg1;
- (void)setChatCoverAsDefault:(id)arg1;
- (id)getChatDefaultCover;
- (void)setFlashChatSwitch:(id)arg1 isOn:(_Bool)arg2;
- (_Bool)getFlashChatSwitch:(id)arg1;
- (void)setMedalWallSwitch:(id)arg1 isOn:(_Bool)arg2;
- (_Bool)getMedalWallSwitch:(id)arg1;
- (void)setAccpetLightalkMsgSwitch:(id)arg1 isOn:(_Bool)arg2;
- (_Bool)getAccpetLightalkMsgSwitch:(id)arg1;
- (void)setNearbyGreetLiveSwitch:(id)arg1 isOn:(_Bool)arg2;
- (_Bool)getNearbyGreetLiveSwitch:(id)arg1;
- (void)setAccpetFreshNewsSwitch:(id)arg1 isOn:(_Bool)arg2;
- (_Bool)getAccpetFreshNewsSwitch:(id)arg1;
- (void)removeAllPersonalThemeByUin:(id)arg1;
- (void)setPersonalThemeDefaultWithUin:(id)arg1 isGroup:(_Bool)arg2;
- (_Bool)isDuringSystemAvatarAcitivity;
- (id)getContactAddLayout;
- (int)getHappyBirthdayEntrance;
- (void)setAccpetAFMsgSwitch:(id)arg1 isOn:(_Bool)arg2;
- (_Bool)getAccpetAFMsgSwitch:(id)arg1;
- (void)removeAllChatCustomCoverByUin:(id)arg1;
- (void)setChatCover:(id)arg1 uin:(id)arg2 isGroup:(_Bool)arg3;
- (id)getChatCoverName:(id)arg1 isGroup:(_Bool)arg2;
- (_Bool)isOldChatCoverResource:(id)arg1;
- (_Bool)isShowSelfHeadImageAtChatting;
- (id)getMsgSoundName:(_Bool)arg1;
- (id)getMsgSoundName;
- (_Bool)FlowAvailable;
- (_Bool)isWiFi;
- (_Bool)canPushMsg:(id)arg1;
- (_Bool)isValid:(id)arg1;
- (void)delaySaveAppSetting;
- (void)saveAppSettingDelay;
- (void)saveAppSettingDelay:(double)arg1;
- (void)saveAppSettingNow;
- (void)saveAppSettingToFile;
- (void)backgroundSaveSetting;
- (void)foregroundSaveSetting;
- (void)saveAppSetting;
- (void)setClearCacheFinish:(_Bool)arg1;
- (void)setReportMyLocation:(id)arg1 report:(_Bool)arg2;
- (_Bool)isReportMyLocation:(id)arg1;
- (void)setHasShowArkAIAlert:(id)arg1 show:(_Bool)arg2;
- (_Bool)hasShowArkAIAlert:(id)arg1;
- (void)setTurnOnArkAI:(id)arg1 turnOn:(_Bool)arg2;
- (_Bool)isTurnOnArkAI:(id)arg1;
- (void)setAgreeRecZanRanking:(id)arg1 isAgree:(_Bool)arg2;
- (_Bool)isAgreeRecZanRanking:(id)arg1;
- (void)setMaxPostureDanceScore:(id)arg1 score:(int)arg2;
- (int)getMaxPostureDanceScore:(id)arg1;
- (void)setAgreeJoinZanRanking:(id)arg1 isAgree:(_Bool)arg2;
- (_Bool)isAgreeJoinZanRanking:(id)arg1;
- (void)setAgreeZanNoticeMe:(id)arg1 isAgree:(_Bool)arg2;
- (_Bool)isAgreeZanNoticeMe:(id)arg1;
- (void)setAgreeZanMe:(id)arg1 isAgree:(_Bool)arg2;
- (_Bool)isAgreeZanMe:(id)arg1;
- (void)setPCOnlineStatus2Recentlist:(id)arg1 isOpen:(_Bool)arg2;
- (_Bool)isPCOnlineStatus2Recentlist:(id)arg1;
- (void)setAutoReceive:(id)arg1 isOpen:(_Bool)arg2;
- (_Bool)isAutoReceive:(id)arg1;
- (void)setKeptScreenOpen:(id)arg1 isOpen:(_Bool)arg2;
- (_Bool)isKeptScreenOpen:(id)arg1;
- (void)setShareLocation:(id)arg1 isAgree:(_Bool)arg2;
- (_Bool)isAgreeToShareLocation:(id)arg1;
- (_Bool)isEmojiEggShowInChat;
- (_Bool)isEmojiEggShowInContact;
- (_Bool)showFireLabelOrNotWithTheKey:(id)arg1;
- (void)setFireLabelShowInChatOrInContact:(id)arg1 withTheKey:(id)arg2;
- (_Bool)isAgreeToDisplayEmojiEggsStatus;
- (void)setDisplayNetStautsToFriends:(id)arg1 isAgree:(_Bool)arg2;
- (_Bool)isAgreeToDisplayNetStatusToFriends:(id)arg1;
- (void)setShowMayKnowUser:(id)arg1 isAgree:(_Bool)arg2;
- (_Bool)isAgreeToShowMayKnowUser:(id)arg1;
- (void)setFindMeByNum:(id)arg1 isAgree:(_Bool)arg2;
- (_Bool)isAgreeToFindMeByNum:(id)arg1;
- (void)setPersonalTagSwitchStatus:(id)arg1 uin:(id)arg2;
- (id)personalTagSwitchStatus:(id)arg1;
- (void)setShowThirdEntrySetting:(id)arg1 uinStr:(id)arg2;
- (id)showThirdEntrySetting:(id)arg1;
- (_Bool)showRecentHeadUpdateDot;
- (void)setMusicGeneSwitch:(id)arg1 state:(_Bool)arg2;
- (_Bool)getMusicGeneSwitchState:(id)arg1;
- (void)setLoginDaysVisible:(id)arg1 isVisible:(_Bool)arg2;
- (_Bool)isLoginDaysVisible:(id)arg1;
- (void)setMusicGene:(id)arg1 exist:(_Bool)arg2;
- (void)setAgreeStateZanMe:(id)arg1 isAgree:(_Bool)arg2;
- (_Bool)isAgreeStateZanMe:(id)arg1;
- (void)setShareState:(id)arg1 isAgree:(_Bool)arg2;
- (_Bool)isAgreeToShareState:(id)arg1;
- (void)localeDidChangedHandler:(id)arg1;
- (void)checkCountryCode;
- (void)loadAppSetting;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) NSArray *groupGameInputWordings;
@property(readonly, nonatomic) NSString *hotChatHomeLink;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

