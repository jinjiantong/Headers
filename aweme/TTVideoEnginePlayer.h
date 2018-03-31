//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTVideoEnginePlayer-Protocol.h"

@class NSDictionary, NSString, NSURL, TTVideoEngineAVPlayerItemAccessLog, UIView;
@protocol AVAssetResourceLoaderDelegate, TTVideoEnginePlayer, TTVideoPlayerStateProtocol;

@interface TTVideoEnginePlayer : NSObject <TTVideoEnginePlayer>
{
    NSObject<TTVideoEnginePlayer> *_player;
    NSString *_hostname;
    _Bool _isOwn;
}

@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *mp4HeaderMetaComment;
@property(nonatomic) double startTime;
- (void)setIgnoreAudioInterruption:(_Bool)arg1;
@property(nonatomic) long long smoothDelayedSeconds;
@property(nonatomic) _Bool looping;
@property(nonatomic) _Bool ksyHevcDecode;
@property(nonatomic) _Bool hardwareDecode;
@property(nonatomic) unsigned long long renderEngine;
@property(nonatomic) unsigned long long renderType;
@property(nonatomic) unsigned long long imageLayoutType;
@property(nonatomic) unsigned long long enhancementType;
@property(nonatomic) unsigned long long imageScaleType;
- (void)playNextWithURL:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (long long)downloadSpeed;
- (long long)numberOfBytesTransferred;
- (long long)numberOfBytesPlayed;
@property(nonatomic) long long scalingMode;
@property(nonatomic) __weak id <AVAssetResourceLoaderDelegate> resourceLoaderDelegate;
@property(nonatomic) double playbackSpeed;
@property(nonatomic) double volume;
@property(nonatomic) _Bool muted;
@property(readonly, nonatomic) TTVideoEngineAVPlayerItemAccessLog *accessLog;
@property(readonly, nonatomic) unsigned long long loadState;
@property(readonly, nonatomic) long long playbackState;
- (void)setCurrentPlaybackTime:(double)arg1 complete:(CDUnknownBlockType)arg2;
@property(nonatomic) double currentPlaybackTime;
- (id)currentCDNHost;
- (float)currentRate;
@property(readonly, nonatomic) long long bufferingProgress;
@property(readonly, nonatomic) long long mediaSize;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, nonatomic) double duration;
@property(nonatomic) _Bool isPauseWhenNotReady;
- (_Bool)isPlaying;
- (_Bool)isPrerolling;
- (void)close;
- (void)stop;
- (void)pause;
- (void)play;
- (void)prepareToPlay;
- (void)setContentURLString:(id)arg1;
@property(copy, nonatomic) NSURL *contentURL;
- (_Bool)isCustomPlayer;
@property(readonly, nonatomic) UIView *view;
@property(nonatomic) __weak id <TTVideoPlayerStateProtocol> delegate;
- (long long)getIntValueForKey:(int)arg1;
- (void)setCacheFile:(id)arg1 forMode:(int)arg2;
- (void)setPlayerValue:(int)arg1 key:(int)arg2;
- (void)setValueString:(id)arg1 forKey:(long long)arg2;
- (void)dealloc;
- (id)initWithOwnPlayer:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) int cacheFileMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) int testSpeedMode;

@end

