//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AEModule.h"

@class AEMainThreadEndpoint;

@interface AEAudioFileRecorderModule : AEModule
{
    struct OpaqueExtAudioFile *_audioFile;
    struct _opaque_pthread_mutex_t _audioFileMutex;
    unsigned long long _startTime;
    unsigned long long _stopTime;
    _Bool _complete;
    unsigned int _recordedFrames;
    _Bool _recording;
    int _numberOfChannels;
    double _recordedTime;
    AEMainThreadEndpoint *_stopRecordingNotificationEndpoint;
}

@property(retain, nonatomic) AEMainThreadEndpoint *stopRecordingNotificationEndpoint; // @synthesize stopRecordingNotificationEndpoint=_stopRecordingNotificationEndpoint;
@property(readonly, nonatomic) double recordedTime; // @synthesize recordedTime=_recordedTime;
@property(nonatomic) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic) int numberOfChannels; // @synthesize numberOfChannels=_numberOfChannels;
- (void).cxx_destruct;
- (void)finishWriting;
- (void)stopRecordingAtTime:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)beginRecordingAtTime:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithRenderer:(id)arg1 URL:(id)arg2 type:(long long)arg3 numberOfChannels:(int)arg4 error:(id *)arg5;
- (id)initWithRenderer:(id)arg1 URL:(id)arg2 type:(long long)arg3 error:(id *)arg4;

@end

