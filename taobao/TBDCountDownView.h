//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UILabel;

@interface TBDCountDownView : UIView
{
    _Bool _running;
    UILabel *_seeMoreView;
    UILabel *_colonFirstView;
    UILabel *_colonSecondView;
    UILabel *_timerHoursView;
    UILabel *_timerMinutesView;
    UILabel *_timerSecondsView;
    double _timerWidth;
    double _timerHeight;
    unsigned long long _startServerTime;
    unsigned long long _endServerTime;
    unsigned long long _currentServerTime;
    double _currentLocalStartTime;
    NSTimer *_clockTimer;
    struct TBDMargin _timerMargin;
    struct TBDMargin _colonMargin;
}

@property(retain, nonatomic) NSTimer *clockTimer; // @synthesize clockTimer=_clockTimer;
@property(nonatomic) double currentLocalStartTime; // @synthesize currentLocalStartTime=_currentLocalStartTime;
@property(readonly, nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic) unsigned long long currentServerTime; // @synthesize currentServerTime=_currentServerTime;
@property(nonatomic) unsigned long long endServerTime; // @synthesize endServerTime=_endServerTime;
@property(nonatomic) unsigned long long startServerTime; // @synthesize startServerTime=_startServerTime;
@property(nonatomic) double timerHeight; // @synthesize timerHeight=_timerHeight;
@property(nonatomic) double timerWidth; // @synthesize timerWidth=_timerWidth;
@property(nonatomic) struct TBDMargin colonMargin; // @synthesize colonMargin=_colonMargin;
@property(nonatomic) struct TBDMargin timerMargin; // @synthesize timerMargin=_timerMargin;
@property(retain, nonatomic) UILabel *timerSecondsView; // @synthesize timerSecondsView=_timerSecondsView;
@property(retain, nonatomic) UILabel *timerMinutesView; // @synthesize timerMinutesView=_timerMinutesView;
@property(retain, nonatomic) UILabel *timerHoursView; // @synthesize timerHoursView=_timerHoursView;
@property(retain, nonatomic) UILabel *colonSecondView; // @synthesize colonSecondView=_colonSecondView;
@property(retain, nonatomic) UILabel *colonFirstView; // @synthesize colonFirstView=_colonFirstView;
@property(retain, nonatomic) UILabel *seeMoreView; // @synthesize seeMoreView=_seeMoreView;
- (void).cxx_destruct;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)hiddenAllSubview;
- (void)shapeshifting:(_Bool)arg1;
- (void)setSeeMoreMargin:(struct TBDMargin)arg1;
- (void)updateMargin;
- (id)numberToTimeString:(unsigned long long)arg1;
- (void)showSeeMore;
- (void)setTime:(unsigned long long)arg1;
- (long long)timeOffset;
- (void)clockDidTick:(id)arg1;
- (void)reset;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)start;
- (void)run;
- (void)tb_initObserver;
- (void)tb_initView;
- (id)init;
- (void)dealloc;

@end
