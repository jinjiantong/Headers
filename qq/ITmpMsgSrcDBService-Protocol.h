//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSString;

@protocol ITmpMsgSrcDBService <NSObject>
- (NSString *)getTmpMsgSrc:(NSString *)arg1;
- (int)getTmpMsgSrcType:(NSString *)arg1;
- (void)deleteTmpMsgSrcRecordWithUin:(NSString *)arg1;
- (void)insertTmpMsgSrcRecordWithUin:(NSString *)arg1 type:(int)arg2 src:(NSString *)arg3;
@end
