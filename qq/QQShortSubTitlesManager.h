//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAVSubTitlesManager.h>

@class QQSubtitleSendAudioData, SubtitleNetItem;

@interface QQShortSubTitlesManager : QQAVSubTitlesManager
{
    long long _tryAgainCount;
    long long _tryAgainInterval;
    _Bool _needTrans;
    QQSubtitleSendAudioData *_sendDatahandle;
    SubtitleNetItem *_currentNetItem;
}

+ (id)GetInstance;
@property(retain, nonatomic) SubtitleNetItem *currentNetItem; // @synthesize currentNetItem=_currentNetItem;
@property(retain, nonatomic) QQSubtitleSendAudioData *sendDatahandle; // @synthesize sendDatahandle=_sendDatahandle;
- (_Bool)sendHeartData;
- (void)restartAVSubTitle;
- (_Bool)sendSubtitleSilkData:(id)arg1;
- (void)startShortVideoTitle:(id)arg1 needTrans:(_Bool)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (void)exitSession;

@end

