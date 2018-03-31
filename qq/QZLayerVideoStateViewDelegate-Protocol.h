//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZVideoStateViewDelegate-Protocol.h>

@class QZVideoAdvView, QzoneFeedModel;

@protocol QZLayerVideoStateViewDelegate <QZVideoStateViewDelegate>

@optional
- (void)videoConfigViewClicked;
- (void)moreVideoClick;
- (void)redpacketClick;
- (void)didVideoControlViewHidden:(_Bool)arg1;
- (_Bool)processedSingleTap;
- (void)didAdvAnimationEnd:(QZVideoAdvView *)arg1;
- (void)didSelectArea:(unsigned long long)arg1 feedModel:(QzoneFeedModel *)arg2;
- (void)didSelectArea:(unsigned long long)arg1;
- (void)didSelectAdv:(QZVideoAdvView *)arg1 selectedArea:(unsigned long long)arg2;
- (void)showAdvView;
- (void)resumeBySeek;
- (void)pauseBySeek;
- (void)openAdReadMore;
- (void)openHD;
- (void)videoControllerHidden:(_Bool)arg1;
- (void)closeFullScreen:(_Bool)arg1;
- (void)openFullScreen;
- (_Bool)rePlay;
- (void)stop;
- (void)pauseByUser:(_Bool)arg1;
- (_Bool)playBySeek;
- (void)seek:(double)arg1;
@end

