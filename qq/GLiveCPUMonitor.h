//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSRunLoop, NSThread, NSTimer;

@interface GLiveCPUMonitor : NSObject
{
    _Bool _isRunning;
    NSRunLoop *_timerRunloop;
    NSTimer *_timer;
    double _cpuThresholdInPercent;
    double _monitorIntervalInSecond;
    unsigned long long _maxMonitorContinue;
    unsigned long long _totalOverThresholdCnts;
    unsigned long long _cpuNormalLevelCounter;
    unsigned long long _monitorCountSpan;
    NSThread *_timerThread;
    unsigned long long _level1AlarmCount;
    unsigned long long _level2AlarmCount;
    unsigned long long _level3AlarmCount;
}

+ (id)shareInstance;

@end

