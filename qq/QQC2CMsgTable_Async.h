//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQC2CMsgTable.h>

@interface QQC2CMsgTable_Async : QQC2CMsgTable
{
}

- (int)asyncGetQQMessageWithUin:(id)arg1 msgId:(int)arg2 userData:(id)arg3 callback:(id)arg4;
- (int)asyncDeleteMessage:(id)arg1 userdata:(id)arg2 callback:(id)arg3;
- (void)asyncGetC2CAndTempMsgWithTargetUin:(id)arg1 withTypes:(id)arg2 beforeOrEqualTime:(long long)arg3 limitCount:(unsigned int)arg4 userdata:(id)arg5 callback:(id)arg6;
- (void)asyncGetC2CMsgWithTargetUin:(id)arg1 withTypes:(id)arg2 beforeOrEqualTime:(long long)arg3 limitCount:(unsigned int)arg4 userdata:(id)arg5 callback:(id)arg6;
- (int)asyncQQFriendMessage:(id)arg1 MsgID:(long long)arg2 msgCount:(long long)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncUpdateC2CRichMsgState:(int)arg1 msgTime:(int)arg2 state:(int)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncUpdatePlaceholderFileMsg:(int)arg1 content:(id)arg2 userdata:(id)arg3 callback:(id)arg4;
- (int)asyncTransferOnlineFileToOffline:(int)arg1 newContent:(id)arg2 userdata:(id)arg3 callback:(id)arg4;
- (int)asyncGetOnlineFileMsg:(id)arg1 fileId:(unsigned int)arg2 time:(int)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncGetOnlineFileMsg:(id)arg1 fileId:(unsigned int)arg2 userdata:(id)arg3 callback:(id)arg4;
- (int)asyncUpdateOnlineFileStateWithTime:(int)arg1 fromUin:(id)arg2 fileId:(unsigned int)arg3 newState:(int)arg4 userdata:(id)arg5 callback:(id)arg6;
- (int)asyncUpdateOnlineFileState:(id)arg1 fileId:(unsigned int)arg2 newState:(int)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncDeleteMsgWithUin:(id)arg1 msgID:(int)arg2 userdata:(id)arg3 callback:(id)arg4;
- (int)asyncGetC2CRichMsg:(id)arg1 beginTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncUpOfflineFileMsg:(id)arg1 uuid:(id)arg2 forContent:(id)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncUpOfflineFileMsg:(id)arg1 uuid:(id)arg2 forRead:(int)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncUpOfflineFileMsg:(id)arg1 time:(int)arg2 forRead:(int)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncUpOffLineFileMsg:(id)arg1 time:(long long)arg2 forRead:(int)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncUpOffLineFileMsg:(id)arg1 msgId:(int)arg2 forRead:(int)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncGetVoiceModelList:(id)arg1 msgId:(id)arg2 userdata:(id)arg3 callback:(id)arg4;
- (int)asyncSetQQFailStateWithUUid:(id)arg1 userdata:(id)arg2 callback:(id)arg3;
- (int)asyncUpVideMsg:(double)arg1 read:(int)arg2 content:(id)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncQQRomaMessageWinUin:(id)arg1 startTime:(unsigned long long)arg2 pageSize:(unsigned long long)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncQQMessageWithUinAsc:(id)arg1 pagesize:(unsigned long long)arg2 page:(unsigned long long)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncDeleteQQMessageWithUin:(id)arg1 FromTime:(int)arg2 toTime:(int)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncSystemMessages:(unsigned long long)arg1 userdata:(id)arg2 callback:(id)arg3;
- (int)asyncDeleteMsgsWithUin:(id)arg1 userdata:(id)arg2 callback:(id)arg3;
- (int)asyncDeleteMsgWithContentArr:(id)arg1:(id)arg2 userdata:(id)arg3 callback:(id)arg4;

@end
