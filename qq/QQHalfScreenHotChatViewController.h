//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQHotChatViewController.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>
#import <QQMainProject/QQGameAudioTouchDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class AudioHelper, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QQAVWindow, QQGameAudioControlBtn, QQWordingPicker, UIColor, UIImage, UIImageView, UIView;

@interface QQHalfScreenHotChatViewController : QQHotChatViewController <QQGameAudioTouchDelegate, CAAnimationDelegate, UIGestureRecognizerDelegate>
{
    NSMutableArray *_speakingMember;
    QQGameAudioControlBtn *_speakBtn;
    _Bool _isGamePlaying;
    _Bool _isReturnAnimation;
    _Bool _isReturnInFloat;
    _Bool _isShowAnimation;
    QQAVWindow *_window;
    _Bool _isChatStoped;
    _Bool _isDarkStyle;
    _Bool _isDarkTime;
    NSMutableDictionary *_normalStyleInfos;
    NSDictionary *_customStyleInfos;
    QQWordingPicker *_gameInputWordingPicker;
    UIView *_speakBtnMask;
    UIImageView *_aioCoverView;
    UIImageView *_animatedImageView;
    UIImage *_voiceImage;
    UIImage *_textImage;
    UIImage *_emojiImage;
    UIImage *_emojiActiveImage;
    UIColor *_speakingWordingColor;
    UIColor *_speakingBarColor;
    UIColor *_inputBarColor;
    UIColor *_wordingColor;
    AudioHelper *_pAudioHelper;
    int reconnectCount;
    _Bool _isShowRoomFloat;
    unsigned long long _currentPlyaerState;
    UIView *_halfScreenView;
    struct CGRect _webActiveFrame;
}

+ (id)loadImageWithPath:(id)arg1;
+ (id)loadImageWithPathNoResize:(id)arg1;
@property(nonatomic) struct CGRect webActiveFrame; // @synthesize webActiveFrame=_webActiveFrame;
@property(retain, nonatomic) NSMutableArray *speakingMember; // @synthesize speakingMember=_speakingMember;
@property(nonatomic) _Bool isShowRoomFloat; // @synthesize isShowRoomFloat=_isShowRoomFloat;
@property(readonly, nonatomic) UIView *halfScreenView; // @synthesize halfScreenView=_halfScreenView;
@property(nonatomic) unsigned long long currentPlyaerState; // @synthesize currentPlyaerState=_currentPlyaerState;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onForceOffLine;
- (struct CGRect)frameForMainView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)autoSwitchViewAnimation;
- (void)autoMoveAnination;
- (void)autoScaleAnimation;
- (void)startReturnAnimation;
- (void)startShowAnimation;
- (void)goToAudioChat;
- (void)showKeyboard:(id)arg1;
- (id)getChatWindow;
- (void)show24HoursMessagesTipIfNeeded;
- (void)connectedToFloat;
- (void)leftButtonClick:(id)arg1;
- (void)gameRoomAudioReconnection:(id)arg1;
- (void)onEvtUnPluggingHeadset:(id)arg1;
- (void)removeControllerFromWindow;
- (void)destroyRoomController;
- (void)startRecAudio;
- (void)stopRecAudio;
- (void)resumeMemAudio:(id)arg1 wordingColor:(id)arg2 inputBarColor:(id)arg3 voiceImage:(id)arg4 textImage:(id)arg5 emojiImage:(id)arg6 speakingWordingColor:(id)arg7 speakingBarColor:(id)arg8 emojiActiveImage:(id)arg9;
- (void)banMemAudio:(id)arg1 wordingColor:(id)arg2 inputBarColor:(id)arg3 voiceImage:(id)arg4 textImage:(id)arg5 emojiImage:(id)arg6 speakingWordingColor:(id)arg7 speakingBarColor:(id)arg8 emojiActiveImage:(id)arg9;
- (void)closeGameMic;
- (void)openGamerMic;
- (void)enterGameAudioRoom;
- (void)quitGameAudioRoom;
- (void)stopSpeakAnimate;
- (void)startSpeakAnimate;
- (_Bool)isSupportRightDragToGoBack;
- (void)touchEnd:(id)arg1;
- (void)touchCancel:(id)arg1;
- (void)touchBegin:(id)arg1;
- (void)hiddenKeyBorad:(id)arg1;
- (void)setGamePlayerSpokeUI:(id)arg1;
- (void)didPressRightLButton:(id)arg1;
- (void)onAioDbClick:(id)arg1;
- (void)changeWebActiveFrame:(id)arg1;
- (void)changeInputStatus:(id)arg1;
- (void)textInputState;
- (void)voiceInputState;
- (void)didPressLeftRButton:(id)arg1;
- (void)changeDefaultScrollViewContentInset:(double)arg1;
- (void)dealloc;
- (void)receiveAddMessageNotification:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)changeToNormalStyle;
- (id)styleFadeAnimation;
- (void)changeToDarkStyle;
- (void)changeNavToNormalStyle;
- (void)changeNavToDarkStyle;
- (void)setCustomTitleView:(id)arg1;
- (void)setCustonStyleWithParams:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)resetTitleColor;
- (void)resetNavBtnTheme;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reSetLeftButtonTitle;
- (void)setNavTextColor:(id)arg1;
- (void)viewNavThemeReset;
- (void)viewWillAppear:(_Bool)arg1;
- (void)styleChangedNotification:(id)arg1;
- (void)viewTapd:(id)arg1;
- (void)wordingPickerChanged:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)saveTextInputCacheWithChatModelType:(int)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
