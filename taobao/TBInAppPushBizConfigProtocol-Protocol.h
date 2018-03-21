//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol TBInAppPushBizConfigProtocol <NSObject>
- (NSArray *)disableOnViewControllers;
- (long long)pushStyle;
- (NSString *)mergedPushMessageTitle:(NSArray *)arg1;
- (NSString *)mergedPushMessageActionUrl;
- (NSString *)mergedPushMessageHeadUrl;
- (_Bool)needMergedPushMessage;
- (NSString *)bizId;

@optional
- (NSString *)mergedPushMessageSubTitle:(NSArray *)arg1;
- (_Bool)needDisable;
@end
