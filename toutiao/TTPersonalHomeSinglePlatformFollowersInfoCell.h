//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SSThemedLabel, TTImageView, TTPersonalHomeSinglePlatformFollowersInfoViewModel;

@interface TTPersonalHomeSinglePlatformFollowersInfoCell : UICollectionViewCell
{
    TTPersonalHomeSinglePlatformFollowersInfoViewModel *_viewModel;
    SSThemedLabel *_followersCountLabel;
    SSThemedLabel *_appNameLabel;
    TTImageView *_appIconImageView;
}

@property(retain, nonatomic) TTImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
@property(retain, nonatomic) SSThemedLabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) SSThemedLabel *followersCountLabel; // @synthesize followersCountLabel=_followersCountLabel;
@property(retain, nonatomic) TTPersonalHomeSinglePlatformFollowersInfoViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refreshThemedColor;
- (void)bindRAC;
- (id)initWithFrame:(struct CGRect)arg1;

@end

