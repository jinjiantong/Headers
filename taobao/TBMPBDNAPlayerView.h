//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBMPBPlayerProtocol-Protocol.h"

@class NSMutableArray, NSString, TBMPBPlayerOptions;

@interface TBMPBDNAPlayerView : UIView <TBMPBPlayerProtocol>
{
    _Bool _muted;
    _Bool _isLoadingFromCache;
    _Bool _isPlayExperienceReported;
    _Bool _isUseProxy;
    _Bool _shouldSetErrorInfoInPlayExperience;
    _Bool _pauseBeforeSeek;
    float _playbackRate;
    int _playerStatus;
    int _stallsCount;
    int _loopCount;
    int _playerablePercent;
    long long _playerContentMode;
    double _preferredForwardBufferDuration;
    double _currentPlaybackTime;
    double _duration;
    double _cacheProgress;
    CDUnknownBlockType _playerEventFired;
    CDUnknownBlockType _playerDataPopped;
    double _lastActiveTime;
    NSString *_url;
    TBMPBPlayerOptions *_options;
    id _dnaPlayer;
    UIView *_playerView;
    NSMutableArray *_playerStatusNodes;
    double _videoDuration;
    NSString *_businessID;
    NSString *_subBusinessType;
    NSString *_logToken;
    NSString *_cdnIP;
    double _startPreparetime;
    double _preparedTime;
    double _startPlayTime;
    double _firstVideoFrameRenderingTime;
    double _outStartTime;
    double _userFirstFrameTime;
    double _outPreloadStartTime;
    double _userPreloadTime;
    long long _lastErrorCode;
    long long _lastErrorExtra;
    long long _lastErrorNetworkStatus;
    double _startStallTime;
    double _lastStallEndTime;
    double _totalStallsDuration;
    double _playingTime;
    double _startPlayingTimeStamp;
    NSString *_serverIP;
    struct CGRect _videoRect;
}

@property(nonatomic) int playerablePercent; // @synthesize playerablePercent=_playerablePercent;
@property(nonatomic) int loopCount; // @synthesize loopCount=_loopCount;
@property(copy, nonatomic) NSString *serverIP; // @synthesize serverIP=_serverIP;
@property(nonatomic) _Bool pauseBeforeSeek; // @synthesize pauseBeforeSeek=_pauseBeforeSeek;
@property(nonatomic) double startPlayingTimeStamp; // @synthesize startPlayingTimeStamp=_startPlayingTimeStamp;
@property(nonatomic) double playingTime; // @synthesize playingTime=_playingTime;
@property(nonatomic) double totalStallsDuration; // @synthesize totalStallsDuration=_totalStallsDuration;
@property(nonatomic) int stallsCount; // @synthesize stallsCount=_stallsCount;
@property(nonatomic) double lastStallEndTime; // @synthesize lastStallEndTime=_lastStallEndTime;
@property(nonatomic) double startStallTime; // @synthesize startStallTime=_startStallTime;
@property(nonatomic) _Bool shouldSetErrorInfoInPlayExperience; // @synthesize shouldSetErrorInfoInPlayExperience=_shouldSetErrorInfoInPlayExperience;
@property(nonatomic) long long lastErrorNetworkStatus; // @synthesize lastErrorNetworkStatus=_lastErrorNetworkStatus;
@property(nonatomic) long long lastErrorExtra; // @synthesize lastErrorExtra=_lastErrorExtra;
@property(nonatomic) long long lastErrorCode; // @synthesize lastErrorCode=_lastErrorCode;
@property(nonatomic) double userPreloadTime; // @synthesize userPreloadTime=_userPreloadTime;
@property(nonatomic) double outPreloadStartTime; // @synthesize outPreloadStartTime=_outPreloadStartTime;
@property(nonatomic) double userFirstFrameTime; // @synthesize userFirstFrameTime=_userFirstFrameTime;
@property(nonatomic) double outStartTime; // @synthesize outStartTime=_outStartTime;
@property(nonatomic) double firstVideoFrameRenderingTime; // @synthesize firstVideoFrameRenderingTime=_firstVideoFrameRenderingTime;
@property(nonatomic) double startPlayTime; // @synthesize startPlayTime=_startPlayTime;
@property(nonatomic) double preparedTime; // @synthesize preparedTime=_preparedTime;
@property(nonatomic) double startPreparetime; // @synthesize startPreparetime=_startPreparetime;
@property(nonatomic) _Bool isUseProxy; // @synthesize isUseProxy=_isUseProxy;
@property(nonatomic) NSString *cdnIP; // @synthesize cdnIP=_cdnIP;
@property(copy, nonatomic) NSString *logToken; // @synthesize logToken=_logToken;
@property(copy, nonatomic) NSString *subBusinessType; // @synthesize subBusinessType=_subBusinessType;
@property(copy, nonatomic) NSString *businessID; // @synthesize businessID=_businessID;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) _Bool isPlayExperienceReported; // @synthesize isPlayExperienceReported=_isPlayExperienceReported;
@property(retain, nonatomic) NSMutableArray *playerStatusNodes; // @synthesize playerStatusNodes=_playerStatusNodes;
@property(nonatomic) int playerStatus; // @synthesize playerStatus=_playerStatus;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) id dnaPlayer; // @synthesize dnaPlayer=_dnaPlayer;
@property(retain, nonatomic) TBMPBPlayerOptions *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) double lastActiveTime; // @synthesize lastActiveTime=_lastActiveTime;
@property(copy, nonatomic) CDUnknownBlockType playerDataPopped; // @synthesize playerDataPopped=_playerDataPopped;
@property(copy, nonatomic) CDUnknownBlockType playerEventFired; // @synthesize playerEventFired=_playerEventFired;
@property(readonly, nonatomic) _Bool isLoadingFromCache; // @synthesize isLoadingFromCache=_isLoadingFromCache;
@property(nonatomic) double preferredForwardBufferDuration; // @synthesize preferredForwardBufferDuration=_preferredForwardBufferDuration;
@property(nonatomic) long long playerContentMode; // @synthesize playerContentMode=_playerContentMode;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
- (void).cxx_destruct;
- (id)playerStatusData;
- (id)snapshotImageAtCurrentTime;
- (double)playableDuration;
- (_Bool)isPlaying;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) double cacheDuration;
- (void)setInfo:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)prepareToRecycle;
- (void)shutdown;
- (void)stop;
- (void)pause;
- (void)play;
- (void)prepareToPlay;
- (void)onPlayerLogNotification:(id)arg1;
- (void)onPlayerEventNotification:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (id)errorInfoWithErrorCode:(long long)arg1 extraCode:(long long)arg2;
- (void)reportPlayExperience;
- (void)reportStalled;
- (id)playerStatusNodesDescription;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setupPlayer;
- (id)initWithMediaURL:(id)arg1 playerOptions:(id)arg2;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(readonly, nonatomic) struct CGRect videoRect; // @synthesize videoRect=_videoRect;
@property(readonly, nonatomic) double cacheProgress; // @synthesize cacheProgress=_cacheProgress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long renderViewOrientation;
@property(readonly) Class superclass;

@end

