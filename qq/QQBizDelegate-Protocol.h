//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSDictionary, NSInvocation, Protocol;

@protocol QQBizDelegate <NSObject>
- (void)invoke:(NSInvocation *)arg1 forProtocol:(Protocol *)arg2;
- (NSDictionary *)doRequest:(NSDictionary *)arg1;

@optional
- (_Bool)isPassViewSHow;
- (_Bool)isLogin;
@end

