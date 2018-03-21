//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface QQVipFunctionComicStorgeManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue_comic_storage;
}

+ (_Bool)createPathIfNecessary:(id)arg1;
+ (id)comicCommonCachePath;
+ (id)vasEncryptUserComicPagePathWith:(id)arg1 andSectionID:(id)arg2 andPageUrl:(id)arg3 andPageID:(id)arg4;
+ (id)vasTempUserComicPagePathWith:(id)arg1 andSectionID:(id)arg2 andPageUrl:(id)arg3 andPageID:(id)arg4;
+ (id)vasComicNameWithPageUrl:(id)arg1 andPageID:(id)arg2;
+ (id)vasUserComicSectionPath:(id)arg1 andSectionID:(id)arg2;
+ (id)vasUserCommicPath:(id)arg1;
+ (id)vasComicEtagPath;
+ (id)vasUserPath;
+ (id)vasComicUtilPath;
+ (id)vasCommonPath;
+ (id)shareManager;
- (void).cxx_destruct;
- (void)deleteComic:(id)arg1 completeBolck:(CDUnknownBlockType)arg2;
- (void)deleteComicSectionArr:(id)arg1 forComic:(id)arg2 completeBolck:(CDUnknownBlockType)arg3;
- (void)ReadComicPage:(id)arg1 completeBolck:(CDUnknownBlockType)arg2;
- (void)StorageComicPage:(id)arg1 completeBolck:(CDUnknownBlockType)arg2;
- (id)init;

@end
