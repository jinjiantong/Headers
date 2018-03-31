//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AliHASmartCPUExceptionInfo, AliHASmartCPUInfo, NSDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AliHASmartCPUExceptionMonitor : NSObject
{
    _Bool _enableContextLog;
    _Bool _enableNSLog;
    _Bool _isMonitor;
    _Bool _needUploadException;
    unsigned int _monitorThread_t;
    float _current_aver_usage;
    float _current_sample_count;
    float _uploadToServerRate;
    id _context;
    NSDictionary *_monitorParameters;
    double _monitorInterval;
    double _cpuExceptionReportDuration;
    double _beginCalcAfterTouchInterval;
    double _cpuExceptionRate;
    NSObject<OS_dispatch_source> *_gcdTimer;
    double _beginCalcCpuTime;
    double _beginExceptionTime;
    AliHASmartCPUInfo *_cpuInfo;
    AliHASmartCPUExceptionInfo *_cpuExceptionInfo;
    NSString *_lastBackTraceHash;
    double _lastUploadTime;
    NSString *_reportExceptionType;
    NSObject<OS_dispatch_queue> *_monitorQueue;
    NSMutableArray *_uploadedThreadIdList;
}

@property(nonatomic) float uploadToServerRate; // @synthesize uploadToServerRate=_uploadToServerRate;
@property(nonatomic) float current_sample_count; // @synthesize current_sample_count=_current_sample_count;
@property(nonatomic) float current_aver_usage; // @synthesize current_aver_usage=_current_aver_usage;
@property(retain, nonatomic) NSMutableArray *uploadedThreadIdList; // @synthesize uploadedThreadIdList=_uploadedThreadIdList;
@property(nonatomic) unsigned int monitorThread_t; // @synthesize monitorThread_t=_monitorThread_t;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue; // @synthesize monitorQueue=_monitorQueue;
@property(copy, nonatomic) NSString *reportExceptionType; // @synthesize reportExceptionType=_reportExceptionType;
@property(nonatomic) double lastUploadTime; // @synthesize lastUploadTime=_lastUploadTime;
@property(copy, nonatomic) NSString *lastBackTraceHash; // @synthesize lastBackTraceHash=_lastBackTraceHash;
@property(nonatomic) _Bool needUploadException; // @synthesize needUploadException=_needUploadException;
@property(retain, nonatomic) AliHASmartCPUExceptionInfo *cpuExceptionInfo; // @synthesize cpuExceptionInfo=_cpuExceptionInfo;
@property(retain, nonatomic) AliHASmartCPUInfo *cpuInfo; // @synthesize cpuInfo=_cpuInfo;
@property(nonatomic) double beginExceptionTime; // @synthesize beginExceptionTime=_beginExceptionTime;
@property(nonatomic) double beginCalcCpuTime; // @synthesize beginCalcCpuTime=_beginCalcCpuTime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *gcdTimer; // @synthesize gcdTimer=_gcdTimer;
@property(nonatomic) _Bool isMonitor; // @synthesize isMonitor=_isMonitor;
@property(nonatomic) double cpuExceptionRate; // @synthesize cpuExceptionRate=_cpuExceptionRate;
@property(nonatomic) double beginCalcAfterTouchInterval; // @synthesize beginCalcAfterTouchInterval=_beginCalcAfterTouchInterval;
@property(nonatomic) double cpuExceptionReportDuration; // @synthesize cpuExceptionReportDuration=_cpuExceptionReportDuration;
@property(nonatomic) double monitorInterval; // @synthesize monitorInterval=_monitorInterval;
@property(copy, nonatomic) NSDictionary *monitorParameters; // @synthesize monitorParameters=_monitorParameters;
@property(nonatomic) _Bool enableNSLog; // @synthesize enableNSLog=_enableNSLog;
@property(nonatomic) _Bool enableContextLog; // @synthesize enableContextLog=_enableContextLog;
@property(nonatomic) __weak id context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)cpuUsageWithApp;
- (float)_handleThreadBasicInfo:(struct thread_basic_info *)arg1 isFirstQuery:(_Bool)arg2 thread_index:(int)arg3 thread_id:(unsigned int)arg4;
- (void)analyzeCpuInfo;
- (void)stopMonitor;
- (void)startMonitor;
- (void)sampleLogic;
- (void)getCPUExceptionInfo:(id)arg1;
- (void)uploadCurrentExceptionInfo;
- (_Bool)isBackTraceRepeat:(id)arg1;
- (void)onEventTouch;
- (_Bool)canUploadToServer;
- (id)init;
- (void)reportException:(id)arg1 summary:(id)arg2 stack:(id)arg3;
- (void)log:(id)arg1;

@end

