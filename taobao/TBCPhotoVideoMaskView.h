//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface TBCPhotoVideoMaskView : UIView
{
    CDUnknownBlockType _videoMaksViewCallback;
    UIImageView *_ivNormalPlay;
}

@property(retain, nonatomic) UIImageView *ivNormalPlay; // @synthesize ivNormalPlay=_ivNormalPlay;
@property(copy, nonatomic) CDUnknownBlockType videoMaksViewCallback; // @synthesize videoMaksViewCallback=_videoMaksViewCallback;
- (void).cxx_destruct;
- (void)tapAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
