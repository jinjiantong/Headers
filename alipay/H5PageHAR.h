//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface H5PageHAR : NSObject
{
    NSMutableDictionary *_pages;
    NSMutableArray *_entries;
    NSMutableDictionary *_requestsPool;
}

+ (void)executeTask:(CDUnknownBlockType)arg1;
+ (void)harLogThreadEntryPoint:(id)arg1;
+ (void)enqueueTaskSync:(CDUnknownBlockType)arg1;
+ (id)internalThread;
+ (void)writeHAR:(id)arg1;
+ (void)saveHARFiles;
+ (id)getHARTempPool;
@property(copy, nonatomic) NSMutableDictionary *requestsPool; // @synthesize requestsPool=_requestsPool;
@property(copy, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property(copy, nonatomic) NSMutableDictionary *pages; // @synthesize pages=_pages;
- (void).cxx_destruct;
- (id)stringFromDate:(id)arg1;
- (id)getEntriesFromRequestsPool;
- (id)getCookiesWithURLString:(id)arg1;
- (id)transReceiveData2ContentString:(id)arg1 textEncodingName:(id)arg2;
- (id)transHeaders2Array:(id)arg1;
- (void)addEntriesWithUniqueId:(id)arg1 response:(id)arg2 receiveData:(id)arg3 responseTime:(id)arg4;
- (void)addRequest:(id)arg1 WithUniqueId:(id)arg2 requestTime:(id)arg3;
- (void)setPagesWithMainUrl:(id)arg1 startDate:(id)arg2 onContentLoad:(double)arg3 onLoad:(double)arg4;
- (void)addCurrentHAR2TempPool;
- (id)description;
- (id)init;

@end
