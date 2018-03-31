//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QQMainProject/PAAdMsgViewControllerProtocol-Protocol.h>
#import <QQMainProject/QQAudioSessionManagerDelegate-Protocol.h>
#import <QQMainProject/QUIAlertPlusViewDelegate-Protocol.h>
#import <QQMainProject/TVKLitePlaybackDelegate-Protocol.h>

@class CAGradientLayer, NSString, PAAdMsgBannerButton, PAAdMsgVideoModel, QQAlertView, QQAsynUrlImageView, QUIAlertPlusView, TVKLitePlayer, UIButton, UIImageView, UIView;

@interface PAAdMsgVideoViewController : UIViewController <QQAudioSessionManagerDelegate, QUIAlertPlusViewDelegate, TVKLitePlaybackDelegate, PAAdMsgViewControllerProtocol>
{
    _Bool _isCached;
    _Bool _isResignActive;
    _Bool _shouldRestart;
    _Bool _isMaskViewHidden;
    _Bool _isRotateRight;
    _Bool _needReadBtn;
    PAAdMsgVideoModel *_videoModel;
    UIView *_headerView;
    CAGradientLayer *_headerGradient;
    UIButton *_volumeBtn;
    UIView *_footerView;
    CAGradientLayer *_footerGradient;
    UIImageView *_firstArrow;
    UIImageView *_secondArrow;
    PAAdMsgBannerButton *_bannerButton;
    QUIAlertPlusView *_noWifiAlertView;
    QQAlertView *_noNetworkAlertView;
    QQAsynUrlImageView *_coverImageView;
    UIButton *_playButton;
    TVKLitePlayer *_player;
    QQAsynUrlImageView *_videoScreenShot;
    UIView *_videoPlayerView;
}

@property(retain, nonatomic) UIView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) QQAsynUrlImageView *videoScreenShot; // @synthesize videoScreenShot=_videoScreenShot;
@property(retain, nonatomic) TVKLitePlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) QQAsynUrlImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) QQAlertView *noNetworkAlertView; // @synthesize noNetworkAlertView=_noNetworkAlertView;
@property(retain, nonatomic) QUIAlertPlusView *noWifiAlertView; // @synthesize noWifiAlertView=_noWifiAlertView;
@property(retain, nonatomic) PAAdMsgBannerButton *bannerButton; // @synthesize bannerButton=_bannerButton;
@property(retain, nonatomic) UIImageView *secondArrow; // @synthesize secondArrow=_secondArrow;
@property(retain, nonatomic) UIImageView *firstArrow; // @synthesize firstArrow=_firstArrow;
@property(retain, nonatomic) CAGradientLayer *footerGradient; // @synthesize footerGradient=_footerGradient;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIButton *volumeBtn; // @synthesize volumeBtn=_volumeBtn;
@property(retain, nonatomic) CAGradientLayer *headerGradient; // @synthesize headerGradient=_headerGradient;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PAAdMsgVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) _Bool needReadBtn; // @synthesize needReadBtn=_needReadBtn;
- (void).cxx_destruct;
- (id)coverViewController;
- (_Bool)needDismissWhenAVChat;
- (void)onIntterruptEnd;
- (void)onDeactiveWithSystem;
- (void)onAudioSessionDeactive;
- (void)onIntterruptBegin;
- (void)onAudioSessionActive;
- (void)releaseAudioSession;
- (_Bool)requestAudioSession;
- (void)updateVolume:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)audioRouteChangeListenerCallback:(id)arg1;
- (void)unObserveVolumeChange;
- (void)observeVolumeChange;
- (void)cancelIncreaseVolume;
- (void)increaseVolumeInDuration:(double)arg1;
- (void)mediaPlayer:(id)arg1 progressUpdated:(double)arg2 duration:(double)arg3;
- (id)mediaPlayer:(id)arg1 willPlayUrl:(id)arg2;
- (void)mediaPlayer:(id)arg1 stateChanged:(int)arg2 withError:(id)arg3;
- (_Bool)isNetworkAvailableNow;
- (void)pauseVideoPlayerWithoutPlayButton;
- (void)pauseVideoPlayer;
- (void)stopVideoPlayer;
- (void)startVideoPlayer;
- (void)restartVideoPlayer;
- (void)networkChanged:(id)arg1;
- (_Bool)isVideoPlaying;
- (_Bool)isVideoPause;
- (_Bool)checkNetworkForVideoPlay;
- (void)errorViewTaped;
- (void)alertView:(id)arg1 clickedKeyWord:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onOpenUrlClick:(id)arg1;
- (void)onReadBtnClick:(id)arg1;
- (void)onCloseBtnClick:(id)arg1;
- (void)updateMuteState;
- (void)onVolumeBtnClick:(id)arg1;
- (void)endRotateRightAnimation;
- (void)startRotateRightAnimation;
- (void)onForceOffline;
- (void)onLoginSuccess;
- (void)loadStatusBar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (void)_stopArrowAnimation;
- (void)_startArrowAnimation;
- (void)delayHiddenMaskView;
- (void)hiddenMaskView:(_Bool)arg1;
- (void)handleHiddenTap;
- (void)_addFooterView;
- (void)_addHeaderView;
- (void)_addVideoPlayerView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithVideoModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

