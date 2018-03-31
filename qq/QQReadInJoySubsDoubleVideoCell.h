//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQReadInJoySubsTableViewCell.h>

@class CAGradientLayer, MQZoneShadowBlurLabel, QQAvatarView, ReadInJoyChannelArticle, ReadInjoyAsynImageView, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol QQReadInJoySubsDoubleVideoCellDelegate;

@interface QQReadInJoySubsDoubleVideoCell : QQReadInJoySubsTableViewCell
{
    UITapGestureRecognizer *_firstGesture;
    UITapGestureRecognizer *_secondGesture;
    _Bool _needShowDivideLine;
    _Bool _needMainFeedsStyle;
    ReadInJoyChannelArticle *_articleInfo;
    id <QQReadInJoySubsDoubleVideoCellDelegate> _doubleVideoDelegate;
    ReadInJoyChannelArticle *_secondArticleInfo;
    UIView *_viewForFirstVideo;
    UIView *_viewForSecondVideo;
    ReadInjoyAsynImageView *_firstImgView;
    ReadInjoyAsynImageView *_secondImgView;
    UIView *_firstOuterView;
    UIView *_secondOuterView;
    UIImageView *_firstImageViewForCorner;
    UIImageView *_secondImageViewForCorner;
    UIImageView *_firstPlayView;
    UIImageView *_secondPlayView;
    CAGradientLayer *_firstGradLayer;
    CAGradientLayer *_secondGradLayer;
    UILabel *_firstTitleLabel;
    UILabel *_secondTitleLabel;
    UILabel *_firstPlayCountLabel;
    UILabel *_secondPlayCountLabel;
    MQZoneShadowBlurLabel *_firstPlayTimeLabel;
    MQZoneShadowBlurLabel *_secondPlayTimeLabel;
    QQAvatarView *_firstAvatar;
    QQAvatarView *_secondAvatar;
    UILabel *_firstAccountTitleLabel;
    UILabel *_secondAccountTitleLabel;
    UIView *_dividingLineView;
}

@property(retain, nonatomic) UIView *dividingLineView; // @synthesize dividingLineView=_dividingLineView;
@property(retain, nonatomic) UILabel *secondAccountTitleLabel; // @synthesize secondAccountTitleLabel=_secondAccountTitleLabel;
@property(retain, nonatomic) UILabel *firstAccountTitleLabel; // @synthesize firstAccountTitleLabel=_firstAccountTitleLabel;
@property(retain, nonatomic) QQAvatarView *secondAvatar; // @synthesize secondAvatar=_secondAvatar;
@property(retain, nonatomic) QQAvatarView *firstAvatar; // @synthesize firstAvatar=_firstAvatar;
@property(retain, nonatomic) MQZoneShadowBlurLabel *secondPlayTimeLabel; // @synthesize secondPlayTimeLabel=_secondPlayTimeLabel;
@property(retain, nonatomic) MQZoneShadowBlurLabel *firstPlayTimeLabel; // @synthesize firstPlayTimeLabel=_firstPlayTimeLabel;
@property(retain, nonatomic) UILabel *secondPlayCountLabel; // @synthesize secondPlayCountLabel=_secondPlayCountLabel;
@property(retain, nonatomic) UILabel *firstPlayCountLabel; // @synthesize firstPlayCountLabel=_firstPlayCountLabel;
@property(retain, nonatomic) UILabel *secondTitleLabel; // @synthesize secondTitleLabel=_secondTitleLabel;
@property(retain, nonatomic) UILabel *firstTitleLabel; // @synthesize firstTitleLabel=_firstTitleLabel;
@property(retain, nonatomic) CAGradientLayer *secondGradLayer; // @synthesize secondGradLayer=_secondGradLayer;
@property(retain, nonatomic) CAGradientLayer *firstGradLayer; // @synthesize firstGradLayer=_firstGradLayer;
@property(retain, nonatomic) UIImageView *secondPlayView; // @synthesize secondPlayView=_secondPlayView;
@property(retain, nonatomic) UIImageView *firstPlayView; // @synthesize firstPlayView=_firstPlayView;
@property(retain, nonatomic) UIImageView *secondImageViewForCorner; // @synthesize secondImageViewForCorner=_secondImageViewForCorner;
@property(retain, nonatomic) UIImageView *firstImageViewForCorner; // @synthesize firstImageViewForCorner=_firstImageViewForCorner;
@property(retain, nonatomic) UIView *secondOuterView; // @synthesize secondOuterView=_secondOuterView;
@property(retain, nonatomic) UIView *firstOuterView; // @synthesize firstOuterView=_firstOuterView;
@property(retain, nonatomic) ReadInjoyAsynImageView *secondImgView; // @synthesize secondImgView=_secondImgView;
@property(retain, nonatomic) ReadInjoyAsynImageView *firstImgView; // @synthesize firstImgView=_firstImgView;
@property(retain, nonatomic) UIView *viewForSecondVideo; // @synthesize viewForSecondVideo=_viewForSecondVideo;
@property(retain, nonatomic) UIView *viewForFirstVideo; // @synthesize viewForFirstVideo=_viewForFirstVideo;
@property(retain, nonatomic) ReadInJoyChannelArticle *secondArticleInfo; // @synthesize secondArticleInfo=_secondArticleInfo;
@property(nonatomic) _Bool needMainFeedsStyle; // @synthesize needMainFeedsStyle=_needMainFeedsStyle;
@property(nonatomic) _Bool needShowDivideLine; // @synthesize needShowDivideLine=_needShowDivideLine;
@property(nonatomic) __weak id <QQReadInJoySubsDoubleVideoCellDelegate> doubleVideoDelegate; // @synthesize doubleVideoDelegate=_doubleVideoDelegate;
@property(retain, nonatomic) ReadInJoyChannelArticle *articleInfo; // @synthesize articleInfo=_articleInfo;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)report8D33:(long long)arg1;
- (void)onImageClick:(id)arg1;
- (void)onAvatarClick:(id)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

