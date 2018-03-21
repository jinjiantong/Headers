//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PubPublicApi : NSObject
{
}

+ (id)queryCCMessage:(id)arg1;
+ (void)clearCCMessage:(id)arg1 userId:(id)arg2;
+ (id)queryUnreadCCMessageList:(id)arg1 currCount:(id)arg2 count:(id)arg3;
+ (id)queryCCMessageList:(id)arg1 currCount:(id)arg2 count:(id)arg3;
+ (void)setCCMessageRead:(id)arg1 userId:(id)arg2;
+ (id)queryUnreadCCMessageCount:(id)arg1 userId:(id)arg2;
+ (id)queryFeedsMessageMidBiggerThanOrEqualTo:(id)arg1;
+ (void)updateFeedsMessageRead;
+ (void)updateMessagePosed:(id)arg1 idInfo:(id)arg2;
+ (void)updateUnreadStatusByOutdateDay:(long long)arg1;
+ (id)queryMessageWithBizID:(id)arg1;
+ (void)deleteMessageWithPublicID:(id)arg1 userId:(id)arg2 beforeTime:(long long)arg3;
+ (id)queryPublicMessage:(id)arg1 targetExtra:(id)arg2 currCount:(id)arg3 count:(id)arg4;
+ (void)deleteMessageWithBizID:(id)arg1;
+ (void)updateAllMessageToReadWithTarget:(id)arg1 userId:(id)arg2;
+ (void)deleteMessageWithMID:(id)arg1;
+ (void)deleteTargetIdMessage:(id)arg1 targetExtra:(id)arg2;
+ (id)queryAllTargetIdAbstractInfo:(id)arg1 userId:(id)arg2;
+ (id)queryUnreadChatMessageCount:(id)arg1 userId:(id)arg2;
+ (id)queryAbstractInfo:(id)arg1 userId:(id)arg2;
+ (id)queryLifeChat:(id)arg1 mId:(id)arg2 count:(id)arg3;
+ (id)queryPublicMessage:(id)arg1 targetExtra:(id)arg2 mId:(id)arg3 count:(id)arg4;
+ (void)updateMessageReadWithTargetId:(id)arg1 targetExtra:(id)arg2;
+ (void)updateMessageRead:(id)arg1;
+ (id)sendMessage:(id)arg1 appId:(id)arg2 userId:(id)arg3 mId:(id)arg4;
+ (void)removeNotifyMessageBlock:(id)arg1;
+ (void)registerWithNotifyMessageBlock:(id)arg1 appId:(id)arg2 userId:(id)arg3;

@end
