//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQCommonMsgUitl : NSObject
{
}

+ (id)getKeyWithConfessorUin:(id)arg1 topicId:(id)arg2;
+ (_Bool)shouldUpdateMsgStateInMsgTab:(id)arg1;
+ (_Bool)shouldCalculateUnreadCountForMessage:(id)arg1;
+ (_Bool)isMsg:(id)arg1 pieceOfLargeMsg:(id)arg2;
+ (id)baseFilterC2CMsgArray:(id)arg1;
+ (void)saveMsgArray:(id)arg1;
+ (long long)checkRemindTypeForMessages:(id)arg1 isOffLineMsg:(_Bool)arg2;

@end

