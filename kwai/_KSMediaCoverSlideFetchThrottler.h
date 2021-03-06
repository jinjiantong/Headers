//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface _KSMediaCoverSlideFetchThrottler : NSObject
{
    CDUnknownBlockType _completionHandler;
    NSNumber *_currentFetchTime;
    NSNumber *_pendingFetchTime;
    NSString *_currentFetchToken;
    NSString *_pendingFetchToken;
    CDUnknownBlockType _syncFetch;
    CDUnknownBlockType _asyncFetch;
}

@property(copy, nonatomic) CDUnknownBlockType asyncFetch; // @synthesize asyncFetch=_asyncFetch;
@property(copy, nonatomic) CDUnknownBlockType syncFetch; // @synthesize syncFetch=_syncFetch;
@property(copy, nonatomic) NSString *pendingFetchToken; // @synthesize pendingFetchToken=_pendingFetchToken;
@property(copy, nonatomic) NSString *currentFetchToken; // @synthesize currentFetchToken=_currentFetchToken;
@property(retain) NSNumber *pendingFetchTime; // @synthesize pendingFetchTime=_pendingFetchTime;
@property(retain) NSNumber *currentFetchTime; // @synthesize currentFetchTime=_currentFetchTime;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)fetchWithOffset:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchWithOffset:(double)arg1;
- (void)consumeIfNeeded;
- (void)appendFetchWithOffset:(double)arg1 token:(id)arg2;
- (id)initWithSyncFetcher:(CDUnknownBlockType)arg1 asyncFetcher:(CDUnknownBlockType)arg2;

@end

