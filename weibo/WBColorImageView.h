//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIColor, UIView;

@interface WBColorImageView : UIImageView
{
    UIColor *_commonBackgroundColor;
    UIColor *_highLightBackgroundColor;
    UIView *_topLineView;
    UIView *_bottomLineView;
}

@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIColor *commonBackgroundColor; // @synthesize commonBackgroundColor=_commonBackgroundColor;
@property(retain, nonatomic) UIColor *highLightBackgroundColor; // @synthesize highLightBackgroundColor=_highLightBackgroundColor;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1 boolOwn:(_Bool)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;

@end

