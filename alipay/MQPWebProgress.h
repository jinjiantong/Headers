//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer;

@interface MQPWebProgress : UIView
{
    float _progress;
    UIView *_progressBarView;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)clearTimer;
- (void)handleTimer:(id)arg1;
- (void)stopProgress;
- (void)startProgress;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)configureViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

