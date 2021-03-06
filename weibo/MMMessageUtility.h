//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MMMessageUtility : NSObject
{
}

+ (void)forwardMessage:(id)arg1 toTargets:(id)arg2 from:(id)arg3;
+ (void)forwardMessage:(id)arg1 toTarget:(id)arg2;
+ (void)forwardMessageToTarget:(id)arg1 ownerId:(id)arg2 contentId:(id)arg3 comment:(id)arg4 pid:(id)arg5 localImgPath:(id)arg6 type:(int)arg7 subtype:(int)arg8;
+ (void)clearUploadImageDiscoveryInfoString;
+ (void)callThePhoneNumber:(id)arg1;
+ (id)clearPhoneNumber:(id)arg1;
+ (_Bool)isIPhone;
+ (void)sendNewMessageWithCoordinate:(struct CLLocationCoordinate2D)arg1 text:(id)arg2 inChat:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (void)resendImageMessage:(id)arg1;
+ (void)sendImageMessage:(id)arg1;
+ (id)messagesFromImages:(id)arg1 inChat:(id)arg2 uploadOriginalImage:(_Bool)arg3;
+ (void)createThumbnailImage:(id)arg1 OrgImage:(id)arg2 fileName:(id)arg3;
+ (id)parseAndPressImage:(id)arg1 imageQuality:(_Bool)arg2;
+ (id)processImages:(id)arg1 imageQuality:(_Bool)arg2;
+ (_Bool)validImageCache:(id)arg1;
+ (id)getImageFilename:(long long)arg1 imageNumber:(int)arg2;
+ (void)sendNewMessageWithText:(id)arg1 inChat:(id)arg2 forward:(_Bool)arg3 callBack:(CDUnknownBlockType)arg4;
+ (void)sendNewMessageWithText:(id)arg1 inChat:(id)arg2 callBack:(CDUnknownBlockType)arg3;
+ (void)sendMessage:(id)arg1 forward:(_Bool)arg2 callBack:(CDUnknownBlockType)arg3;
+ (void)setMessageFrom:(id)arg1 message:(id)arg2;
+ (id)fileMessageFromFilePath:(id)arg1 chat:(id)arg2;
+ (void)audioRecorderOverlayController:(id)arg1 didFinishWithLastSlice:(id)arg2 chat:(id)arg3 total:(int)arg4 chatInvisible:(_Bool)arg5 callBack:(CDUnknownBlockType)arg6;
+ (void)audioRecorderOverlayController:(id)arg1 didRecordSlice:(id)arg2 total:(int)arg3 chat:(id)arg4;
+ (id)audioSliceMessageFromSliceData:(id)arg1 total:(int)arg2 audioController:(id)arg3 chat:(id)arg4;
+ (void)sendStoryInfo:(id)arg1 forward:(_Bool)arg2 callBack:(CDUnknownBlockType)arg3;
+ (void)sendStoryInfo:(id)arg1 callBack:(CDUnknownBlockType)arg2;
+ (void)sendEmotionInfo:(id)arg1 inChat:(id)arg2 callBack:(CDUnknownBlockType)arg3;

@end

