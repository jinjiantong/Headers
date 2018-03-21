//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface KSYAudioMixer : NSObject
{
    CDStruct_c5d49230 _audioBuf[4];
    int _tkCnt;
    _Bool _tkEnable[4];
    float _tkVolume[4];
    int _tkSmpCnt[4];
    int _tkLastLen[4];
    struct SwrContext *_swrCtx[4];
    struct _KSYAudioFormat _inFmt[4];
    CDStruct_1b6d18a9 _inPTS[4];
    NSObject<OS_dispatch_queue> *a_mixer_q;
    struct AudioStreamBasicDescription _outFmtDes;
    struct opaqueCMFormatDescription *_aFmtDes;
    int _mainTrack;
    CDUnknownBlockType _audioProcessingCallback;
    struct _KSYAudioFormat _outFmt;
}

@property(readonly, nonatomic) struct _KSYAudioFormat outFmt; // @synthesize outFmt=_outFmt;
@property(nonatomic) int mainTrack; // @synthesize mainTrack=_mainTrack;
@property(copy, nonatomic) CDUnknownBlockType audioProcessingCallback; // @synthesize audioProcessingCallback=_audioProcessingCallback;
- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer *)checkOutput;
- (_Bool)pushSample:(char **)arg1 nbSample:(int)arg2 withFormat:(struct _KSYAudioFormat *)arg3 timeinfo:(CDStruct_1b6d18a9)arg4 toTrack:(int)arg5;
- (_Bool)pushSample:(struct opaqueCMSampleBuffer *)arg1 ToTrack:(int)arg2;
- (_Bool)initTrackIfNeeded:(struct _KSYAudioFormat *)arg1 ToTrack:(int)arg2;
- (int)getBufLength:(int)arg1;
- (_Bool)outputSampe;
- (_Bool)processAudioData:(char **)arg1 nbSample:(int)arg2 withFormat:(struct _KSYAudioFormat *)arg3 timeinfo:(CDStruct_1b6d18a9)arg4 of:(int)arg5;
- (_Bool)processAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 of:(int)arg2;
- (void)uninitResample:(int)arg1;
- (_Bool)initResample:(int)arg1 withFormat:(struct _KSYAudioFormat *)arg2;
- (void)uninitTrack:(int)arg1;
- (_Bool)initTrack:(int)arg1 withFormat:(struct _KSYAudioFormat *)arg2;
- (_Bool)getFormt:(struct _KSYAudioFormat *)arg1 From:(struct opaqueCMSampleBuffer *)arg2;
- (_Bool)getTrackEnable:(int)arg1;
- (_Bool)setTrack:(int)arg1 enable:(_Bool)arg2;
- (float)getMixVolume:(int)arg1;
- (_Bool)setMixVolume:(float)arg1 of:(int)arg2;
- (int)getMaxMixTrack;
- (void)dealloc;
- (id)initWithDefaultCfg;
- (id)init;

@end
