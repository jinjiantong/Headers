//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface QQBlueReporter : NSObject
{
    _Bool _reportToVipChannel;
    unsigned int _ioThreshold;
    unsigned int _wifiThreshold;
    unsigned int _xgThreshold;
    unsigned int _cpuThreshold;
    NSMutableArray *_resourceData;
    long long _threadCount;
    long long _locatingDuration;
    double _statisticDuration;
    NSString *_vcName;
}

+ (id)formatedSocketExData:(id)arg1 type:(int)arg2;
+ (id)getDrawData:(id)arg1;
+ (id)getMemoryData:(id)arg1;
+ (id)getSocketData:(id)arg1;
+ (id)getIOData:(id)arg1;
+ (id)getAppState;
+ (void)setAppState:(long long)arg1;
@property(retain) NSString *vcName; // @synthesize vcName=_vcName;
@property(nonatomic) double statisticDuration; // @synthesize statisticDuration=_statisticDuration;
@property(nonatomic) long long locatingDuration; // @synthesize locatingDuration=_locatingDuration;
@property(nonatomic) long long threadCount; // @synthesize threadCount=_threadCount;
@property(retain, nonatomic) NSMutableArray *resourceData; // @synthesize resourceData=_resourceData;
@property(nonatomic) _Bool reportToVipChannel; // @synthesize reportToVipChannel=_reportToVipChannel;
@property(nonatomic) unsigned int cpuThreshold; // @synthesize cpuThreshold=_cpuThreshold;
@property(nonatomic) unsigned int xgThreshold; // @synthesize xgThreshold=_xgThreshold;
@property(nonatomic) unsigned int wifiThreshold; // @synthesize wifiThreshold=_wifiThreshold;
@property(nonatomic) unsigned int ioThreshold; // @synthesize ioThreshold=_ioThreshold;
- (void)addResourceData:(id)arg1;
- (id)packResourceData;
- (void)logSth;
- (void)addDataPerMinute;
- (void)setLocationData:(id)arg1;
- (void)resetTempData;
- (void)setThreadData:(id)arg1;
- (void)setCpuExData:(id)arg1;
- (void)setIoExData:(id)arg1;
- (void)setSocketExData:(id)arg1;
- (void)uploadResourceData:(id)arg1;
- (id)transSingleResourceDataToAPMFormat:(id)arg1;
- (void)processLocatingData:(id)arg1;
- (id)processCpuData:(id)arg1;
- (id)getCurrentVC;
- (void)dealloc;
- (void)onVcChange:(id)arg1;
- (id)init;

@end
