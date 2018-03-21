//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QAVAudioCtrl.h"

@class QAVContextImpl;
@protocol QAVAudioDataDelegate;

@interface QAVAudioCtrlImpl : QAVAudioCtrl
{
    CDUnknownBlockType _enableMicComplete;
    CDUnknownBlockType _enableSpeakerComplete;
    _Bool _isEnableExternalCap;
    _Bool _isPhoneConnected;
    struct AudioCallback *_audioNativeCallback;
    struct AuidoDataCallback *_audioDataCallback;
    long long _outputMode;
    _Bool _isClientSetPause;
    QAVContextImpl *_context;
    id <QAVAudioDataDelegate> _audioDlg;
}

@property(nonatomic) _Bool isClientSetPause; // @synthesize isClientSetPause=_isClientSetPause;
@property(nonatomic) id <QAVAudioDataDelegate> audioDlg; // @synthesize audioDlg=_audioDlg;
@property(retain, nonatomic) QAVContextImpl *context; // @synthesize context=_context;
- (int)getDynamicVolumeById:(id)arg1;
- (long long)setVoiceType:(long long)arg1;
- (float)getAudioDataVolume:(long long)arg1;
- (int)getAudioDataDBVolume:(long long)arg1;
- (long long)SetAudioDataDBVolume:(long long)arg1 volume:(int)arg2;
- (long long)setAudioDataVolume:(long long)arg1 volume:(float)arg2;
- (struct QAVAudioFrameDesc)getAudioDataFormat:(long long)arg1;
- (long long)setAudioDataFormat:(long long)arg1 desc:(struct QAVAudioFrameDesc)arg2;
- (long long)unregisterAudioDataCallbackAll;
- (long long)unregisterAudioDataCallback:(long long)arg1;
- (long long)registerAudioDataCallback:(long long)arg1;
- (long long)getAudioCategory;
- (int)onAudioCallback:(id)arg1 type:(long long)arg2 raw:(struct AudioFrame *)arg3;
- (int)pauseAudio_Internal;
- (long long)setAudioDataEventDelegate:(id)arg1;
- (_Bool)enableLoopBack:(_Bool)arg1;
- (unsigned int)dynamicVolume;
- (unsigned int)volume;
- (long long)outputMode;
- (void)setOutputMode:(long long)arg1;
- (void)dealloc;
- (long long)getSpeakerState;
- (long long)getMicState;
- (void)OnEnableSpeaker:(_Bool)arg1 ret:(int)arg2;
- (void)OnEnableMic:(_Bool)arg1 ret:(int)arg2;
- (_Bool)enableMic:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (_Bool)enableSpeaker:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (_Bool)enableMic:(_Bool)arg1;
- (_Bool)enableSpeaker:(_Bool)arg1;
- (long long)fillExternalAudioFrame:(id)arg1;
- (void)enableExternalAudioDataInput:(_Bool)arg1;
- (id)getQualityTips;
- (long long)changeAudioCategory:(long long)arg1;
- (void)resumeAudio;
- (void)pauseAudio;
- (struct AVAudioCtrlProxy *)getNativeObj;
- (id)initWithContext:(id)arg1;
- (void)detectCall;

@end
