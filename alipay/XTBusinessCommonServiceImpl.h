//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "XTBusinessCommonService-Protocol.h"

@class NSString;

@interface XTBusinessCommonServiceImpl : NSObject <XTBusinessCommonService>
{
    _Bool _recvDeviceToken;
    NSString *_userId;
}

@property(nonatomic) _Bool recvDeviceToken; // @synthesize recvDeviceToken=_recvDeviceToken;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)manualCacheCleanExemptBusinessIds;
- (id)stringAtIndex:(unsigned long long)arg1 inArray:(id)arg2;
- (void)handleSdkLogNotification:(id)arg1;
- (void)applicationSendEventException:(id)arg1;
- (void)netReachabilityChanged:(id)arg1;
- (id)getConfigURLWithKey:(id)arg1 defaultValue:(id)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)onWillTerminate:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)onUnBindDeviceTokenWithUserID:(id)arg1;
- (void)onBindDeviceTokenWithUserID:(id)arg1;
- (void)bindDeiceTokenWithUserID:(id)arg1 isBind:(unsigned char)arg2;
- (void)startHome;
- (void)onDidExit:(id)arg1;
- (void)onLoginSuccess:(id)arg1;
- (void)SystemClockDidChange;
- (void)checkManualSpmId;
- (void)handleConfigNotification:(id)arg1;
- (void)start;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

