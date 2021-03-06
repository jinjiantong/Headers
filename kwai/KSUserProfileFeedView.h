//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAAnimationlessLayer, KSBaseFeed, KSImageAsset, KSPopularCell, UIImageView;

@interface KSUserProfileFeedView : UIView
{
    UIImageView *_imageView;
    UIImageView *_liveIcon;
    UIImageView *_photoTypeIcon;
    UIImageView *_extraInfoIcon;
    CAAnimationlessLayer *_unpublishableIcon;
    KSPopularCell *_popularCell;
    KSBaseFeed *_feed;
    KSImageAsset *_imageAsset;
}

@property(retain, nonatomic) KSImageAsset *imageAsset; // @synthesize imageAsset=_imageAsset;
@property(retain, nonatomic) KSBaseFeed *feed; // @synthesize feed=_feed;
@property(retain, nonatomic) KSPopularCell *popularCell; // @synthesize popularCell=_popularCell;
@property(retain, nonatomic) CAAnimationlessLayer *unpublishableIcon; // @synthesize unpublishableIcon=_unpublishableIcon;
@property(retain, nonatomic) UIImageView *extraInfoIcon; // @synthesize extraInfoIcon=_extraInfoIcon;
@property(retain, nonatomic) UIImageView *photoTypeIcon; // @synthesize photoTypeIcon=_photoTypeIcon;
@property(retain, nonatomic) UIImageView *liveIcon; // @synthesize liveIcon=_liveIcon;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)loadImageAsset;
- (void)reset;
- (void)renderWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

