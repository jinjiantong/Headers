//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSString, QQReceiveWormhole, QQWormholeMessage;

@protocol QQReceiveWormholeDelegate
- (void)wormhole:(QQReceiveWormhole *)arg1 didReceiveMessage:(QQWormholeMessage *)arg2;
- (void)wormhole:(QQReceiveWormhole *)arg1 fileMessage:(QQWormholeMessage *)arg2 receiveCompleteWithSavePath:(NSString *)arg3 error:(NSError *)arg4;
- (void)wormhole:(QQReceiveWormhole *)arg1 fileMessage:(QQWormholeMessage *)arg2 receiveProgressWithCurrentLength:(unsigned long long)arg3 totalLength:(unsigned long long)arg4 speed:(unsigned long long)arg5;
- (_Bool)wormhole:(QQReceiveWormhole *)arg1 didReceiveFileMessage:(QQWormholeMessage *)arg2;
@end
