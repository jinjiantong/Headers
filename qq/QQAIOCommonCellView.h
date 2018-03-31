//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOCellView.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>
#import <QQMainProject/QQAIOCellViewPubFunc-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class BubbleBgInfo, CABasicAnimation, CADisplayLink, CALayer, CATextLayer, NSArray, NSMutableArray, NSString, QQAIOCellGroupRankView, QQAIOGrayTailView, QQAIOMsgModel, QQAvatarView, QQDelayIndicatorView, QQEmotionLabel, QQQuoteMsgBaseView, QQWalletGoldMsgCellTailView, SDHeadImageView, UIButton, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface QQAIOCommonCellView : QQAIOCellView <UIGestureRecognizerDelegate, QQAIOCellViewPubFunc, CAAnimationDelegate>
{
    struct CGRect _backRect;
    struct CGRect _nickRect;
    struct CGRect _groupRankRect;
    struct CGRect _iconRect;
    struct CGRect _groupGlamourRankRect;
    double _leftOffset;
    double _rightOffset;
    struct UIEdgeInsets _bubbleInset;
    QQAvatarView *_headView;
    QQEmotionLabel *_nickLabel;
    QQAIOCellGroupRankView *_groupRankView;
    UIImageView *_groupGlamourRankView;
    UIImageView *_torchbearerIcon;
    QQDelayIndicatorView *_msgSendLoadingView;
    UIButton *_sendFailView;
    UIImageView *_genderImageView;
    UILabel *_ageLabel;
    struct CGRect _openGroupAdminRect;
    UIImageView *_adminView;
    UILabel *_adminLB;
    UIImageView *_groupMemberDistanceView;
    UILabel *_groupMemberDistanceLabel;
    struct {
        unsigned int shouldDisplayNickName:1;
        unsigned int isSelf:1;
    } _cellViewFlags;
    UIView *_headerViewContener;
    BubbleBgInfo *_bubbleInfo;
    _Bool _showImageBubble;
    SDHeadImageView *_sdImageView;
    struct CGRect _quoteMsgRect;
    UIButton *_douTuView;
    QQWalletGoldMsgCellTailView *_goldMsgTailView;
    UIButton *_marioView;
    int _xo;
    UIImage *_bgImageNor;
    UIImage *_bgImageSel;
    CALayer *_bubbleLayer;
    CALayer *_bubbleCharletLayer;
    CATextLayer *_bubbleTextDIYLayer;
    UIImage *_groupRankImageBGCache;
    NSMutableArray *_accessibleElements;
    CABasicAnimation *_animationCABasic;
    UIImage *_anonymousRingImage;
    UIColor *_nickColor;
    UIImageView *_hotAuthenIcon;
    QQQuoteMsgBaseView *_quoteMsgView;
    QQAIOGrayTailView *_commonGrayTail;
    UIButton *_nextBtn;
    NSArray *_bubbleDiyChartletLayerArr;
    CADisplayLink *_animationDisplayLink;
}

@property(retain, nonatomic) CABasicAnimation *animationCABasic; // @synthesize animationCABasic=_animationCABasic;
@property(retain, nonatomic) CADisplayLink *animationDisplayLink; // @synthesize animationDisplayLink=_animationDisplayLink;
@property(retain, nonatomic) NSArray *bubbleDiyChartletLayerArr; // @synthesize bubbleDiyChartletLayerArr=_bubbleDiyChartletLayerArr;
@property(retain, nonatomic) CATextLayer *bubbleTextDIYLayer; // @synthesize bubbleTextDIYLayer=_bubbleTextDIYLayer;
@property(retain, nonatomic) CALayer *bubbleCharletLayer; // @synthesize bubbleCharletLayer=_bubbleCharletLayer;
@property(retain, nonatomic) QQDelayIndicatorView *msgSendLoadingView; // @synthesize msgSendLoadingView=_msgSendLoadingView;
@property(retain, nonatomic) UIButton *sendFailView; // @synthesize sendFailView=_sendFailView;
@property(retain, nonatomic) UIImage *groupRankImageBGCache; // @synthesize groupRankImageBGCache=_groupRankImageBGCache;
@property(retain, nonatomic) NSMutableArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
@property(retain, nonatomic) QQWalletGoldMsgCellTailView *goldMsgTailView; // @synthesize goldMsgTailView=_goldMsgTailView;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) QQAIOGrayTailView *commonGrayTail; // @synthesize commonGrayTail=_commonGrayTail;
@property(retain, nonatomic) QQQuoteMsgBaseView *quoteMsgView; // @synthesize quoteMsgView=_quoteMsgView;
@property(retain, nonatomic) UIImageView *hotAuthenIcon; // @synthesize hotAuthenIcon=_hotAuthenIcon;
@property(retain, nonatomic) SDHeadImageView *sdImageView; // @synthesize sdImageView=_sdImageView;
@property(nonatomic) _Bool showImageBubble; // @synthesize showImageBubble=_showImageBubble;
@property(readonly, retain, nonatomic) QQAvatarView *headView; // @synthesize headView=_headView;
@property(nonatomic) struct CGRect backRect; // @synthesize backRect=_backRect;
@property(retain, nonatomic) CALayer *bubbleLayer; // @synthesize bubbleLayer=_bubbleLayer;
@property(retain, nonatomic) BubbleBgInfo *bubbleInfo; // @synthesize bubbleInfo=_bubbleInfo;
@property(retain, nonatomic) UIImage *bgImageSel; // @synthesize bgImageSel=_bgImageSel;
@property(retain, nonatomic) UIImage *bgImageNor; // @synthesize bgImageNor=_bgImageNor;
@property(retain, nonatomic) UIColor *nickColor; // @synthesize nickColor=_nickColor;
- (void).cxx_destruct;
- (void)redrawTextWithColorDefinedInBubbleConfig;
- (void)showVASAvatarView;
- (void)qimIdentityReport;
- (_Bool)loadQIMStyleBubbleImageNor:(int)arg1 imageSel:(int)arg2;
- (int)mirrorBubbleInfoType:(int)arg1;
- (void)addQIMIconAboveAvatarIfNeeded;
- (_Bool)shouldShowQIMIcon;
- (_Bool)shouldUseQIMStyleBubble;
- (_Bool)shouldUseDefaultBubbleInfo;
- (_Bool)isDisGrpOrGrpQIMOnline;
- (_Bool)isC2CQIMOnline;
- (void)marioButtonClicked;
- (void)didTapGoldMSgButton:(id)arg1;
- (void)didTapDouTuButton:(id)arg1;
- (void)didTapFailIcon:(id)arg1;
- (struct CGRect)getQuoteMsgRect;
- (_Bool)accessibilityPerformMagicTap;
- (id)accessibilityMagicTapItmes;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)setupAccessibilityFrameForElement:(id)arg1;
- (void)uploadBubbleAccessibilityLabel;
- (void)voiceSetData:(id)arg1;
- (void)stopMessageAnimation;
- (void)startMessageAnimation;
- (void)didEndDisplay;
- (void)willDisplay;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)menuControllerWillHide:(id)arg1;
- (void)hidePopupMenu;
- (void)showPopupMenu;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)getMenuItems;
- (_Bool)canShowPopupMenu;
- (void)LongPressedEnded;
- (void)setIsLongPressed;
- (void)longPressHeader;
- (void)LongPressCallBack:(struct CGPoint)arg1;
- (void)headViewTapped:(id)arg1;
- (_Bool)judgmentIsSimilarColorWithTextColor:(id)arg1 andBgColor:(id)arg2;
- (void)dealSimilarColorWithLabel:(id)arg1;
- (_Bool)didTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)didTouchCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)didTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)didTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)hiddenDisplayItems;
- (_Bool)isHeadTouch:(struct CGPoint)arg1;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)hideMenuController;
- (void)setHighlighted:(_Bool)arg1;
- (void)drawMarioButton;
- (void)letOtherCellRedraw;
- (void)drawGoldMsgTailView;
- (void)calBubbleBackRect;
- (void)drawDouTuButton;
- (void)drawLoadingAndFailIcon;
- (struct CGRect)frameForMsgSendFail;
- (struct CGRect)frameForMsgSendLoading;
- (struct CGRect)frameForDouTuButton;
- (struct CGRect)frameForMarioButton;
- (_Bool)supportMultFor;
- (_Bool)shouldDisplayGoldMsgButton;
- (_Bool)shouldDisplayDouTuButton;
- (_Bool)shouldDisplayLoadingAndFailForMsgType:(int)arg1;
- (_Bool)shouldDisplayMsgSendFail;
- (_Bool)shouldDisplayMsgSendLoading;
- (void)initOpenGroupView;
- (void)initRankLBTouchEvent;
- (struct CGPoint)originForCommonGrayTail;
- (void)drawGrayTail;
- (void)drawNearbyGlamourRankOrGameRole;
- (void)drawGroupGlamourRank;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawOpenGroupItem;
- (void)drawGroupDistance;
- (void)drawGroupRank;
- (void)drawHotAuthenIcon;
- (void)drawTorchbearerIconIfNeeded;
- (void)drawNickname;
- (void)drawHotChatGroupHeadView;
- (_Bool)isHotChatGroupChat;
- (void)drawBody;
- (void)drawHeader;
- (void)drawAvatar;
- (void)updateAvatarPendantWhenCellReuse;
- (void)drawCellView;
- (id)touchableAreas;
- (struct CGRect)GetTextTopRect;
- (struct CGRect)GetTextBottomRect;
- (struct CGRect)GetImageRect;
- (struct CGRect)GetFailIconRect;
- (struct CGRect)GetPaoPaoBgRect;
- (void)layoutViewsAsSender;
- (void)layoutViewsAsReceiver;
- (void)willDrawBubble;
- (void)willDrawAvatar;
- (void)willDrawHeader;
- (void)willDrawCellView;
- (void)setBubbleLayerColor:(id)arg1;
- (void)setBubbleOpacity:(double)arg1;
- (void)drawBubbleDiyChartletWithDiyInfo:(id)arg1;
- (void)drawDIYTextAndChartlet;
- (id)makeChartletLayerForAnimationInfo:(id)arg1 withImage:(id)arg2;
- (void)drawBubbleStaticChartlet;
- (void)drawBubble;
- (void)prepareImgPaopao:(id)arg1;
- (void)preparePaopao:(id)arg1;
- (void)loadBubbleImageNor:(int)arg1 imageSel:(int)arg2;
- (void)loadBubbleInfo;
- (void)updateCellView;
@property(nonatomic) __weak QQAIOMsgModel *aioModel;
- (void)prepareForReuse;
- (void)onDiyChartletDowonloadCompleteNotification:(id)arg1;
- (void)onBubbleDownloadCompleteNotification:(id)arg1;
- (void)onBubbleDefaultLoadCompleteNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;
- (void)dealloc;
- (void)menuActionGroupTopic:(id)arg1;
- (void)menuActionReply:(id)arg1;
- (void)menuActionAskForMore:(id)arg1;
- (void)menuActionRecall:(id)arg1;
- (void)menuActionDeleteMessage:(id)arg1;
- (void)menuActionCollect:(id)arg1;
- (void)menuActionForwardTo:(id)arg1;
- (void)menuActionCopyText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

