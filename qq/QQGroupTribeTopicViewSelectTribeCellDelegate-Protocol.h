//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, NSDictionary, QQGroupTribeTopicViewSelectTribeCell;

@protocol QQGroupTribeTopicViewSelectTribeCellDelegate <NSObject>
- (void)selectTribeCellDidClickSelectBtn;

@optional
- (void)selectTribeCellOnSelectTribeCancel:(QQGroupTribeTopicViewSelectTribeCell *)arg1;
- (void)selectTribeCell:(QQGroupTribeTopicViewSelectTribeCell *)arg1 onSelectTribeFinished:(NSArray *)arg2 newCondition:(NSDictionary *)arg3;
@end
