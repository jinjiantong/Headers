//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol QAVRoomMultiDelegate <NSObject>
- (void)onEndpointVideoInUpdate:(NSArray *)arg1;
- (void)onEndpointUpdate:(int)arg1 identifier:(NSString *)arg2;
- (void)onCancelAllviewComplete:(int)arg1 WithErrinfo:(NSString *)arg2;
- (void)onRequestViewListComplete:(int)arg1 WithErrinfo:(NSString *)arg2;
@end

