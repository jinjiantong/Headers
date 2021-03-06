//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;
@protocol AWEVideoDiskCacheImp;

@interface AWEVideoDiskCache : NSObject
{
    id <AWEVideoDiskCacheImp> _cacheInstance;
    NSTimer *_timer;
}

+ (unsigned long long)freeFileSystemSize;
+ (_Bool)hasEnoughFreeDiskSize;
+ (void)trimDiskCacheToQuota;
+ (void)clearForKey:(id)arg1;
+ (void)clearForURLString:(id)arg1;
+ (void)clear;
+ (void)sizeWithCompletion:(CDUnknownBlockType)arg1;
+ (void)hasCacheForURLString:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)metaDataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)cacheDataForKey:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 error:(id *)arg4;
+ (void)cacheDataForKey:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)finishCacheForKey:(id)arg1 originURLString:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)appendCacheData:(id)arg1 offset:(unsigned long long)arg2 forKey:(id)arg3 mimeType:(id)arg4 fileLength:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)cacheQueue;
+ (long long)sizeAtFilePath:(id)arg1;
+ (id)cachePath;
+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) id <AWEVideoDiskCacheImp> cacheInstance; // @synthesize cacheInstance=_cacheInstance;
- (void).cxx_destruct;
- (void)_trimDiskCacheToQuota;
- (void)_addNotificationObservers;
- (void)dealloc;
- (void)setupTrimTimer;
- (id)init;

@end

