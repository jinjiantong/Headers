//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveHPSimpleCardView.h"

#import "TBLiveHPPlayerDelegate-Protocol.h"

@class NSString, TBLiveBroadCasterInfoView, TBLiveFeedBubbleModel, TBLiveFeedBubbleView, TBLiveFeedCellBottomLikeView, TBLiveHPShopInfoView, UIView;
@protocol TBLiveHPRichCardViewDelegate;

@interface TBLiveHPRichCardView : TBLiveHPSimpleCardView <TBLiveHPPlayerDelegate>
{
    _Bool _canPlayVideo;
    _Bool _bubbleDismissAnimating;
    _Bool _showBubbleOrange;
    UIView *_topMaskView;
    TBLiveBroadCasterInfoView *_hostInfoView;
    TBLiveHPShopInfoView *_shopInfoView;
    TBLiveFeedCellBottomLikeView *_likeView;
    TBLiveFeedBubbleView *_bubbleView;
    id <TBLiveHPRichCardViewDelegate> _viewDelegate;
    TBLiveFeedBubbleModel *_bubbleModel;
}

@property(nonatomic) _Bool showBubbleOrange; // @synthesize showBubbleOrange=_showBubbleOrange;
@property(nonatomic) _Bool bubbleDismissAnimating; // @synthesize bubbleDismissAnimating=_bubbleDismissAnimating;
@property(retain, nonatomic) TBLiveFeedBubbleModel *bubbleModel; // @synthesize bubbleModel=_bubbleModel;
@property(nonatomic) _Bool canPlayVideo; // @synthesize canPlayVideo=_canPlayVideo;
@property(nonatomic) __weak id <TBLiveHPRichCardViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(retain, nonatomic) TBLiveFeedBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) TBLiveFeedCellBottomLikeView *likeView; // @synthesize likeView=_likeView;
@property(retain, nonatomic) TBLiveHPShopInfoView *shopInfoView; // @synthesize shopInfoView=_shopInfoView;
@property(retain, nonatomic) TBLiveBroadCasterInfoView *hostInfoView; // @synthesize hostInfoView=_hostInfoView;
@property(retain, nonatomic) UIView *topMaskView; // @synthesize topMaskView=_topMaskView;
- (void).cxx_destruct;
- (void)stopLikeAnimation;
- (void)startLikeAnimation;
- (void)liveHPPlayer:(id)arg1 changeEvent:(int)arg2;
- (_Bool)enablePlayShortVideo;
- (void)doStopShortVideo;
- (void)doPlayShortVideo;
- (void)stopShortVideo;
- (void)playShortVideo;
- (void)updatePlayShortVideo;
- (_Bool)centerYOutOfScreen;
- (_Bool)centerYInScreenCenter;
- (void)removeBubbleTipsViewWithAnimation:(_Bool)arg1;
- (void)showBubbleTipsViewWithAnimation;
- (_Bool)shouldShowBubbleTipsView;
- (void)closeBubbleTipsView;
- (void)showBubbleTipsViewWithoutCheckOffset;
- (void)showBubbleTipsView;
- (void)updateBubbleTipsView;
- (void)updateBubbleModel:(id)arg1;
- (void)refreshWithModel:(id)arg1 isOnLooker:(_Bool)arg2;
- (void)setupSubViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

