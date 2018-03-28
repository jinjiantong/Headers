//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

@class NSTimer, SSThemedLabel, SSThemedView, TTAlphaThemedButton, TTVideoPasterADModel, UIImageView, UIView;
@protocol TTVideoPasterADNatantViewDelegate;

@interface TTVideoPasterADNatantView : SSViewBase
{
    _Bool _isFullScreen;
    id <TTVideoPasterADNatantViewDelegate> _delegate;
    long long _durationTime;
    TTVideoPasterADModel *_adModel;
    SSThemedLabel *_skipLabel;
    SSThemedLabel *_durationLabel;
    TTAlphaThemedButton *_skipButton;
    TTAlphaThemedButton *_showDetailButton;
    TTAlphaThemedButton *_fullScreenButton;
    TTAlphaThemedButton *_backButton;
    UIView *_separateLineView;
    SSThemedView *_skipBackgroundView;
    SSThemedView *_skipTouchView;
    UIImageView *_titleShadowView;
    NSTimer *_timer;
    long long _skipTime;
    SSThemedLabel *_titleLabel;
    long long _titleTime;
}

@property(nonatomic) long long titleTime; // @synthesize titleTime=_titleTime;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) long long skipTime; // @synthesize skipTime=_skipTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIImageView *titleShadowView; // @synthesize titleShadowView=_titleShadowView;
@property(retain, nonatomic) SSThemedView *skipTouchView; // @synthesize skipTouchView=_skipTouchView;
@property(retain, nonatomic) SSThemedView *skipBackgroundView; // @synthesize skipBackgroundView=_skipBackgroundView;
@property(retain, nonatomic) UIView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(retain, nonatomic) TTAlphaThemedButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) TTAlphaThemedButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property(retain, nonatomic) TTAlphaThemedButton *showDetailButton; // @synthesize showDetailButton=_showDetailButton;
@property(retain, nonatomic) TTAlphaThemedButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) SSThemedLabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) SSThemedLabel *skipLabel; // @synthesize skipLabel=_skipLabel;
@property(retain, nonatomic) TTVideoPasterADModel *adModel; // @synthesize adModel=_adModel;
@property(nonatomic) long long durationTime; // @synthesize durationTime=_durationTime;
@property(nonatomic) __weak id <TTVideoPasterADNatantViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isTopMostView;
- (id)mainWindow;
- (void)showSkipButton;
- (void)setupSubViews;
- (void)tapGestureAction:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (void)showDetailButtonClicked:(id)arg1;
- (void)fullScreenButtonClicked:(id)arg1;
- (void)skipButtonClicked:(id)arg1;
- (void)titleHidden;
- (void)titleShowToHidden;
- (void)timerAction:(id)arg1;
- (_Bool)isPauseButtonShowed;
- (_Bool)isPlayButtonShowed;
- (void)controlButtonAction:(id)arg1;
- (void)showPauseButtonAnimated:(_Bool)arg1;
- (void)showPlayButtonAnimated:(_Bool)arg1;
- (void)hidePauseButtonAnimated:(_Bool)arg1;
- (void)hidePlayButtonAnimated:(_Bool)arg1;
- (void)resumeTimer;
- (void)pauseTimer;
- (id)initWithFrame:(struct CGRect)arg1 pasterADModel:(id)arg2;
- (void)dealloc;

@end
