//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol NetCoreDelegate <NSObject>
- (void)dispatchRequestResult:(NSDictionary *)arg1;
- (NSDictionary *)handleQuicLogWithRid:(long long)arg1;
- (void)pushDidForTestPush:(NSString *)arg1;
- (void)tokenExpired:(int)arg1;
- (void)reportLogInfo:(NSDictionary *)arg1;
- (void)recivedPushMessage:(NSString *)arg1;
@end

