//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, APSnapChatBurnRecord, NSArray, NSString;

@protocol APSnapChatMessageProxy <APDAOProtocol>
- (APDAOResult *)deleteAllBurnRecord;
- (APDAOResult *)deleteBurnRecordWithClientMsgIds:(NSArray *)arg1;
- (APDAOResult *)deleteBurnRecordWithClientMsgId:(NSString *)arg1;
- (APDAOResult *)deleteBurnRecordWithUserId:(NSString *)arg1 userType:(NSString *)arg2;
- (NSArray *)queryAllBurnRecord;
- (APSnapChatBurnRecord *)queryBurnRecordWithUserId:(NSString *)arg1 userType:(NSString *)arg2;
- (APDAOResult *)insertBurnRecordList:(NSArray *)arg1;
- (APDAOResult *)insertBurnRecord:(APSnapChatBurnRecord *)arg1;
@end

