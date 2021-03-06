//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQPttRecorderDelegate-Protocol.h>

@class NSString, QQPttTryListtenPlayer;
@protocol QZMoodVoiceRecordManagerDelegate;

@interface QZMoodVoiceRecordManager : NSObject <QQPttRecorderDelegate>
{
    NSString *_uuid;
    id <QZMoodVoiceRecordManagerDelegate> _delegate;
    QQPttTryListtenPlayer *_voicePlayer;
}

+ (id)instance;
@property(retain, nonatomic) QQPttTryListtenPlayer *voicePlayer; // @synthesize voicePlayer=_voicePlayer;
@property(nonatomic) __weak id <QZMoodVoiceRecordManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)genMessageModel;
- (void)onRecordEnd:(id)arg1 send:(_Bool)arg2;
- (void)onRecordData:(id)arg1 recordTime:(double)arg2;
- (id)base64StringOfCurrentVoiceData;
- (void)playVoiceWithVoiceID:(long long)arg1;
- (void)stopPlayingVoice;
- (long long)currentVoiceRecordTime;
- (long long)voiceRecordTimeWithVoiceID:(long long)arg1;
- (double)peakPowerLevel;
- (_Bool)stopRecording;
- (_Bool)startRecord;
- (id)createPttRecorder:(double)arg1;
- (id)recorder;
- (void)clear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

