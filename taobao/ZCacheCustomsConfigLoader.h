//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZCacheConfigLoader.h"

@class NSOperationQueue;

@interface ZCacheCustomsConfigLoader : ZCacheConfigLoader
{
    NSOperationQueue *_queue;
}

@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)resolvedResult:(id)arg1;
- (id)appConfigBaseURL:(id)arg1;
- (id)loadAppConfigs:(id)arg1 withNextVersion:(id)arg2;
- (id)downloadConfig:(id)arg1 withNextVersion:(id)arg2;

@end

