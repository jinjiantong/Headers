//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>
#import <QQMainProject/ISCBusinessCallback-Protocol.h>
#import <QQMainProject/ISCListenerCallback-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface QQAvatarPendantDIYManager : NSObject <IEngineDispatchDelegate, ISCListenerCallback, ISCBusinessCallback>
{
    NSObject<OS_dispatch_queue> *pendantDIYQueue;
    NSMutableDictionary *_diyInfoDic;
    NSMutableDictionary *_stickerImageCache;
    NSMutableDictionary *_completeCache;
    NSMutableDictionary *_fontDonwloadCompleteCache;
    NSMutableArray *_requestingUins;
    NSMutableArray *_downloadingDiyRes;
}

+ (id)uicolorConvertFromString:(id)arg1;
+ (double)getSuitFontSize:(id)arg1 fontId:(int)arg2 fontType:(long long)arg3 maxSize:(struct CGSize)arg4;
+ (id)getDiyFontFolder;
+ (id)getDiyFontPath:(unsigned int)arg1;
+ (id)getDiyFontFilePath:(unsigned int)arg1;
+ (id)getDiyStickerFolder;
+ (id)getDiyStickerPathById:(unsigned int)arg1;
+ (id)getDiyInfoDicSavePath;
+ (id)getInstance;
- (void)onCompleted:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 from:(id)arg4 dlFrom:(int)arg5 result:(int)arg6 httpcode:(int)arg7;
- (_Bool)getItem:(unsigned long long)arg1 scid:(id)arg2 info:(id)arg3;
- (_Bool)canUpdate:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (_Bool)deleteFiles:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)isFileExists:(unsigned long long)arg1 scid:(id)arg2;
- (id)getDiyStickerImageById:(unsigned int)arg1;
- (void)responseGetDiyImage:(unsigned long long)arg1;
- (unsigned int)getDiyFontIdByScid:(id)arg1;
- (unsigned int)getStickerIdByScid:(id)arg1;
- (void)getDiyImage:(id)arg1;
- (id)diyResDownloadKey:(id)arg1;
- (void)responseFontLoadResult:(int)arg1 isSuccess:(_Bool)arg2 isClearCache:(_Bool)arg3;
- (void)responseDiyFontDownloaded:(int)arg1 isSuccess:(_Bool)arg2;
- (void)onFontLoad:(id)arg1;
- (void)cacheDiyFontDownloadBlock:(int)arg1 fontType:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)downloadDiyPendantFont:(int)arg1 fontType:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)getDiyFont:(int)arg1 fontType:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)getNumberPic:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)getDiyFont:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)doRequest;
- (void)requestDiyInfo:(unsigned long long)arg1;
- (void)onResponseDiyId:(id)arg1;
- (void)requestDiyId:(unsigned long long)arg1;
- (void)removeCompleteCache:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;
- (_Bool)cacheComplete:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)getDiyImageForUin:(unsigned long long)arg1 diyInfo:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (_Bool)getDiyImageForUin:(unsigned long long)arg1 diyInfoId:(unsigned int)arg2 time:(unsigned long long)arg3 isFromAIO:(_Bool)arg4 useCache:(_Bool)arg5 complete:(CDUnknownBlockType)arg6;
- (void)updateDiyCache:(int)arg1 uin:(long long)arg2;
- (unsigned int)getPendantDiyIdByUin:(long long)arg1;
- (void)setPendantDiyId:(unsigned int)arg1;
- (unsigned int)getPendantDiyId;
- (void)updatePendantDiyId:(int)arg1 uin:(id)arg2;
- (void)syncDiyInfo;
- (void)initDiyInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

