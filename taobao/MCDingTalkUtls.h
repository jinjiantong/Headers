//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MCDingTalkUtls : NSObject
{
}

+ (id)doConvertEmotion:(id)arg1 text:(id)arg2 pattern:(id)arg3;
+ (id)transformToTaobaoEmotion:(id)arg1;
+ (id)transformToDingEmotion:(id)arg1;
+ (id)messageSummary:(id)arg1;
+ (long long)getMineUserId;
+ (id)getSessionIdByOtherId:(id)arg1;
+ (long long)getReceiveUserId:(id)arg1;
+ (id)getSessionDO:(id)arg1;

@end
