//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/AvatarServiceDelegate-Protocol.h>
#import <QQMainProject/DBAsyncCallbackProtocol-Protocol.h>
#import <QQMainProject/EditMemberCardProtocal-Protocol.h>
#import <QQMainProject/GetTroopRemarkProtocol-Protocol.h>
#import <QQMainProject/IEditViewControllerObserver-Protocol.h>
#import <QQMainProject/IQQGroupProfileViewController-Protocol.h>
#import <QQMainProject/MFMailComposeViewControllerDelegate-Protocol.h>
#import <QQMainProject/MulMemSelBusiProcessDelegate-Protocol.h>
#import <QQMainProject/NSURLConnectionDataDelegate-Protocol.h>
#import <QQMainProject/QQAdjustOpenIDDelegate-Protocol.h>
#import <QQMainProject/QQAsynUrlImagesPlayerDelegae-Protocol.h>
#import <QQMainProject/QQAsynUrlImagesPlayerIndictorPattern-Protocol.h>
#import <QQMainProject/QQEditGroupLocationDelegate-Protocol.h>
#import <QQMainProject/QQEmotionLabelDelegate-Protocol.h>
#import <QQMainProject/QQFriendSelectedViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQGroupCategoryListViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQGroupFaceWallLogicDelegate-Protocol.h>
#import <QQMainProject/QQGroupRichNameSpaceViewDelegate-Protocol.h>
#import <QQMainProject/QQGroupSettingHeadViewDelegate-Protocol.h>
#import <QQMainProject/QQGroupSettingInitialHeadViewDelegate-Protocol.h>
#import <QQMainProject/QQGroupSettingViewAppCellDelegate-Protocol.h>
#import <QQMainProject/QQGroupSettingViewHeadIconsCellDelegate-Protocol.h>
#import <QQMainProject/QQGroupSettingViewIntroDelegate-Protocol.h>
#import <QQMainProject/QQGroupSettingViewMembersDelegate-Protocol.h>
#import <QQMainProject/QQNGEffectiveOperationDelegate-Protocol.h>
#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>
#import <QQMainProject/SimpleAlertViewDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>
#import <QQMainProject/UserSummaryNavBarItemDelagate-Protocol.h>
#import <QQMainProject/UserSummaryTouchControlDelegate-Protocol.h>

@class GroupSignInInfoModle, NSArray, NSDictionary, NSMutableArray, NSString, NSURLConnection, QQAdjustOpenIDEngine, QQAsynUrlImagesPlayer, QQGroupAppsExtraInfo, QQGroupFaceWallLogic, QQGroupFaceWallUI, QQGroupJoinHelper, QQGroupLinkForwardHelper, QQGroupLinkShareController, QQGroupRichNameSpaceView, QQGroupSettingInitialHeadView, QQGroupSettingItem, QQGroupSettingMatureHeadView, QQGroupSettingModel, QQGroupSettingViewAppCell, QQGroupSettingViewMemberCountCell, QQTroopRemarkModel, UIButton, UIColor, UIImage, UIImageView, UILabel, UINavigationController, UISwitch, UITableView, UITableViewCell, UIView, UserSummaryNavigationBar, UserSummaryTouchControl;

@interface QQGroupSettingViewController : QQViewController <QQEditGroupLocationDelegate, QQNGEffectiveOperationDelegate, QQAsynUrlImagesPlayerDelegae, QQAsynUrlImagesPlayerIndictorPattern, AvatarServiceDelegate, SimpleAlertViewDelegate, QQAdjustOpenIDDelegate, QQGroupSettingViewHeadIconsCellDelegate, QQGroupSettingViewAppCellDelegate, QQGroupSettingViewMembersDelegate, EditMemberCardProtocal, QQGroupSettingHeadViewDelegate, QQGroupSettingInitialHeadViewDelegate, QQGroupSettingViewIntroDelegate, UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, QUIActionSheetDelegate, IQQGroupProfileViewController, QQFriendSelectedViewControllerDelegate, UIAlertViewDelegate, DBAsyncCallbackProtocol, GetTroopRemarkProtocol, IEditViewControllerObserver, QQGroupCategoryListViewControllerDelegate, QQGroupFaceWallLogicDelegate, QQEmotionLabelDelegate, MFMailComposeViewControllerDelegate, QQGroupRichNameSpaceViewDelegate, UserSummaryNavBarItemDelagate, UserSummaryTouchControlDelegate, NSURLConnectionDataDelegate, MulMemSelBusiProcessDelegate>
{
    int _notice_photos;
    UITableView *_tableView;
    UserSummaryTouchControl *_bottomOperationView;
    QQGroupSettingModel *_groupModel;
    NSMutableArray *_dataSource;
    int _msgRemindType;
    NSString *_modifiedGroupName;
    _Bool _groupProfileModified;
    _Bool _bGroupInfoReturned;
    int _RequestInviteJoinGroupCount;
    QQGroupLinkShareController *_groupLinkShareController;
    UIButton *_quitButton;
    _Bool _bFetched;
    _Bool _bHaveBaseTag;
    QQGroupFaceWallUI *_faceWallView;
    QQGroupFaceWallLogic *_faceWallLogic;
    QQGroupRichNameSpaceView *_richNameSpaceview;
    int _settingType;
    QQGroupLinkForwardHelper *_sharedLinkHelper;
    NSString *_sharedGroupLink;
    _Bool _ifNoRootGroupViewCon;
    UITableViewCell *shareLocationCell;
    _Bool ifComeFromBlueAndGrayShareLocationCell;
    UserSummaryNavigationBar *_UserSummaryNavigationBar;
    _Bool _shadeDone;
    UIView *_nightModeMaskView;
    NSString *_filterIdStr;
    unsigned int _dataReport644SrcID;
    NSDictionary *_paramDic;
    id _leftBtnClickTarget;
    SEL _leftBtnClickSel;
    SEL _leftBtnClickSelForSuccess;
    SEL _leftBtnClickSelDealloc;
    _Bool _isFriendInviteToGroupAutoPass;
    UIImageView *_certificatedIconView;
    UIButton *_certificatedButton;
    _Bool _isQidianGroup;
    _Bool _isHomeworkGroup;
    _Bool _isGameGroup;
    UIButton *_operationButton;
    UIView *_divideLineView;
    _Bool *_shouldUpdateBulletin;
    _Bool _isGoToTransparentVC;
    NSString *_latestBulletin;
    NSDictionary *_gactivityDic;
    NSString *_gactivityContent;
    NSString *_gactDetail1;
    NSString *_gactDetail2;
    QQGroupJoinHelper *_groupJoinHelper;
    UINavigationController *_navi;
    NSString *_joinKey;
    NSArray *_groupAppsInfo;
    QQGroupAppsExtraInfo *_groupAppsExtraInfo;
    NSString *_moreGroupAppsUrl;
    _Bool _isphotoBrowserViewShow;
    UILabel *_groupNameLabel;
    NSMutableArray *_memberDistributionModel;
    QQGroupSettingViewMemberCountCell *_memberCountCell;
    NSURLConnection *_connection;
    UISwitch *_msgRemindSettingToggle;
    int _msgRemindTypeForActionSheet;
    NSMutableArray *_memsRemarkTmp;
    _Bool _isJoinUnverifyGroup;
    UIImage *_oriNavbarImage;
    UIColor *_oriNavbarColor;
    UIImageView *_defaultHeadView;
    UIButton *_clickEnterHeaderButton;
    QQAsynUrlImagesPlayer *_headImagesView;
    UIButton *_qrCodeBtn;
    _Bool _isNeedRefresh;
    _Bool _currentTopCommonState;
    _Bool _isNotGetGroupSettingModel;
    _Bool _isNotRequestGroupList;
    _Bool _isNeedRefreshEffectName;
    _Bool _isShowEffectEntrance;
    _Bool _isCleanRecord;
    QQGroupSettingMatureHeadView *_matureHeadView;
    QQGroupSettingInitialHeadView *_initialHeadView;
    _Bool _isFromNewUserGuide;
    _Bool _isFromBabyQ;
    unsigned int sourceID;
    unsigned int subSrcID;
    unsigned int _groupStoryEnterSource;
    NSString *_focusItem;
    QQTroopRemarkModel *_remarkModel;
    NSString *_strRemark;
    QQGroupSettingViewAppCell *_menuCell;
    GroupSignInInfoModle *_signInModle;
    NSString *_enterGroupEffectName;
    QQAdjustOpenIDEngine *_qqAdjustOpenIDEngine;
    QQGroupSettingItem *_introSetting;
}

+ (id)reportAdminTypeWithModel:(id)arg1;
+ (id)reportVistorTypeWithModel:(id)arg1;
+ (id)reportOPType:(id)arg1;
+ (id)formatGroupAnnounceUrl:(id)arg1 groupCode:(unsigned long long)arg2 groupMemberState:(int)arg3 enterSource:(id)arg4;
@property(retain, nonatomic) QQGroupSettingItem *introSetting; // @synthesize introSetting=_introSetting;
@property(retain, nonatomic) QQAdjustOpenIDEngine *qqAdjustOpenIDEngine; // @synthesize qqAdjustOpenIDEngine=_qqAdjustOpenIDEngine;
@property(copy, nonatomic) NSString *enterGroupEffectName; // @synthesize enterGroupEffectName=_enterGroupEffectName;
@property(retain, nonatomic) GroupSignInInfoModle *signInModle; // @synthesize signInModle=_signInModle;
@property(retain, nonatomic) QQGroupSettingViewAppCell *menuCell; // @synthesize menuCell=_menuCell;
@property(readonly, retain, nonatomic) QQGroupSettingModel *groupModel; // @synthesize groupModel=_groupModel;
@property(retain, nonatomic) NSString *strRemark; // @synthesize strRemark=_strRemark;
@property(retain, nonatomic) QQTroopRemarkModel *remarkModel; // @synthesize remarkModel=_remarkModel;
@property(nonatomic) unsigned int groupStoryEnterSource; // @synthesize groupStoryEnterSource=_groupStoryEnterSource;
@property(retain, nonatomic) NSString *focusItem; // @synthesize focusItem=_focusItem;
@property(nonatomic) _Bool isFromBabyQ; // @synthesize isFromBabyQ=_isFromBabyQ;
@property(nonatomic) _Bool isFromNewUserGuide; // @synthesize isFromNewUserGuide=_isFromNewUserGuide;
@property(nonatomic) SEL leftBtnClickSelDealloc; // @synthesize leftBtnClickSelDealloc=_leftBtnClickSelDealloc;
@property(nonatomic) SEL leftBtnClickSelForSuccess; // @synthesize leftBtnClickSelForSuccess=_leftBtnClickSelForSuccess;
@property(nonatomic) SEL leftBtnClickSel; // @synthesize leftBtnClickSel=_leftBtnClickSel;
@property(nonatomic) id leftBtnClickTarget; // @synthesize leftBtnClickTarget=_leftBtnClickTarget;
@property(nonatomic) unsigned int subSrcID; // @synthesize subSrcID;
@property(nonatomic) unsigned int sourceID; // @synthesize sourceID;
- (void)didExtendTap;
- (id)reportModifyFace:(id)arg1;
- (void)reportGroupAppExp;
- (void)reportSpecialGroupAppClick:(id)arg1;
- (_Bool)isNeedToShowMoreInfo;
- (id)troopNameByGroupCode:(id)arg1 memberUin:(id)arg2;
- (void)handleGroupModelUpdate;
- (void)onClickGroupNameLabel;
- (void)popDiffrentOpenIDTip;
- (void)QQAdjustOpenIDEngineValue:(id)arg1 value:(int)arg2;
- (void)failReqGameAddGrpRight:(id)arg1 tag:(int)arg2;
- (void)reqGameAddGrpRightIfNeed;
- (void)checkOpenId:(id)arg1 andAppId:(id)arg2;
- (void)onRefreshGroupList:(id)arg1;
- (void)appWillEnterForegroundNotification;
- (void)onTimeout;
- (void)ActionJoinGroupResult:(id)arg1;
- (void)onClickReportGroupLabelOnSetting:(id)arg1;
- (void)quitGroup;
- (void)onQuitGroupBtnClick:(id)arg1;
- (void)onClickExitGroupButtonOnSeting:(id)arg1;
- (void)sendAddGroupRequest;
- (void)joinUnverifyGroup:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)modifyGroupMemberCardCallback:(id)arg1;
- (void)onGroupMemberDistriRspCallback:(id)arg1;
- (void)getMemberDistribution;
- (void)onForceOffLineNotify;
- (void)navigationBarThemeIfAlpha:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)adjustRightBarButtonItemTitleColor:(_Bool)arg1;
- (void)navigationBarHandle;
- (void)modifyNavigationState;
- (void)handleNavBarItemClick:(_Bool)arg1;
- (void)resetShareLocationCellColor;
- (void)scrollToShareLocationCell;
- (void)groupSettingActivityDidAction:(id)arg1;
- (id)formatGroupOpenAPPUrlWithModel:(id)arg1;
- (void)didCertificationViewClick;
- (void)didLabelViewClick;
- (void)didHeaderViewClick:(int)arg1;
- (id)makeUrlView:(id)arg1 isNeedFailImage:(_Bool)arg2 frame:(struct CGRect)arg3;
- (void)didNameSpaceViewSizeChange:(struct CGRect)arg1 newSize:(struct CGRect)arg2;
- (void)touchMemberCellHandler:(id)arg1;
- (void)clickAddButton;
- (void)updateRichNameSpaceView;
- (void)updateNavigationActiveViewState:(_Bool)arg1;
- (id)cellOfMsgRemindDetailDesc;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)emotionLabelHandleIDNumber:(id)arg1;
- (void)emotionLabelHandlePhoneNumber:(id)arg1;
- (void)emotionLabelHandleQQNumber:(id)arg1;
- (void)emotionLabelHandleEmail:(id)arg1;
- (void)emotionLabelHandleUrl:(id)arg1;
- (void)photoBrowserViewIsShow:(_Bool)arg1;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (void)exportGroupResult:(id)arg1;
- (void)switchShowToOtherAction:(id)arg1;
- (void)switchCommonGroupAction:(id)arg1;
- (void)switchShareLocationAction:(id)arg1;
- (void)settingSwitcherChanged:(id)arg1;
- (void)modifyGroupLocation:(id)arg1 latitude:(long long)arg2 longitude:(long long)arg3 poiId:(long long)arg4;
- (void)handleCommonGroupSettingProfile:(id)arg1;
- (void)showFailedTipDelayed;
- (_Bool)showFailedTipIfDisconnected;
- (void)deleteUserDefault;
- (void)ActionQQInviteJoinGroupResult:(id)arg1;
- (void)ActionExitGroupResult:(id)arg1;
- (void)ActionDismissGroupRespond:(id)arg1;
- (_Bool)onSelectInviteGroupMembers:(id)arg1;
- (_Bool)onRightButtonClicked:(id)arg1;
- (void)groupMemberChanged:(id)arg1;
- (_Bool)onEditViewModifyValue:(id)arg1 value:(id)arg2;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (void)modifyGroupInfoCallback:(id)arg1;
- (void)didModifyGroupProfile:(unsigned int)arg1 groupName:(id)arg2 groupPost:(id)arg3 groupMemo:(id)arg4 groupRichMemo:(id)arg5 groudAdmissionType:(int)arg6 groupCategory:(int)arg7 groupFaceId:(int)arg8 groupLocation:(id)arg9 groupTribeID:(long long)arg10 groupTribeName:(id)arg11 groupTribeType:(unsigned int)arg12;
- (void)didModifyGroupProfile:(unsigned int)arg1 groupName:(id)arg2 groupPost:(id)arg3 groupMemo:(id)arg4 groudAdmissionType:(int)arg5 groupCategory:(int)arg6 groupFaceId:(int)arg7 groupLocation:(id)arg8 groupTribeID:(long long)arg9 groupTribeName:(id)arg10 groupTribeType:(unsigned int)arg11;
- (void)onGroupDismissNotification:(id)arg1;
- (void)onEditGroupNameNotification:(id)arg1;
- (void)actionKickGroupMemberResponse:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)quitOrDismissGroup;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (id)findGroupMsgRemindCell;
- (void)setGroupMsgRemindType:(int)arg1;
- (void)setGroupAssistantTimeout;
- (void)showMsgRemindSettingItem:(_Bool)arg1;
- (void)onHandleSetGroupAssistantNotification:(id)arg1;
- (id)groupMsgRemindTitle:(int)arg1;
- (void)initGroupMsgRemindType;
- (void)updateEnterGroupEffectWith:(id)arg1;
- (void)updateImagesPlayer;
- (_Bool)showGroupNameLabel;
- (void)updateGroupName;
- (void)updateGroupTitleForMemCount;
- (void)reloadData;
- (void)getLatestBulletinCallBack:(id)arg1;
- (void)onTroopInfoUpdated:(id)arg1;
- (void)GetMemberRemarkNotify:(id)arg1 list:(id)arg2;
- (void)freshMemsRemark;
- (void)onTroopProfileAppListChanged:(id)arg1;
- (void)getGroupSettingModel;
- (void)showShortTips:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)_getTableView;
- (id)announceViewForFoot:(id)arg1 textAlignment:(long long)arg2 yOffset:(double)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)rePointeXinView;
- (void)p_GameGroupDataReport:(id)arg1 withReportType:(id)arg2;
- (void)gameGroupCellClickDataReport:(id)arg1;
- (void)gameGroupCellExposureDataReport;
- (void)updateGameGroupCell:(id)arg1 withTabInfo:(id)arg2;
- (id)tableView:(id)arg1 cellForGameGroupAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForGroupSettingMenuItem:(id)arg2;
- (void)updateMenuCell;
- (void)onMsgRemindToggleChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForGroupSettingMsgRemindToggle:(id)arg2;
- (id)tableView:(id)arg1 cellForGroupSettingRemark:(id)arg2 isMultiline:(_Bool)arg3;
- (id)tableView:(id)arg1 cellForGroupSettingMsgRemind:(id)arg2;
- (id)tableView:(id)arg1 cellForGroupSettingMemberCount:(id)arg2;
- (id)tableView:(id)arg1 cellForGroupSettingMemberCard:(id)arg2;
- (id)tableView:(id)arg1 cellForGroupSettingMembers:(id)arg2;
- (id)tableView:(id)arg1 cellForGroupSettingAdmins:(id)arg2;
- (id)tableView:(id)arg1 cellForGroupSignIn:(id)arg2;
- (id)tableView:(id)arg1 cellForGroupPublicAccount:(id)arg2;
- (id)tableView:(id)arg1 cellForGroupSettingIntroduction:(id)arg2;
- (id)tableView:(id)arg1 cellForGroupActivity:(id)arg2;
- (id)tableView:(id)arg1 cellForSwitcherType:(id)arg2;
- (id)groupValidateTitle:(int)arg1;
- (id)tableView:(id)arg1 cellForGroupInfo:(id)arg2;
- (id)tableView:(id)arg1 cellForGroupSetting:(id)arg2;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)showSelectFriendView;
- (id)getGroupMemberUinList;
- (void)failOneKeyAddGroupLogicError:(id)arg1;
- (void)failSysOneKeyAddGroup;
- (void)onGameOneKeyAddGroupButtonTouched:(id)arg1;
- (void)onSendMsgTouched:(id)arg1;
- (void)onAddGroupButtonTouched:(id)arg1;
- (id)settingItemForIndexPath:(id)arg1;
- (void)logEvent:(id)arg1 eventName:(id)arg2 withParam:(id)arg3;
- (void)actionPasteString:(id)arg1;
- (void)sendEmailWithRecipients:(id)arg1;
- (void)callWithPhoneNumber:(id)arg1;
- (_Bool)isValidEmail:(id)arg1;
- (_Bool)isMobileNumber:(id)arg1;
- (void)resetBottomView;
- (void)initSettingDataSource;
- (void)handleGroupLinkClick:(id)arg1;
- (void)setSettingType:(int)arg1;
- (void)adjustForNightMode;
- (void)focusToItem;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)onClickRightBtn;
- (void)onClickShareGroup;
- (void)loadView;
- (void)onReceivedGameGroupRedDotPush:(id)arg1;
- (void)gameUnbindSuccessNotification:(id)arg1;
- (void)onTransferGroupSuccNotify:(id)arg1;
- (void)onGroupActivityRecv:(id)arg1;
- (void)onGroupInfoCardActivityRecv:(id)arg1;
- (void)onGameGroupExtraInfoRecv:(id)arg1;
- (void)onGroupExtraAppsInfoRecv:(id)arg1;
- (void)setAppsInfo:(id)arg1;
- (void)onGetGroupTagNotify:(id)arg1;
- (void)onLogEvent:(id)arg1;
- (void)onGroupSettingChange;
- (void)reloadTableViewForAlbum:(id)arg1;
- (void)onUpdateGroupMemberSpecialTitle:(id)arg1;
- (void)onTroopMemberUpdate:(id)arg1;
- (id)getCreateGroupTime:(unsigned int)arg1;
- (void)ResponseHandleForSetFollow:(id)arg1;
- (void)PublicAccountUpdataMsgHandle:(id)arg1;
- (void)luaGroupMemListDidCallBack:(id)arg1;
- (void)addQQTransferGroupSuccNotify:(id)arg1;
- (void)addQQExitGroupResultNotification:(id)arg1;
- (void)addQQDismissGroupResultNotification:(id)arg1;
- (void)addObservers;
- (int)viewTag;
- (void)dealloc;
@property(retain, nonatomic) NSDictionary *paramDic; // @dynamic paramDic;
- (void)showSignInDataFromCache;
- (void)showSignInInfo:(id)arg1;
- (void)onGetGroupSignInData:(id)arg1;
- (void)setJoinAuthKey:(id)arg1;
- (void)initEnterGroupEffectData;
- (void)checkRecord;
- (void)initController;
- (id)initWithGroupSettingModel:(id)arg1 sourceID:(unsigned int)arg2 subSrcID:(unsigned int)arg3;
- (id)initWithTroopModel:(id)arg1 sourceID:(unsigned int)arg2 subSrcID:(unsigned int)arg3;
- (id)initWithTroopModel:(id)arg1;
- (id)initWithGroupCode:(id)arg1 sourceID:(unsigned int)arg2 subSrcID:(unsigned int)arg3;
- (id)initWithGroupCode:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned int dataReport644SrcID; // @dynamic dataReport644SrcID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *filterIdStr; // @dynamic filterIdStr;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

