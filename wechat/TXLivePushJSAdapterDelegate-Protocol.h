//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIImage;

@protocol TXLivePushJSAdapterDelegate <NSObject>

@optional
- (void)onInsertLogView:(unsigned int)arg1;
- (void)onPusherDidTakeSnapshot:(UIImage *)arg1 pusherId:(unsigned int)arg2;
- (void)onPushNetStatus:(NSDictionary *)arg1 pusherId:(unsigned int)arg2;
- (void)onPushEvent:(int)arg1 evtMsg:(NSString *)arg2 pusherId:(unsigned int)arg3 param:(NSDictionary *)arg4;
@end
