//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TBLiveQAPollingServerDelegate <NSObject>
- (void)requestPollingQAWithGameId:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (_Bool)isImplementPollingQA;
- (void)recieveCDNMessage:(id)arg1 requestResult:(_Bool)arg2 timeStamp:(long long)arg3 needContinuePolling:(_Bool)arg4;
@end

