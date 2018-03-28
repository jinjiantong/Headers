//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TUnionABTestService-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface TUnionABTest : NSObject <TUnionABTestService>
{
    NSDictionary *_abtestConfig;
    NSString *_appKey;
    double _lastUpdate;
    double _isRequesting;
    NSArray *_tbpassDemainConfig;
}

+ (unsigned long long)initWithAppkey:(id)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSArray *tbpassDemainConfig; // @synthesize tbpassDemainConfig=_tbpassDemainConfig;
@property(nonatomic) double isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) double lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSDictionary *abtestConfig; // @synthesize abtestConfig=_abtestConfig;
- (void).cxx_destruct;
- (unsigned char)isTBPassUrl:(id)arg1;
- (unsigned long long)isLoginServiceOn;
- (unsigned long long)isJumpServiceOn;
- (id)getCookieStr;
- (void)requestConfigCenter;
- (id)buildRequestParams;
- (void)checkUpdateAndRequest;
- (void)runrunrun;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
