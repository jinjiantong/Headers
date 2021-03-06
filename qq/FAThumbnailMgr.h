//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/FADownloadDelegate-Protocol.h>

@class NSLock, NSMutableArray, NSString;
@protocol FADelegate;

@interface FAThumbnailMgr : NSObject <FADownloadDelegate>
{
    id <FADelegate> _delegate;
    NSMutableArray *_downloadThumbnailQueue;
    NSMutableArray *_localThumbnailQueue;
    NSLock *_downloadQueueLock;
    int _concurrentDownloadingCount;
    int _concurrentLocalGeneratingCount;
    unsigned long long _selfUin;
}

+ (unsigned int)getSizeFromFASize:(int)arg1 mediaType:(int)arg2;
+ (id)getInstance;
- (void)reGenerateLocalAIOBubbleThumbail:(id)arg1;
- (_Bool)cutThumb:(id)arg1 size:(int)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)createLocalAIOThumnailAsync:(id)arg1;
- (void)regenerateThumail:(id)arg1 size:(int)arg2;
- (void)onFAThumbnailProgress:(id)arg1 size:(int)arg2 progress:(double)arg3;
- (void)onFAThumbnailFail:(id)arg1 size:(int)arg2;
- (void)regenerateThumbnailsFromBig:(id)arg1;
- (void)internalOnFAThumbnailSuccess:(id)arg1 size:(int)arg2;
- (void)onFAThumbnailSuccess:(id)arg1 size:(int)arg2;
- (void)OnFADownloadUpdate:(id)arg1 isFinish:(_Bool)arg2 withErr:(id)arg3;
- (void)executeNextThumbnailDownload;
- (_Bool)isFAThumbnailDownloadingByPath:(id)arg1;
- (void)downloadThumbnail:(id)arg1 size:(int)arg2 businessType:(int)arg3;
- (_Bool)DownloadFavoriteThumbnailWithFASDK:(id)arg1;
- (_Bool)DownloadThumbnailWithFASDK:(id)arg1;
- (_Bool)DownloadWYThumbnailWithFASDK:(id)arg1;
- (void)createLocalThumbnailAsync:(id)arg1;
- (_Bool)isLimitGenerateLocalThumbnail:(id)arg1;
- (void)executeNextThumbnailGenerating;
- (void)postThumbnailFail:(id)arg1 size:(int)arg2 error:(id)arg3;
- (void)generateLocalThumbnail:(id)arg1;
- (_Bool)isLocalThumbnailGeneratingByPath:(id)arg1;
- (void)getThumbnail:(id)arg1 size:(int)arg2;
- (id)calculateThumbnailPath:(id)arg1 size:(int)arg2;
- (id)initFAModelThumbnailPath:(id)arg1 size:(int)arg2;
- (id)getThumbnailPath:(id)arg1 size:(int)arg2;
- (void)onAccountLogout:(id)arg1;
- (void)changeAccount:(id)arg1;
- (void)stopDownloadThumb:(id)arg1 size:(int)arg2;
- (void)stopAllTasks;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

