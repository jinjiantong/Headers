//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface NWOrangeConfiguration : NSObject
{
    _Bool _httpsSchemeValue;
    _Bool _cacheEnabledValue;
    _Bool _networkOffValue;
    _Bool _force2httpsValue;
    _Bool _httpsProxyEnabledValue;
    _Bool _cfnetworkHttpSwitch;
    _Bool _enableSniCFNetwork;
    _Bool _forceAmdcOldType;
    NSArray *_cfnetworkHttpBlacklist;
    NSArray *_useCfnetworkEcodes;
    long long _policyMaxExpireSecondsValue;
    NSMutableDictionary *_defaultValueDict;
    long long _detectHttpsMaxTimeout;
    long long _maxHttpSessionConcurrentCount;
    long long _processSpdyErrorType;
}

+ (id)sharedInstance;
@property(nonatomic) long long processSpdyErrorType; // @synthesize processSpdyErrorType=_processSpdyErrorType;
@property(nonatomic) long long maxHttpSessionConcurrentCount; // @synthesize maxHttpSessionConcurrentCount=_maxHttpSessionConcurrentCount;
@property(nonatomic) long long detectHttpsMaxTimeout; // @synthesize detectHttpsMaxTimeout=_detectHttpsMaxTimeout;
@property(retain, nonatomic) NSMutableDictionary *defaultValueDict; // @synthesize defaultValueDict=_defaultValueDict;
@property(nonatomic) long long policyMaxExpireSecondsValue; // @synthesize policyMaxExpireSecondsValue=_policyMaxExpireSecondsValue;
@property(retain, nonatomic) NSArray *useCfnetworkEcodes; // @synthesize useCfnetworkEcodes=_useCfnetworkEcodes;
@property(retain, nonatomic) NSArray *cfnetworkHttpBlacklist; // @synthesize cfnetworkHttpBlacklist=_cfnetworkHttpBlacklist;
@property(nonatomic) _Bool forceAmdcOldType; // @synthesize forceAmdcOldType=_forceAmdcOldType;
@property(nonatomic) _Bool enableSniCFNetwork; // @synthesize enableSniCFNetwork=_enableSniCFNetwork;
@property(nonatomic) _Bool cfnetworkHttpSwitch; // @synthesize cfnetworkHttpSwitch=_cfnetworkHttpSwitch;
@property(nonatomic) _Bool httpsProxyEnabledValue; // @synthesize httpsProxyEnabledValue=_httpsProxyEnabledValue;
@property(nonatomic) _Bool force2httpsValue; // @synthesize force2httpsValue=_force2httpsValue;
@property(nonatomic) _Bool networkOffValue; // @synthesize networkOffValue=_networkOffValue;
@property(nonatomic) _Bool cacheEnabledValue; // @synthesize cacheEnabledValue=_cacheEnabledValue;
@property(nonatomic) _Bool httpsSchemeValue; // @synthesize httpsSchemeValue=_httpsSchemeValue;
- (void).cxx_destruct;
- (id)parseContent:(id)arg1 withKey:(id)arg2;
- (long long)maxHttpSessionConcurrentOperationCount;
- (long long)policyMaxExpireSeconds;
- (_Bool)isAmdcForceOldType;
- (_Bool)isDispatch2CFNetworkWhenError:(id)arg1;
- (_Bool)isCFNetworkHttpEnabled:(id)arg1;
- (_Bool)isHttpsProxyEnabled;
- (_Bool)isSNICFNetworkEnabled;
- (_Bool)isForce2Https;
- (_Bool)isCacheEnabled;
- (_Bool)isNetworkOff;
- (_Bool)isAutoCompleteSchemeHttps;
- (void)updateNotification:(id)arg1;
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2;
- (long long)orangeIntegerValue:(id)arg1;
- (_Bool)orangeBoolValue:(id)arg1;
- (id)orangeValue:(id)arg1;
- (id)init;

@end

