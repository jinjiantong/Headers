//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSTimer, UIActivityIndicatorView, UIImageView, UILabel, UILabelWithPadding;
@protocol QQAVNoticeActionDelegate;

@interface QQAVNoticeView : UIView
{
    UILabelWithPadding *_noticeLabel;
    UIActivityIndicatorView *_actView;
    UIImageView *_imgView;
    int _curPriority;
    NSMutableDictionary *_residentDict;
    NSTimer *_showTimer;
    UIView *_crmIvrTipBackground;
    _Bool _isLightContent;
    float _angle;
    long long _customizeType;
    NSTimer *_showGestureTime;
    _Bool _shouldShowBackgroundView;
    id <QQAVNoticeActionDelegate> _noticeActionDelegate;
}

@property(nonatomic) long long customizeType; // @synthesize customizeType=_customizeType;
@property(nonatomic) id <QQAVNoticeActionDelegate> noticeActionDelegate; // @synthesize noticeActionDelegate=_noticeActionDelegate;
@property(nonatomic) _Bool shouldShowBackgroundView; // @synthesize shouldShowBackgroundView=_shouldShowBackgroundView;
@property(readonly) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
- (void)showBackgroundViewOrNot:(id)arg1 imgFrame:(struct CGRect)arg2 needImg:(id)arg3;
- (void)updateAllSubview:(float)arg1;
- (void)resetAllContent;
- (_Bool)removeContentWithPriority:(int)arg1;
- (_Bool)setContent:(id)arg1 withPriority:(int)arg2 withResident:(_Bool)arg3 withShowTime:(int)arg4 withImage:(id)arg5;
- (_Bool)setContent:(id)arg1 withPriority:(int)arg2 withResident:(_Bool)arg3 withShowTime:(int)arg4 withIndicator:(_Bool)arg5;
- (_Bool)setContent:(id)arg1 withPriority:(int)arg2 withResident:(_Bool)arg3 withIndicator:(_Bool)arg4;
- (id)attributes;
- (void)imageWithShadow:(id)arg1 withShadow:(_Bool)arg2;
- (void)setImageTheme;
- (void)setTextTheme:(id)arg1;
- (void)setLightContentForDarkBg:(_Bool)arg1;
- (void)onTimer;
- (void)startShowTimerWithTime:(double)arg1;
- (void)stopShowTimer;
- (void)dismissCrmTipBackground;
- (void)showCrmTipBackground:(id)arg1 ImgSize:(struct CGRect)arg2 needImg:(_Bool)arg3;
- (void)dismissImage;
- (void)showImage:(id)arg1;
- (void)dismissIndicator;
- (void)showIndicator;
- (void)deleteContentWithPriority:(int)arg1;
- (void)setDictWithPriority:(int)arg1 withContent:(id)arg2 withIndicator:(_Bool)arg3 withImage:(id)arg4;
- (id)getDictWithPriority:(int)arg1;
- (void)changeNoticeLabelFont:(id)arg1;
- (int)getMaxPriority;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

