//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSRecursiveLock, OrangeConfigObj, OrangeSafeMutableDictionary;

@interface Orange : NSObject
{
    NSRecursiveLock *_recursiveLock;
    NSArray *_customHost;
    OrangeConfigObj *_config;
    OrangeSafeMutableDictionary *_keyMap;
}

+ (void)setCustomCandidate:(id)arg1 value:(id)arg2;
+ (id)getKeyMap;
+ (void)setOrangeBetaModeAccsHost:(id)arg1;
+ (void)setOrangeACKOnlineIPList:(id)arg1 debugIPList:(id)arg2 dailyIPList:(id)arg3;
+ (void)setOrangeDataCenterOnlineIPList:(id)arg1 debugIPList:(id)arg2 dailyIPList:(id)arg3;
+ (void)setOrangeAckReportOnlineHost:(id)arg1 debugHost:(id)arg2 dailyHost:(id)arg3;
+ (void)setOrangeDataCenterOnlineHost:(id)arg1 debugHost:(id)arg2 dailyHost:(id)arg3;
+ (void)setProbeModeOnlineHost:(id)arg1 debugHost:(id)arg2 dailyHost:(id)arg3;
+ (id)getGroupConfigByGroupName:(id)arg1 returnType:(unsigned long long)arg2;
+ (id)getGroupConfigByGroupName:(id)arg1;
+ (id)getGroupConfigWithGroupName:(id)arg1;
+ (id)getCustomGroupConfigByGroupName:(id)arg1;
+ (id)getConfigByGroupName:(id)arg1 key:(id)arg2 defaultConfig:(id)arg3 isDefault:(_Bool *)arg4;
+ (void)updateIndex;
+ (void)runMode:(long long)arg1;
+ (void)run;
+ (void)setCustomHosts:(id)arg1;
+ (id)getCurrentDeviceModel;
+ (id)shareInstance;
@property(retain, nonatomic) OrangeSafeMutableDictionary *keyMap; // @synthesize keyMap=_keyMap;
@property(retain, nonatomic) OrangeConfigObj *config; // @synthesize config=_config;
@property(retain, nonatomic) NSArray *customHost; // @synthesize customHost=_customHost;
@property(retain, nonatomic) NSRecursiveLock *recursiveLock; // @synthesize recursiveLock=_recursiveLock;
- (void).cxx_destruct;
- (CDUnknownBlockType)indexCallback;
- (id)init;

@end

