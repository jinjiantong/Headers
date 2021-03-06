//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MQPPaySession, MQPResult, NSDictionary, NSString;

@protocol MQPPaysGatewayDelegate <NSObject>
- (void)payWapPayWithUrl:(NSString *)arg1 cookie:(NSString *)arg2;
- (void)closeSession:(MQPPaySession *)arg1 withResult:(MQPResult *)arg2;

@optional
- (void)startSession:(MQPPaySession *)arg1 withOrder:(NSString *)arg2;
- (void)resumePaySession:(id)arg1;
- (void)pausePaySession:(id)arg1;
- (void)payCallAlipay:(NSDictionary *)arg1;
@end

