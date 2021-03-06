//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol GLMapTileDownloaderDelegate, OS_dispatch_queue;

@interface GLMapTileDownloader : NSObject
{
    _Bool _offlineMapData;
    id <GLMapTileDownloaderDelegate> _delegate;
    NSMutableArray *_timerArray;
    NSObject<OS_dispatch_queue> *_downloadQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) NSMutableArray *timerArray; // @synthesize timerArray=_timerArray;
@property(nonatomic) _Bool offlineMapData; // @synthesize offlineMapData=_offlineMapData;
@property(nonatomic) __weak id <GLMapTileDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)responseFailedForUrl:(id)arg1 afterTimeOut:(unsigned long long)arg2;
- (void)startDownload:(const char *)arg1;
- (void)dealloc;
- (id)init;

@end

