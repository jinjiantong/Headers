//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, ZCConfigUpdateStatus, ZCCustomsConfig, ZCPackageConfig, ZCPrefixesConfig, ZCacheCommonConfig;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ZCConfigManager : NSObject
{
    _Bool _hasWindVane;
    _Bool _openUpdateService;
    _Bool _timerActived;
    ZCacheCommonConfig *_defaultCommonConfig;
    ZCacheCommonConfig *_commonConfig;
    ZCPackageConfig *_packageConfig;
    NSDictionary *_zcacheMap;
    ZCPrefixesConfig *_prefixesConfig;
    ZCCustomsConfig *_customsConfig;
    double _initTime;
    double _activeTime;
    double _updateTime;
    NSObject<OS_dispatch_queue> *_queue;
    ZCConfigUpdateStatus *_updatingConfig;
    ZCConfigUpdateStatus *_nextConfig;
    NSObject<OS_dispatch_source> *_timer;
}

+ (void)resetCustomsConfig;
+ (id)customsConfig;
+ (id)findAppName:(id)arg1;
+ (_Bool)isValidAppName:(id)arg1;
+ (void)updatePrefixWithURL:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (id)prefixesConfig;
+ (void)updatePackageConfigSync:(CDUnknownBlockType)arg1;
+ (void)updatePackageConfig:(CDUnknownBlockType)arg1;
+ (id)zcacheMap;
+ (id)packageConfig;
+ (id)commonConfig;
+ (id)defaultCommonConfig;
+ (void)resetAllConfig:(_Bool)arg1;
+ (_Bool)checkAllowUpdateConfig;
+ (void)updateWithMessage:(id)arg1;
+ (void)forceUpdate;
+ (void)update;
+ (double)activeTime;
+ (double)initTime;
+ (void)setup;
+ (id)sharedInstance;
+ (long long)serverIntervalToLocal:(long long)arg1;
+ (void)timeRectifying:(id)arg1 startTime:(double)arg2;
+ (void)checkConfig:(id)arg1 withURL:(id)arg2 checkVersion:(_Bool)arg3 withCallback:(CDUnknownBlockType)arg4;
+ (void)downloadConfig:(id)arg1 checkVersion:(_Bool)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (id)getValidABT:(id)arg1;
+ (id)getConfigTarget;
+ (id)getEncodedAppVersion;
+ (id)getConfigURL:(long long)arg1 withVersion:(id)arg2 withNextVersion:(id)arg3;
+ (void)downloadConfig:(long long)arg1 withVersion:(id)arg2 withNextVersion:(id)arg3 checkVersion:(_Bool)arg4 withCallback:(CDUnknownBlockType)arg5;
+ (id)mtopServiceInstance;
@property(nonatomic) _Bool timerActived; // @synthesize timerActived=_timerActived;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool openUpdateService; // @synthesize openUpdateService=_openUpdateService;
@property(nonatomic) _Bool hasWindVane; // @synthesize hasWindVane=_hasWindVane;
@property(retain, nonatomic) ZCConfigUpdateStatus *nextConfig; // @synthesize nextConfig=_nextConfig;
@property(retain, nonatomic) ZCConfigUpdateStatus *updatingConfig; // @synthesize updatingConfig=_updatingConfig;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) double updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) double activeTime; // @synthesize activeTime=_activeTime;
@property(nonatomic) double initTime; // @synthesize initTime=_initTime;
@property(retain) ZCCustomsConfig *customsConfig; // @synthesize customsConfig=_customsConfig;
@property(retain) ZCPrefixesConfig *prefixesConfig; // @synthesize prefixesConfig=_prefixesConfig;
@property(copy) NSDictionary *zcacheMap; // @synthesize zcacheMap=_zcacheMap;
@property(retain) ZCPackageConfig *packageConfig; // @synthesize packageConfig=_packageConfig;
@property(retain) ZCacheCommonConfig *commonConfig; // @synthesize commonConfig=_commonConfig;
@property(retain, nonatomic) ZCacheCommonConfig *defaultCommonConfig; // @synthesize defaultCommonConfig=_defaultCommonConfig;
- (void).cxx_destruct;
- (void)updateCustomsConfig;
- (void)readCustomsConfig;
- (unsigned long long)mergePrefixConfigUnsafe:(id)arg1 needSave:(_Bool)arg2 withError:(id *)arg3;
- (void)updatePrefixesConfig;
- (void)readPrefixesConfig;
- (void)updatePackageConfigUnsafe:(CDUnknownBlockType)arg1;
- (unsigned long long)mergePackageConfigUnsafe:(id)arg1 needSave:(_Bool)arg2;
- (void)updatePackageConfig;
- (void)readPackageConfig;
- (void)updateCommonConfig;
- (void)readCommonConfig;
- (void)checkConfigUpdateAllFinished;
- (void)configUpdateFinished:(id)arg1 toVersion:(id)arg2 withUpdateCount:(unsigned long long)arg3 withTime:(double)arg4 withError:(id)arg5;
- (_Bool)compareConfig:(id)arg1 withVersion:(id *)arg2 withNextVersion:(id *)arg3;
- (void)updateConfig:(id)arg1 withType:(long long)arg2 withConfigUpdateCallback:(CDUnknownBlockType)arg3;
- (void)updateNewPackageConfig:(id)arg1;
- (void)updateWithStatus:(id)arg1;
- (void)decreaseUpdateTime;
- (void)update:(long long)arg1;
- (void)updateConfigWithEntry:(id)arg1 from:(long long)arg2;
- (void)didWindVaneEntryConfigUpdated:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)dealloc;
- (void)setup;
- (id)init;

@end

