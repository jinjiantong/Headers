//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBaseEngine.h>

@interface QBossEngine : QZBaseEngine
{
}

+ (void)feedBackInfo:(id)arg1 operType:(long long)arg2 operSource:(long long)arg3 userID:(id)arg4 operTimes:(int)arg5;
+ (void)feedBackInfo:(id)arg1 operType:(long long)arg2 operSource:(long long)arg3 userID:(id)arg4;
+ (id)instance;
- (void)getAdv:(long long)arg1 appid:(int)arg2 iReqFlag:(int)arg3 key:(id)arg4 advCnt:(int)arg5 advid:(int)arg6 iPullAsExposeOper:(int)arg7 complete:(CDUnknownBlockType)arg8;
- (void)getAdv:(long long)arg1 appid:(int)arg2 iReqFlag:(int)arg3 key:(id)arg4 advCnt:(int)arg5 advid:(int)arg6 iPullAsExposeOper:(int)arg7 withDone:(CDUnknownBlockType)arg8;
- (long long)getAdv:(long long)arg1 appids:(id)arg2 iReqFlag:(int)arg3 keys:(id)arg4 advCnts:(id)arg5 advids:(id)arg6 iPullAsExposeOper:(int)arg7;
- (long long)getAdv:(long long)arg1 appid:(int)arg2 iReqFlag:(int)arg3 key:(id)arg4 advCnt:(int)arg5 advid:(int)arg6 iPullAsExposeOper:(int)arg7;

@end

