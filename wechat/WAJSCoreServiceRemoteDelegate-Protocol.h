//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WAJSCoreServiceRemoteDelegate <NSObject>
- (void)remoteDomEvent:(NSString *)arg1 webViewID:(unsigned int)arg2;
- (void)remoteCallInterfaceResult:(NSString *)arg1 callID:(unsigned int)arg2;
- (void)remoteSetupContextWithConfigureJS:(NSString *)arg1 publibVersion:(unsigned int)arg2 publibMD5:(NSString *)arg3 threeJSMD5:(NSString *)arg4;
- (void)remoteEvaluateJavascript:(NSString *)arg1;
- (void)endDebug;
- (void)alterEndReason:(NSString *)arg1;
- (void)beginDebugWithRoomID:(NSString *)arg1 pkgInfo:(NSString *)arg2 channelType:(unsigned int)arg3 proxyPort:(unsigned int)arg4;
@end

