//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface QQOriginPictureUploadManager : NSObject <UIAlertViewDelegate>
{
    int _currentNetWorkStatus;
    _Bool _isNetChangePaused;
    NSMutableDictionary *_uuidToMsgModel;
    NSMutableDictionary *_shortVideoMd5ToMsgModel;
    NSMutableDictionary *_shortVideoUuidToMsgModel;
    NSMutableDictionary *_tinyVideoMd5MsgModel;
    NSMutableDictionary *_tinyVideoUuidToMsgModel;
    NSMutableDictionary *_ptvMd5ToMsgModel;
    NSMutableDictionary *_ptvUuidToMsgModel;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *ptvUuidToMsgModel; // @synthesize ptvUuidToMsgModel=_ptvUuidToMsgModel;
@property(retain, nonatomic) NSMutableDictionary *ptvMd5ToMsgModel; // @synthesize ptvMd5ToMsgModel=_ptvMd5ToMsgModel;
- (void).cxx_destruct;
- (void)removeVideoDownloadTask:(id)arg1 businessType:(unsigned long long)arg2;
- (void)addVideoDownloadTask:(id)arg1;
- (void)removeVideoUploadTask:(id)arg1 businessType:(unsigned long long)arg2;
- (void)addVideoUploadTask:(id)arg1;
- (void)updateState:(id)arg1;
- (void)handleImageTransferStateNotification:(id)arg1;
- (void)handleImageTransferProgressNotification:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)continueAll;
- (void)cleanAllVideo;
- (void)saveAllAndClean;
- (void)networkTypeChange:(int)arg1;
- (void)resumePTVTransfer;
- (void)resumeTinyVideoTransfer;
- (void)pauseAllShortVideoDownload;
- (void)resumeShortVideoUpload;
- (void)pauseAllShortVideoUpload;
- (void)pauseAll;
- (void)showNetWorkTypeChangeAlert:(int)arg1;
- (void)taskFail:(id)arg1;
- (void)taskFinish:(id)arg1;
- (void)removeUploadTask:(id)arg1;
- (void)addUploadTask:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
