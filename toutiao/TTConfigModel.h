//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSDictionary, NSNumber, NSString;
@protocol Optional;

@interface TTConfigModel : JSONModel
{
    NSString<Optional> *_sendPolicy;
    NSNumber<Optional> *_sessionInterval;
    NSDictionary<Optional> *_hpStatSamplingRatio;
    NSDictionary<Optional> *_imageSamplingRatio;
    NSDictionary<Optional> *_imageErrorReport;
    NSArray<Optional> *_imageErrorCodes;
    NSArray<Optional> *_dnsReportList;
    NSNumber<Optional> *_dnsReportInterval;
    NSDictionary<Optional> *_apiReport;
    NSString<Optional> *_bdLocKey;
    NSNumber<Optional> *_allowKeepAlive;
    NSNumber<Optional> *_allowPushService;
    NSArray<Optional> *_allowPushList;
    NSArray<Optional> *_fingerPrintCodes;
    NSString<Optional> *_batchEventInterval;
    NSNumber<Optional> *_httpMonitorPort;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSNumber<Optional> *httpMonitorPort; // @synthesize httpMonitorPort=_httpMonitorPort;
@property(copy, nonatomic) NSString<Optional> *batchEventInterval; // @synthesize batchEventInterval=_batchEventInterval;
@property(copy, nonatomic) NSArray<Optional> *fingerPrintCodes; // @synthesize fingerPrintCodes=_fingerPrintCodes;
@property(copy, nonatomic) NSArray<Optional> *allowPushList; // @synthesize allowPushList=_allowPushList;
@property(retain, nonatomic) NSNumber<Optional> *allowPushService; // @synthesize allowPushService=_allowPushService;
@property(retain, nonatomic) NSNumber<Optional> *allowKeepAlive; // @synthesize allowKeepAlive=_allowKeepAlive;
@property(copy, nonatomic) NSString<Optional> *bdLocKey; // @synthesize bdLocKey=_bdLocKey;
@property(copy, nonatomic) NSDictionary<Optional> *apiReport; // @synthesize apiReport=_apiReport;
@property(retain, nonatomic) NSNumber<Optional> *dnsReportInterval; // @synthesize dnsReportInterval=_dnsReportInterval;
@property(copy, nonatomic) NSArray<Optional> *dnsReportList; // @synthesize dnsReportList=_dnsReportList;
@property(copy, nonatomic) NSArray<Optional> *imageErrorCodes; // @synthesize imageErrorCodes=_imageErrorCodes;
@property(copy, nonatomic) NSDictionary<Optional> *imageErrorReport; // @synthesize imageErrorReport=_imageErrorReport;
@property(copy, nonatomic) NSDictionary<Optional> *imageSamplingRatio; // @synthesize imageSamplingRatio=_imageSamplingRatio;
@property(copy, nonatomic) NSDictionary<Optional> *hpStatSamplingRatio; // @synthesize hpStatSamplingRatio=_hpStatSamplingRatio;
@property(retain, nonatomic) NSNumber<Optional> *sessionInterval; // @synthesize sessionInterval=_sessionInterval;
@property(copy, nonatomic) NSString<Optional> *sendPolicy; // @synthesize sendPolicy=_sendPolicy;
- (void).cxx_destruct;

@end
