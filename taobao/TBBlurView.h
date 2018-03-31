//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImage, UIImageView, UIVisualEffectView;

@interface TBBlurView : UIView
{
    UIColor *_blurTintColor;
    UIImage *_backgroundImage;
    long long _blurStyle;
    UIVisualEffectView *_effectView;
    UIImageView *_backgroundImageView;
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) long long blurStyle; // @synthesize blurStyle=_blurStyle;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIColor *blurTintColor; // @synthesize blurTintColor=_blurTintColor;
- (void).cxx_destruct;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setup;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

