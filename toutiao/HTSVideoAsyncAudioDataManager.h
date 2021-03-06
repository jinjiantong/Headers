//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DOUAudioFile-Protocol.h"

@class DOUAudioStreamer, NSError, NSString, NSURL;

@interface HTSVideoAsyncAudioDataManager : NSObject <DOUAudioFile>
{
    DOUAudioStreamer *_player;
    NSURL *_remoteURL;
    NSURL *_cacheURL;
    NSError *_error;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property(readonly, copy, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(readonly, nonatomic) DOUAudioStreamer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)initWithRemoteURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)audioFileURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

