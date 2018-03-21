//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQStoryFeedBaseUserCell.h>

#import <QQMainProject/QQStoryFeedHeaderInfoViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, QQStoryUrlImageView, UILabel;

@interface QQStoryBannerCell : QQStoryFeedBaseUserCell <QQStoryFeedHeaderInfoViewDelegate>
{
    NSLayoutConstraint *bannerImageHeightLayout;
    NSLayoutConstraint *accessoryLabelMarginTopLayout;
    QQStoryUrlImageView *_bannerImageView;
    UILabel *_contentLabel;
}

+ (double)getFeedCellHeight:(id)arg1 pageSource:(unsigned long long)arg2;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) QQStoryUrlImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
- (void)contentLabelTapGesture:(id)arg1;
- (void)bannerImageViewTapGesture:(id)arg1;
- (void)storyFeedHeaderInfoView:(id)arg1 didUserNameLabelTapGesture:(id)arg2;
- (void)storyFeedHeaderInfoView:(id)arg1 didUserCoverTouchUpInside:(id)arg2;
- (void)storyFeedHeaderInfoView:(id)arg1 didFollowButtonTouchUpInside:(id)arg2;
- (void)jumpToBannerSchema;
- (void)setStoryFeed:(id)arg1;
- (void)updateSubviewFrame;
- (void)setupContentLabel;
- (void)setupBannerImageView;
- (void)setup;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
