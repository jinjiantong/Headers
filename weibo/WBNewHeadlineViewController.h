//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBHeadlineBaseViewController.h"

#import "ArticleContinueReadViewDelegate-Protocol.h"
#import "ArticleRecommendFlowViewControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WBArticleCustomizedShareViewDelegate-Protocol.h"
#import "WBArticleMedileHeaderViewDelegate-Protocol.h"
#import "WBFeedPageTimeRecordProtocol-Protocol.h"
#import "WBHeadlineContentViewControllerCopyAndShareDelegate-Protocol.h"
#import "WBHeadlineHeaderViewDelegate-Protocol.h"
#import "WBNavigationCommonTitleViewDelegate-Protocol.h"
#import "WBOpenUrlArticleContextDelegate-Protocol.h"
#import "WBRewardManagerDelegate-Protocol.h"
#import "WBRewardViewDelegate-Protocol.h"

@class ArticleContinueReadBaseView, NSArray, NSString, UIImageView, UIView, WBArticleContentTipView, WBArticleCustomizedShareView, WBArticleEngine, WBArticleMaskViewTemp, WBArticleMedileHeaderView, WBArticleRecommendFlowViewController, WBBottomToolBarItem, WBContinueReadView, WBHeadlineHeaderView, WBMessageViewContentLikeButton, WBNavigationCommonTitleView, WBProgressHUD, WBRewardManager, WBRewardView, WBWatermarkView;
@protocol WBCopyAndShareTextContentView;

@interface WBNewHeadlineViewController : WBHeadlineBaseViewController <WBHeadlineContentViewControllerCopyAndShareDelegate, WBHeadlineHeaderViewDelegate, WBRewardManagerDelegate, ArticleContinueReadViewDelegate, WBArticleMedileHeaderViewDelegate, WBRewardViewDelegate, WBOpenUrlArticleContextDelegate, ArticleRecommendFlowViewControllerDelegate, WBNavigationCommonTitleViewDelegate, UITextFieldDelegate, WBArticleCustomizedShareViewDelegate, WBFeedPageTimeRecordProtocol>
{
    WBMessageViewContentLikeButton *likeButton;
    WBArticleRecommendFlowViewController *extendViewController;
    double scrollHeight;
    WBHeadlineHeaderView *articleHeaderView;
    _Bool isLoading;
    WBProgressHUD *hud;
    UIView *headerMiddleView;
    WBArticleMedileHeaderView *continuseView;
    UIView *headerBottomView;
    WBRewardView *rewardView;
    WBContinueReadView *bottomMonthUserView;
    WBArticleCustomizedShareView *bottomShareView;
    UIView *bottomShareViewBackgroundView;
    _Bool isLoaded;
    _Bool isSingleUser;
    ArticleContinueReadBaseView *focusReadView;
    CDStruct_5b974289 _flagHas;
    _Bool commendFlowDataIsEmpty;
    WBWatermarkView *watermarkView;
    _Bool finishPayed;
    _Bool isUsedCompose;
    _Bool _isHiddenComments;
    _Bool _isHiddenHeaderBottomView;
    _Bool _isHiddenShareBar;
    _Bool _shouldFollowToRead;
    NSString *luicode;
    NSString *_articleID;
    double _lastPosition;
    WBArticleEngine *_articleEngine;
    UIView *_bottomCardListView;
    NSArray *_picturesCanSaw;
    WBRewardManager *_rewardManager;
    NSString *_anchor;
    UIImageView *_footerBarSnapView;
    WBArticleContentTipView *_recommendTipView;
    WBArticleMaskViewTemp *_maskView;
    WBNavigationCommonTitleView *_followTitleView;
    WBBottomToolBarItem *_repostItem;
    WBBottomToolBarItem *_commentItem;
    WBBottomToolBarItem *_likeItem;
}

@property(retain, nonatomic) WBBottomToolBarItem *likeItem; // @synthesize likeItem=_likeItem;
@property(retain, nonatomic) WBBottomToolBarItem *commentItem; // @synthesize commentItem=_commentItem;
@property(retain, nonatomic) WBBottomToolBarItem *repostItem; // @synthesize repostItem=_repostItem;
@property(retain, nonatomic) WBNavigationCommonTitleView *followTitleView; // @synthesize followTitleView=_followTitleView;
@property(retain, nonatomic) WBArticleMaskViewTemp *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) WBArticleContentTipView *recommendTipView; // @synthesize recommendTipView=_recommendTipView;
@property(retain, nonatomic) UIImageView *footerBarSnapView; // @synthesize footerBarSnapView=_footerBarSnapView;
@property(copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
@property(retain, nonatomic) WBRewardManager *rewardManager; // @synthesize rewardManager=_rewardManager;
@property(retain, nonatomic) NSArray *picturesCanSaw; // @synthesize picturesCanSaw=_picturesCanSaw;
@property(nonatomic) _Bool shouldFollowToRead; // @synthesize shouldFollowToRead=_shouldFollowToRead;
@property(retain, nonatomic) UIView *bottomCardListView; // @synthesize bottomCardListView=_bottomCardListView;
@property(retain, nonatomic) WBArticleEngine *articleEngine; // @synthesize articleEngine=_articleEngine;
@property(nonatomic) double lastPosition; // @synthesize lastPosition=_lastPosition;
@property(retain, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(nonatomic) _Bool isHiddenShareBar; // @synthesize isHiddenShareBar=_isHiddenShareBar;
@property(nonatomic) _Bool isHiddenHeaderBottomView; // @synthesize isHiddenHeaderBottomView=_isHiddenHeaderBottomView;
@property(nonatomic) _Bool isHiddenComments; // @synthesize isHiddenComments=_isHiddenComments;
@property(retain, nonatomic) NSString *luicode; // @synthesize luicode;
@property(nonatomic) _Bool isUsedCompose; // @synthesize isUsedCompose;
@property(nonatomic) _Bool finishPayed; // @synthesize finishPayed;
- (void).cxx_destruct;
- (void)loadTimePerformanceAnalysisWithIsLoadFromLocal:(_Bool)arg1;
- (void)_updateMaskViewVisibility:(_Bool)arg1 withViewTop:(double)arg2 viewLeft:(double)arg3 maskViewHeight:(double)arg4 maskViewWidth:(double)arg5;
- (void)_addMaskViewForContinuseViewIfNeed;
- (double)_lastReadPosition;
- (_Bool)_isScrollToLastReadPositionAnimated;
- (_Bool)_hasAnchor;
- (void)_recordArticlePageOpenDepth;
- (void)updateRecommendTipViewFrame;
- (_Bool)shouldShowRecommendContentTipView;
- (void)commendFlowDataIsEmpty:(id)arg1;
- (void)articleContextDidEndAnimation:(id)arg1;
- (void)articleContextWillStartAnimation:(id)arg1;
- (void)rewardView:(id)arg1 userlistButtonDidSelcted:(id)arg2;
- (void)rewardView:(id)arg1 rewardButtonDidClick:(id)arg2;
- (void)continueButtonDidClick:(id)arg1;
- (void)scrollToLastreadPosition;
- (void)recordRecommendRead;
- (void)recordReadPosition;
- (void)cancelAction:(id)arg1;
- (void)panNavigationDidBegin:(id)arg1;
- (void)moreButtonPressed:(id)arg1;
- (void)configSubviewsFrame;
- (void)loadMoreDataDidTriggered;
- (void)pullRefreshDidTriggered;
- (void)initNaviRightButton;
- (_Bool)enableLoadMore;
- (void)refreshContentView;
- (void)refreshOnFollowStateChanged:(long long)arg1 viewsChangeImmediately:(_Bool)arg2;
- (void)commentDidSendFinished:(id)arg1;
- (void)contactEngineDidUnfollowContactNotification:(id)arg1;
- (void)contactEngineDidFollowContactNotification:(id)arg1;
- (void)didEnterBackground;
- (void)_updateIsAuthorFollowedInMemoryAndDb:(long long)arg1;
- (void)_setupPicturesCanSawByPragraphModelArray:(id)arg1;
- (_Bool)_shouldMakeArticleContentPartlyCanRead;
- (_Bool)_shouldFollowToRead;
- (void)_switchViewsByAllContentCanSee:(_Bool)arg1 viewsChangeImmediately:(_Bool)arg2;
- (void)_refreshViewsByIsFollowed:(_Bool)arg1 viewsChangeImmediately:(_Bool)arg2;
- (void)_refreshExtendViewController;
- (id)getLikeItem:(id)arg1;
- (id)getCommentItem:(id)arg1;
- (id)getRepostItem:(id)arg1;
- (void)setNavigationItem;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)falseInfoBackgroudDidTapped:(id)arg1;
- (void)originalUrlClick:(id)arg1;
- (void)copyrightClick:(id)arg1;
- (void)continueReadButtonClick:(id)arg1 user:(id)arg2;
- (void)userInfoClick:(id)arg1;
- (void)coverImageClick:(id)arg1;
- (void)writerNameClick:(id)arg1;
- (id)analysisFeatureCode;
- (void)resetToolbar;
- (void)resetEmptyView;
- (void)didReceiveMemoryWarning;
- (void)refreshCradListView;
- (void)configBottomCardlistView:(_Bool)arg1;
- (_Bool)sharePosition:(id)arg1 Has:(id)arg2;
- (void)configHeaderBottomShareView;
- (void)configBottomMonthUserView;
- (void)configBottomRewardView;
- (void)configBottomFocusReadView;
- (void)configHeaderBottomView;
- (void)createHeaderBottomViewElements;
- (void)configMiddleAricleViewController;
- (void)showWatermarkViewIfNeeded;
- (void)configHeaderMiddleView;
- (void)createHeaderMiddleView;
- (void)continueReadPayed:(_Bool)arg1 withPayType:(int)arg2 extraInfo:(id)arg3;
- (void)refreshViewsOnContentPragraphFinish:(id)arg1 pictures:(id)arg2;
- (void)createContentViewByArticle:(id)arg1;
- (void)requestArticleFromNetwork;
- (void)requestExtendPropertyFromNetwork:(_Bool)arg1;
- (void)preparePragraphedHtmlStringBuilderByIsLoadedFromLocal:(_Bool)arg1;
- (void)loadArticle;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)timelineItemDidSentOut:(id)arg1 event:(int)arg2;
- (void)titleViewClickLeftIcon:(id)arg1;
- (void)titleViewClickTitle:(id)arg1;
- (id)titleViewDataSource;
- (id)titleViewTitle:(id)arg1;
- (id)titleViewRightButton:(id)arg1;
- (id)titleViewLeftIcon:(id)arg1;
- (void)refreshViewsOnPayCompleteWithPayCompleteNotificationListener:(id)arg1 wbExtendType:(id)arg2;
- (id)recordItemOfTimeRecorder;
- (id)timeRecordIdentifier;
- (id)moduleID;
- (void)removeFooterBarSnapView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
- (id)init;
- (void)dealloc;
@property(retain, nonatomic) UIView<WBCopyAndShareTextContentView> *selectedContentView; // @dynamic selectedContentView;
- (void)wbCopyAndShareContentViewWannerBeUnselected:(id)arg1;
- (void)wbCopyAndShareContentViewWannerBeSelected:(id)arg1;
- (void)showCopyAndShareMenu;
- (void)share:(id)arg1;
- (void)copyContent:(id)arg1;
- (id)contextMenuItems;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)contentViewDidSetup:(id)arg1;
- (void)resetSelectedContentView;
- (id)_newShareContentTitle;
- (id)_shareContentTitle;
- (void)actionOpenClaimScheme;
- (void)shareButtonDidSelected:(id)arg1;
- (void)shareItemAction:(id)arg1;
- (void)likeItemAction:(id)arg1;
- (void)replayItemAction:(id)arg1;
- (void)commentItemAction:(id)arg1;
- (void)actionCopylink;
- (void)delItemAction:(id)arg1;
- (void)moreButtonDidPressed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

