//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DeviceFileTransfer : NSObject
{
}

+ (void)GenCookie:(unsigned long long *)arg1;
+ (void)Cancel:(unsigned long long)arg1;
+ (void)SendFileTo:(unsigned long long)arg1 filePath:(id)arg2 customBuff:(id)arg3 bussinessName:(id)arg4 cookie:(unsigned long long *)arg5 delegate:(id)arg6;
+ (void)DownloadFileFTN:(id)arg1 cookie:(unsigned long long *)arg2 delegate:(id)arg3;
+ (void)UploadFileFTN:(id)arg1 cookie:(unsigned long long *)arg2 delegate:(id)arg3;
+ (id)getInstance;
- (void)handleSendCSResult:(id)arg1;
- (void)handleSendCCResult:(id)arg1;
- (void)handleRecvMsg:(id)arg1;
- (id)init;

@end
