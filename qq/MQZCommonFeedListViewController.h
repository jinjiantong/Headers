//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/MQZoneOperatableViewController.h>

#import <QQMainProject/QUIShareDelegate-Protocol.h>
#import <QQMainProject/QZFeedbackCellDelegate-Protocol.h>
#import <QQMainProject/QZVideoFeedsTouchViewDelegate-Protocol.h>
#import <QQMainProject/QZoneHomepageShareViewDelegate-Protocol.h>

@class AddFriendSendMessageViewController, MQZFavourOperater, MQzoneFollowTipView, NSDate, NSMutableArray, NSMutableDictionary, NSString, QUIActionSheet, QUIShareView, QZSpeciallyFollowBannerView, QZVideoFeedsTouchView, QZoneHomepageShareView;

@interface MQZCommonFeedListViewController : MQZoneOperatableViewController <QUIShareDelegate, QZoneHomepageShareViewDelegate, QZVideoFeedsTouchViewDelegate, QZFeedbackCellDelegate>
{
    NSMutableArray *_feedList;
    NSMutableArray *_itemList;
    QUIActionSheet *_qZoneActionSheet;
    NSMutableDictionary *_getAllCommentRequestIDContainer;
    long long _intelligenceBannerType;
    NSDate *_lastUpdateDate;
    QUIShareView *_shareView;
    QZoneHomepageShareView *_homepageShareView;
    QZSpeciallyFollowBannerView *_specialFollowBanView;
    long long _curSpecialFollowUIN;
    long long reportShareSecondAction;
    _Bool _isScrolling;
    MQzoneFollowTipView *_quickForwardGuide;
    QZVideoFeedsTouchView *_touchView;
    _Bool _needReloadDataFlag;
    _Bool _willEnterFeedDetailVC;
    long long _favourRequestId;
    long long _forwardRequestId;
    long long _shareRequestId;
    long long _outsiteShareRequestId;
    long long _setConcernReqID;
    AddFriendSendMessageViewController *_addFriendCtrl;
    NSMutableDictionary *_willEnterFeedDetailInfo;
    MQZFavourOperater *_favourOperator;
}

@property(retain, nonatomic) MQZFavourOperater *favourOperator; // @synthesize favourOperator=_favourOperator;
@property(retain, nonatomic) NSMutableDictionary *willEnterFeedDetailInfo; // @synthesize willEnterFeedDetailInfo=_willEnterFeedDetailInfo;
@property(nonatomic) _Bool willEnterFeedDetailVC; // @synthesize willEnterFeedDetailVC=_willEnterFeedDetailVC;
@property(nonatomic) _Bool needReloadDataFlag; // @synthesize needReloadDataFlag=_needReloadDataFlag;
@property(retain, nonatomic) AddFriendSendMessageViewController *addFriendCtrl; // @synthesize addFriendCtrl=_addFriendCtrl;
@property(nonatomic) long long setConcernReqID; // @synthesize setConcernReqID=_setConcernReqID;
@property(nonatomic) long long outsiteShareRequestId; // @synthesize outsiteShareRequestId=_outsiteShareRequestId;
@property(nonatomic) long long shareRequestId; // @synthesize shareRequestId=_shareRequestId;
@property(nonatomic) long long forwardRequestId; // @synthesize forwardRequestId=_forwardRequestId;
@property(nonatomic) long long favourRequestId; // @synthesize favourRequestId=_favourRequestId;
@property(retain, nonatomic) NSMutableArray *feedList; // @synthesize feedList=_feedList;
- (void).cxx_destruct;
- (void)setupCell:(id)arg1 forModel:(id)arg2;
- (void)handleRequestRecommFeed:(id)arg1 buttonType:(long long)arg2 info:(id)arg3;
- (id)linkDescForHomepageShareView;
- (id)linkNameForHomepageShareView;
- (long long)linkUinForHomepageShareView;
- (void)onHomepageShareViewSelectShareType:(_Bool)arg1;
- (void)getRecommFeedAfterFollowBtnClick:(id)arg1 isFromOriginal:(_Bool)arg2;
- (void)didSelectDetailDropDownItem:(long long)arg1;
- (void)isTimeToDeleteFeed;
- (void)shareDidAction:(id)arg1;
- (void)shareDidDismiss:(id)arg1;
- (void)shareDidAppear:(id)arg1;
- (void)popSharePanelWithTopArr:(id)arg1 WithBottomArr:(id)arg2 isPosterType:(_Bool)arg3;
- (void)popSharePanelWithTopArr:(id)arg1 WithBottomArr:(id)arg2;
- (void)sendUGCSenceWithEventID:(long long)arg1 feedModel:(id)arg2 message:(id)arg3 indexPath:(id)arg4 afterDelay:(double)arg5;
- (void)sendUGCSenceWithEventID:(long long)arg1 feedModel:(id)arg2 message:(id)arg3 indexPath:(id)arg4 blShouldShowPet:(CDUnknownBlockType)arg5;
- (void)sendUGCSenceWithEventID:(long long)arg1 feedModel:(id)arg2 message:(id)arg3 indexPath:(id)arg4;
- (_Bool)shouldShowWidgetAIAuto;
- (_Bool)hasWidgetAI;
- (_Bool)shouldShowWidgetAI;
- (long long)getQzFeedFromType;
- (void)on3RDShareNotify:(id)arg1;
- (void)invalidShareRequestId;
- (void)updateCachedFeedListInTimeLineMode:(id)arg1;
- (void)updateFeedListAndRefreshUI:(id)arg1;
- (void)setFeedNeedUpdateWithKey:(id)arg1;
- (_Bool)isProcessSecPiece;
- (_Bool)performSelectorRefreshUI:(double)arg1;
- (void)receiveUndealCntFeed:(id)arg1;
- (_Bool)checkIfControllerInNav;
- (void)checkPushAlive;
- (void)copyFromOne:(id)arg1 toNewFeed:(id)arg2;
- (void)copyRedBounsFromFeedModel:(id)arg1 toFeedModel:(id)arg2;
- (id)getLocalFeedWithUgcKey:(id)arg1;
- (void)receiveUpdateFeedPush:(id)arg1;
- (void)updateFeedAccordEvent:(long long)arg1;
- (void)removeFeedModel:(id)arg1;
- (void)removeFeedModelByUin:(long long)arg1;
- (void)resetFeedContentLayoutInfo;
- (id)getFeedVideoViewsInCell:(id)arg1;
- (void)onNotifyCheckIllegalDidBecomeActive:(id)arg1;
- (_Bool)isIlleagalWithFeedVideo:(id)arg1;
- (void)checkVideoIllegalInfo;
- (void)onNotifyCheckVideoIllegal:(id)arg1;
- (void)addVideoUrlWithFeedVideo:(id)arg1 toArray:(id)arg2;
- (void)checkIllegalFromFeedModel:(id)arg1;
- (void)currentFocusFeedCellChange:(id)arg1;
- (void)checkVideoIllegal:(id)arg1;
- (void)touched:(struct CGPoint)arg1;
- (void)removeQuickforwardGuide;
- (void)quickforwardButtonChangeState:(id)arg1 feedModel:(id)arg2;
- (long long)getQuickForwardBtnScene:(long long)arg1;
- (void)onManuallyClickFeedVideo:(id)arg1;
- (void)clickDeleteButton:(id)arg1 indexPath:(id)arg2;
- (void)handleFeedCellCommentReplyClicked:(id)arg1 indexPath:(id)arg2 comment:(long long)arg3 reply:(long long)arg4 offset:(double)arg5 commentType:(long long)arg6;
- (void)showFollowTips:(_Bool)arg1 uin:(long long)arg2 top:(double)arg3 feedModel:(id)arg4;
- (void)showFollowTips:(_Bool)arg1 uin:(long long)arg2 top:(double)arg3;
- (void)onFollowBannerClicked:(long long)arg1 feedModel:(id)arg2;
- (int)onSetConcernNotify:(id)arg1;
- (void)handleFeedCellFamousFeedFollowBtnClick:(id)arg1 cell:(id)arg2 isFromOriginal:(_Bool)arg3 param:(id)arg4;
- (void)handleFeedCellFollowBtnClick:(id)arg1 indexPath:(id)arg2 param:(id)arg3;
- (void)setSpecialCareFriend:(id)arg1;
- (void)peopleYouMayKnowNegativeFeedback:(id)arg1;
- (void)didReceivedAddFriendResponse:(id)arg1;
- (void)didReceivedPanoramaViewExistNotify:(id)arg1;
- (void)handleHomePageAddFriend:(id)arg1;
- (void)addFriend:(id)arg1;
- (void)addFriendWithUin:(long long)arg1;
- (void)unInterestPeopleYouMayKnow:(id)arg1;
- (void)gotoPotentialViewController;
- (void)gotoSpecialCareController;
- (void)handleFeedCellForwardButtonClicked:(id)arg1 indexPath:(id)arg2 offset:(double)arg3 button:(id)arg4 forwardType:(long long)arg5;
- (void)handleFeedCellShareButtonClick:(id)arg1 indexPath:(id)arg2;
- (id)cellWithIndexPath:(id)arg1;
- (void)clickCommentButtonWithFeedmodel:(id)arg1;
- (void)handleSpecialBirthGiftSend:(id)arg1 withGiftIndex:(long long)arg2;
- (void)handleClickReport:(id)arg1 indexPath:(id)arg2 offset:(double)arg3;
- (void)handleClickCommentAndReplyReport:(id)arg1 indexPath:(id)arg2 comment:(long long)arg3 reply:(long long)arg4 offset:(double)arg5 commentType:(long long)arg6;
- (void)handlefoldOrExpandSummary:(id)arg1 isOriginal:(_Bool)arg2;
- (void)handleFeedCellCommentButtonClicked:(id)arg1 indexPath:(id)arg2;
- (void)handleFeedCellLikeButtonClicked:(id)arg1 indexPath:(id)arg2 isLike:(_Bool)arg3 param:(id)arg4 from:(long long)arg5;
- (void)handleFeedCellCustomPraiseLikeButtonClicked:(id)arg1;
- (void)handleFeedCellReportInterest:(id)arg1;
- (void)handleFeedDetailCellCommentLikeButtonClicked:(id)arg1 comment:(id)arg2 isLiked:(_Bool)arg3 likeNum:(long long)arg4 indexPath:(id)arg5 param:(id)arg6;
- (void)handleFeedCellLikeButtonClicked:(id)arg1 indexPath:(id)arg2 isLike:(_Bool)arg3 param:(id)arg4;
- (_Bool)isCellVisible:(id)arg1 cell:(id)arg2;
- (void)onFeedbackCell:(id)arg1 action:(unsigned long long)arg2 feedModel:(id)arg3;
- (void)onFeedCell:(id)arg1 action:(unsigned long long)arg2 param:(id)arg3 feedModel:(id)arg4;
- (void)handleClickComment:(id)arg1 fromType:(long long)arg2 indexPath:(id)arg3 offset:(double)arg4;
- (void)handleFeedMenuItemFavorClicked:(id)arg1;
- (double)tableviewOffsetWithIndex:(long long)arg1 model:(id)arg2;
- (void)clickInputButton:(id)arg1 indexPath:(id)arg2 offset:(double)arg3;
- (void)handleFeedCellTextInputClicked:(id)arg1 indexPath:(id)arg2 offset:(double)arg3;
- (_Bool)isNeedPopActionSheet;
- (_Bool)testAudio:(id)arg1 isShareOutside:(_Bool)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getToolbarItems:(id)arg1;
- (void)popupMenu:(id)arg1;
- (id)intelligenceBannerCell:(id)arg1;
- (void)handleDidSelectCell:(id)arg1 param:(id)arg2;
- (void)prepareForReuseCell:(id)arg1 feedModel:(id)arg2;
- (void)feedVisitReport:(id)arg1;
- (long long)liveReportExpose;
- (_Bool)enableFeedVisitReport;
- (void)videoRecommReport:(id)arg1 isFromEndRecomVideo:(_Bool)arg2;
- (void)handleClickVideoAdv:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)errorCellForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)handleClickRichTextItem:(id)arg1 itemRect:(struct CGRect)arg2 param:(id)arg3;
- (_Bool)isNeedShareOutSiteUGCRight:(id)arg1;
- (_Bool)isSupportShareOutsiteRight:(id)arg1;
- (void)onNotifyShareOutsiteOperation:(id)arg1;
- (void)onNotifyLuckyMoneyToastResult:(id)arg1;
- (id)getImageFromOutShare:(id)arg1;
- (id)fetchUGCMessageTips:(id)arg1;
- (id)fetchMessageTips:(id)arg1;
- (id)removeTitlePrefixandSuffix:(id)arg1;
- (void)sendToWeixinMoments:(id)arg1 outsiteShareUrl:(id)arg2 scene:(int)arg3;
- (void)sendReqToQQ:(id)arg1 outsiteShareUrl:(id)arg2;
- (void)onNotifyTopfeedsResult:(id)arg1;
- (void)setFeedTop:(id)arg1;
- (int)onNotifyQuoteResult:(id)arg1;
- (void)quoteFeed:(id)arg1;
- (void)onModifyMood:(id)arg1;
- (void)hideAllSecret:(id)arg1;
- (void)hideAllFeed:(id)arg1;
- (void)feedbackcellDidAppear:(id)arg1;
- (void)hideThisFeed:(id)arg1;
- (_Bool)checkAndShowFeedbackCellWithModel:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)hideGuidingFeed:(id)arg1 isNeverShowGuiding:(_Bool)arg2;
- (int)onNotifyFavourOperation:(id)arg1;
- (void)onFavorClicked:(id)arg1 favourOperator:(id)arg2;
- (void)onFowardToWXClicked:(id)arg1 scene:(int)arg2 isForwardViewClick:(_Bool)arg3 currentView:(id)arg4 offsetY:(double)arg5;
- (void)onFowardToWXClicked:(id)arg1 scene:(int)arg2;
- (void)onFowardToQQClicked:(id)arg1 isForwardViewClick:(_Bool)arg2 currentView:(id)arg3 offsetY:(double)arg4;
- (void)onFowardToQQClicked:(id)arg1;
- (void)showSpaceRightAlertViewForWinxin:(id)arg1 message:(id)arg2 scene:(int)arg3 shareUrl:(id)arg4;
- (void)showSpaceRightAlertViewForQQWithMessage:(id)arg1 shareUrl:(id)arg2 feedModel:(id)arg3;
- (void)onNotifyForwardEdit:(id)arg1;
- (void)onFowardToQZoneClicked:(id)arg1 cell:(id)arg2 indexPath:(id)arg3 isQuickForward:(_Bool)arg4;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)clickForwardBtn:(id)arg1 cell:(id)arg2;
- (void)clickMenuButton:(id)arg1 cell:(id)arg2 forwardType:(long long)arg3 indexPath:(id)arg4 feedModel:(id)arg5;
- (void)clickDeleteButton:(id)arg1 cell:(id)arg2;
- (long long)getRapidCommentFromType;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)handleClickComment:(id)arg1 feedModel:(id)arg2 fromType:(long long)arg3;
- (void)removeGetAllCommentContainer;
- (void)removeGetAllCommentRequestID:(long long)arg1 cancel:(_Bool)arg2;
- (void)onEnterDetailViewController:(id)arg1 uin:(long long)arg2;
- (void)initNotificationObservers:(id)arg1;
- (_Bool)hasNoFeeds;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (void)petQuickCommentWithImage:(id)arg1 size:(double)arg2 param:(id)arg3;
- (void)dealWithTypeForNotifyTopfeeds:(long long)arg1;
- (void)showFeedListToast:(id)arg1 tipType:(long long)arg2;
- (_Bool)quickForwardInVideoFeedListForward:(id)arg1;
- (_Bool)quickForwardInVideoFeedListShare:(id)arg1;
- (void)replaceByGDTFeed:(id *)arg1 gdtFeed:(id)arg2;
- (void)setupGroupModelisConcernFamousFeed:(id)arg1 param:(id)arg2;
- (void)onNotifyTopfeedsSuccess:(id)arg1;
- (int)onQuoteFinish:(id)arg1;
- (void)dealWithInfoAction:(id)arg1 msgStr:(id)arg2;
- (int)onNotifyForwardResult:(id)arg1;
- (void)onForwardRequest:(id)arg1;
- (int)onNotifyShareResult:(id)arg1;
- (long long)onGetReplyNotify:(id)arg1;
- (long long)onGetCommentNotify:(id)arg1;
- (long long)onMarkFaceNotify:(id)arg1;
- (long long)onGetVideoPlayOnWifi:(id)arg1;
- (void)onGetYellowLuckMoney:(id)arg1;
- (long long)onGetLikeNotify:(id)arg1;
- (long long)onGetForwardNotify:(id)arg1;
- (void)onGetVideoPlayCountUpdateNotify:(id)arg1;
- (long long)getRapidCommentFromType;
- (void)videoCommentReport:(id)arg1;
- (void)videoReportWithString:(id)arg1;
- (void)quickForwardWithFeedModel:(id)arg1 text:(id)arg2 userParam:(id)arg3 isForward:(_Bool)arg4;
- (void)advReportWithFeedModel:(id)arg1 requestId:(long long)arg2 position:(long long)arg3;
- (_Bool)inputBarSendText:(id)arg1 param:(id)arg2;
- (long long)onGetActiveFeedNotify:(id)arg1;
- (_Bool)checkOnGetActiveFeedNotify:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *dictFeedsWithKey; // @dynamic dictFeedsWithKey;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(nonatomic) long long getFeedRequestID; // @dynamic getFeedRequestID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
