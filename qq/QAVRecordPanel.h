//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, NSString, NSTimer, UILabel;
@protocol QAVRecordDelegate;

@interface QAVRecordPanel : UIControl
{
    CAShapeLayer *_recordCenterLayer;
    CAShapeLayer *_recordCircleLayer;
    CAShapeLayer *_recordProgressLayer;
    UILabel *_durationLabel;
    UILabel *_fileSizeLabel;
    _Bool _isQAVRecording;
    unsigned long long _lastLength;
    NSString *_lastDuratioText;
    NSTimer *_timer;
    unsigned long long _timeCount;
    long long _recordState;
    id <QAVRecordDelegate> _delegate;
    double _maxRecordTime;
    unsigned long long _recordMaxTime;
}

@property(nonatomic) unsigned long long recordMaxTime; // @synthesize recordMaxTime=_recordMaxTime;
@property(nonatomic) long long recordState; // @synthesize recordState=_recordState;
@property(nonatomic) double maxRecordTime; // @synthesize maxRecordTime=_maxRecordTime;
@property(nonatomic) id <QAVRecordDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isQAVRecording; // @synthesize isQAVRecording=_isQAVRecording;
- (void)dealloc;
- (void)setHighlighted:(_Bool)arg1;
- (unsigned long long)getRecordTime;
- (void)stopRecord;
- (void)startRecord;
- (id)stringFromTimeInterval:(double)arg1;
- (void)updateFileSize;
- (void)updateProgress:(double)arg1 fileSize:(long long)arg2;
- (void)resetUI;
- (void)timeOutStopRecord;
- (void)stopReocrdMemoryIsNotEnough;
- (_Bool)isAccessibilityElement;
- (void)updateProgress;
- (void)showStartRecordUI;
- (void)relayoutDegreee:(int)arg1;
- (void)setRecordPanelAntilocked:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

