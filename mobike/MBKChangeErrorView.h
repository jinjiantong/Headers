//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKIDBaseAlertView.h"

@class TTTAttributedLabel, UIButton, UIImageView;

@interface MBKChangeErrorView : MBKIDBaseAlertView
{
    UIImageView *_titleImageView;
    TTTAttributedLabel *_titleLabel;
    UIButton *_sureButton;
}

@property(retain, nonatomic) UIButton *sureButton; // @synthesize sureButton=_sureButton;
@property(retain, nonatomic) TTTAttributedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
- (void).cxx_destruct;
- (void)setTitleLabelString:(id)arg1;
- (void)sureButtonClicked:(id)arg1;
- (void)resetHeight;
- (void)initSureButton;
- (void)inititleLabel;
- (void)initTitleImageView;
- (void)initBackView;
- (void)updateText;
- (id)initWithFrame:(struct CGRect)arg1;

@end

