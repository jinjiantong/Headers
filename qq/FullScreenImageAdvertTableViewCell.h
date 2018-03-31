//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FullScreenVideoTableViewCell.h>

#import <QQMainProject/QQPAAdvertisePopupViewDelegate-Protocol.h>

@class NSString, ReadInjoyAsynImageView, UIButton, UILabel, UITapGestureRecognizer, UIView;

@interface FullScreenImageAdvertTableViewCell : FullScreenVideoTableViewCell <QQPAAdvertisePopupViewDelegate>
{
    _Bool _isNegFeedbackItemShow;
    CDUnknownBlockType _totalViewAction;
    ReadInjoyAsynImageView *_coverImageView;
    UIButton *_topBar;
    UILabel *_describeLabel;
    UIButton *_feedbackBtn;
    UIButton *_bottomBar;
    UILabel *_recommendLabel;
    UILabel *_detailLabel;
    UIView *_feedbackMaskView;
    UITapGestureRecognizer *_feedbackMaskViewTap;
}

@property(retain, nonatomic) UITapGestureRecognizer *feedbackMaskViewTap; // @synthesize feedbackMaskViewTap=_feedbackMaskViewTap;
@property(retain, nonatomic) UIView *feedbackMaskView; // @synthesize feedbackMaskView=_feedbackMaskView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) UIButton *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UIButton *feedbackBtn; // @synthesize feedbackBtn=_feedbackBtn;
@property(retain, nonatomic) UILabel *describeLabel; // @synthesize describeLabel=_describeLabel;
@property(retain, nonatomic) UIButton *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) ReadInjoyAsynImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) _Bool isNegFeedbackItemShow; // @synthesize isNegFeedbackItemShow=_isNegFeedbackItemShow;
@property(copy, nonatomic) CDUnknownBlockType totalViewAction; // @synthesize totalViewAction=_totalViewAction;
- (void).cxx_destruct;
- (double)getHeaderHeight;
- (double)getDescribeLabelHeight;
- (void)updateContainerViewFrame;
- (id)getVideoId;
- (id)videoView;
- (_Bool)shouldActiveFullScreen;
- (id)getVideoView;
- (id)getVideoStatusView;
- (unsigned long long)getAdvertMode;
- (_Bool)canDelayGetNick;
- (id)likeButton;
- (void)dismissBiuGuidanceAnimated:(_Bool)arg1;
- (void)showBiuGuidance;
- (void)showVideoInfo;
- (void)setVideoGravityMode:(id)arg1;
- (id)forwardButton;
- (id)rightBarButton;
- (id)getBarrageViewParent;
- (struct CGSize)getVideoSize;
- (void)onEndPlayVideo;
- (void)removeDelayChangeAction;
- (void)addDelayChangeAction;
- (void)pauseVideo;
- (void)stopVideo;
- (void)setFullScreen:(_Bool)arg1;
- (void)playVideo;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)onClickTotalView;
- (void)onFeedbackMaskViewTap;
- (void)onClickAdverPopupButton:(unsigned long long)arg1 andAdverKind:(int)arg2;
- (id)getAdvertisePopupItems;
- (void)onClickFeedBackBtn;
- (void)layoutBottomView;
- (void)layoutTopView;
- (void)layoutSubviews;
- (void)setCellModel:(id)arg1;
- (id)getContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

