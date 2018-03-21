//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol AudioRecordAndPlayerDelegate;

@interface AudioRecordAndPlayer : NSObject
{
    CDStruct_0373e3e9 aUnitData;
    _Bool isStoped;
    id <AudioRecordAndPlayerDelegate> audioRecordAndPlayerDelegate;
    int mInSamplerate;
    int mOutSamplerate;
    int mInChannels;
    int mOutChannels;
    int mInFrameDuration;
    int mOutFrameDuration;
    int mInFrameSize;
    int mOutFrameSize;
    int mWorkMode;
    char *pRecBuff;
    int mLeftLenth;
    unsigned short *pPlayBuff;
    int mPBLeft;
    _Bool bMuteMic;
}

@property(nonatomic) _Bool isStop; // @synthesize isStop=isStoped;
@property(nonatomic) CDStruct_0373e3e9 aUnitData; // @synthesize aUnitData;
- (void)onIntterruptBegin;
- (void)onAudioSessionActive;
- (void)setMicrophoneMute:(_Bool)arg1;
- (int)Stop;
- (void)setDelegate:(id)arg1;
- (int)Start;
- (void)setWorkMode:(int)arg1;
- (int)setPlayDataFormat:(int)arg1 nChannels:(int)arg2 nLength:(int)arg3;
- (int)setRecDataFormat:(int)arg1 nChannels:(int)arg2 nLength:(int)arg3;
- (id)init;

@end
