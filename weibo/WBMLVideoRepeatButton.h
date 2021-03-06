//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, WBMLVideoGradientControl;

@interface WBMLVideoRepeatButton : UIControl
{
    NSString *_text;
    WBMLVideoGradientControl *_gradientControl;
}

@property(retain, nonatomic) WBMLVideoGradientControl *gradientControl; // @synthesize gradientControl=_gradientControl;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)startKeyAnimationForSingleTap;
- (void)startKeyAnimationForTapScale:(_Bool)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

