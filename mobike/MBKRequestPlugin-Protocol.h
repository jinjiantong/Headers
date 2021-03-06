//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MBKRequest, MBKResponse, NSData;

@protocol MBKRequestPlugin <NSObject>

@optional
- (void)requestWillReceiveResponse:(MBKRequest *)arg1 response:(MBKResponse *)arg2;
- (void)requestWillSerializeData:(MBKRequest *)arg1 data:(NSData *)arg2;
- (void)requestWillCancel:(MBKRequest *)arg1;
- (void)requestWillStart:(MBKRequest *)arg1;
@end

