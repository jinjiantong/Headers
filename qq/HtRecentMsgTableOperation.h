//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQRecentMsgTableOperation.h>

@interface HtRecentMsgTableOperation : QQRecentMsgTableOperation
{
}

- (id)commonC2CMsgFromQueryResult:(id)arg1;
- (id)getMsgWithUin:(id)arg1 adId:(id)arg2 inDb:(id)arg3;
- (void)insertRecentMsg:(id)arg1 exMsgId:(int)arg2 inDb:(id)arg3;
- (void)deleteMsgsWithUin:(id)arg1 adId:(id)arg2 inDb:(id)arg3;
- (id)loadAllHonestTalkingMsg:(id)arg1;
- (id)getCreateTableSql:(id)arg1;
- (unsigned long long)getTableSign;

@end

