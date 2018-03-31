//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQMulAVChatBaseViewController.h>

#import <QQMainProject/AVFilterScrViewDelegate-Protocol.h>
#import <QQMainProject/AVFunChatMgrDelegate-Protocol.h>
#import <QQMainProject/GAChatStateChangeProtocal-Protocol.h>
#import <QQMainProject/QQAVChatControlBarDelegate-Protocol.h>
#import <QQMainProject/QQAVControlPanelDelegate-Protocol.h>
#import <QQMainProject/QQAVFunChatBarDelegate-Protocol.h>
#import <QQMainProject/QQAVShowPanelRestructDelegate-Protocol.h>
#import <QQMainProject/QQAVTipsViewDelegate-Protocol.h>
#import <QQMainProject/QQAVVoiceSelecterViewDelegate-Protocol.h>
#import <QQMainProject/QQCollectionViewDataSource-Protocol.h>
#import <QQMainProject/QQCollectionViewDelegate-Protocol.h>
#import <QQMainProject/QUIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UIAccelerometerDelegate-Protocol.h>
#import <QQMainProject/VideoCaptureDelegate-Protocol.h>

@class AVFilterScrView, GroupAudioChatModel, NSMutableArray, NSString, NSTimer, QQAVControlPanel, QQAVNetworkView, QQAVShowPanelRestruct, QQAVTipsView, QQAVVoiceSelecterView, QUIAlertView, UIButton, UILabel, UIScrollView, UIView, VideoViewInfoModel, funchatGestureTips;

@interface QQGroupAVChatViewController : QQMulAVChatBaseViewController <QQAVVoiceSelecterViewDelegate, AVFilterScrViewDelegate, AVFunChatMgrDelegate, QQAVFunChatBarDelegate, GAChatStateChangeProtocal, VideoCaptureDelegate, QQAVShowPanelRestructDelegate, QQAVControlPanelDelegate, QQAVTipsViewDelegate, QQCollectionViewDataSource, QQCollectionViewDelegate, QQAVChatControlBarDelegate, QUIAlertViewDelegate, UIAccelerometerDelegate>
{
    int _relationType;
    int _businessType;
    unsigned long long _relationID;
    UIView *_backgroundView;
    UIView *_maskView;
    QQAVShowPanelRestruct *_showPanel;
    QQAVControlPanel *_controlPanel;
    UIButton *_mNoiseCtrlButton;
    UIButton *_recvAllVideoButton;
    QQAVNetworkView *_networkView;
    QQAVTipsView *_tipsView;
    GroupAudioChatModel *_GAChatModel;
    VideoViewInfoModel *_viewInfoModel;
    _Bool _isControllPanelShow;
    _Bool _isFunChatBarShow;
    int _isPreSpeakerState;
    int _isPreMicState;
    NSTimer *_netStatetimer;
    int _curNetType;
    int _isChangingNet;
    _Bool _isTwoCamera;
    _Bool _isOutChatting;
    _Bool _isOnBackGround;
    _Bool _isOpenCameraOnBackGround;
    _Bool _needSwitchCamera;
    _Bool _isCheckWiFi;
    _Bool _isExistMemAllIn;
    _Bool _isAlone;
    NSTimer *_showTipsTimer;
    NSTimer *_netChaneTimer;
    NSTimer *_noticeBarTimer;
    NSTimer *_checkGroupNameTimer;
    _Bool _isNetChaneSuc;
    _Bool _isRecvAllButtonNotWifi;
    _Bool _isRequestingRemoteView;
    _Bool _isRequestWaitingCallBack;
    _Bool _isNeedStartHideTimer;
    int _chatDurationPosition;
    _Bool _isNeedToHideNetworkView;
    _Bool _isRecvRemoteFrame;
    int _videoAbilityLevel;
    NSTimer *_recRemoteFrameTimer;
    _Bool _isShowMonitorInfo;
    UILabel *_fpsLabel;
    UIScrollView *_fpsScrollView;
    NSTimer *_monitorTimer;
    _Bool _isAudioInterrupt;
    _Bool _isCameraSwapAnimating;
    _Bool _isChangeToBigView;
    int _selfNetLevel;
    _Bool _returnButtonEnable;
    _Bool _isSwitchToBarAnimating;
    _Bool _isMemManage;
    _Bool _isMuteButtonHighlight;
    QUIAlertView *_audioHowlingAlert;
    float _beautifyLevel;
    _Bool _usedBeautify;
    int _beauty_server_ctl;
    NSString *_smotthingFilterPath;
    _Bool _isUseBeautify30;
    unsigned long long _detectedGestureCount;
    NSTimer *_detectGestureTimer;
    _Bool _isGestureing;
    _Bool _isGesturDecorating;
    funchatGestureTips *_gestureTipsView;
    _Bool _isSelfViewInshowBeforeInback;
    long long _bigViewUin;
    int _netSatus;
    int _voiceChangeType;
    int _lastAudioVoiceChangeType;
    int _lastVideoVoiceChangeType;
    NSMutableArray *_businessTypes;
    QQAVVoiceSelecterView *_voiceSelectView;
    double _voiceSelectedTime;
    AVFilterScrView *_filterSelectView;
    _Bool _didUseBeautify;
    _Bool _didUseVoiceChange;
    _Bool _didUseDecorate;
    _Bool _didUseFiler;
    int _nfps;
    NSString *_preset;
    _Bool _isGroupVideoStartUp;
    double _videoDegreen;
}

@property _Bool isGroupVideoStartUp; // @synthesize isGroupVideoStartUp=_isGroupVideoStartUp;
@property double videoDegreen; // @synthesize videoDegreen=_videoDegreen;
- (_Bool)isMultiAVoperation;
- (void)refreshTips;
- (void)onTipsViewFrameChanged;
- (void)initNoiseCtrlButtons;
- (void)enterBarckGroundClearTips;
- (id)getControlPanelTipsFont;
- (_Bool)isReminderMemberInOut;
- (void)controlPanelSetTimerHidden:(_Bool)arg1;
- (void)controlPanelResetTimer;
- (_Bool)controlPanelIsTimerStarted;
- (void)controlPanelShowTips:(id)arg1 withTipsTimer:(float)arg2;
- (void)controlPanelShowTips:(id)arg1;
- (void)setViewInfoModelBigAdIndex:(int)arg1;
- (void)hideButton:(int)arg1;
- (void)showButton:(int)arg1 frame:(int)arg2;
- (int)getButtonEnable:(int)arg1;
- (int)getButtonState:(int)arg1;
- (void)changeButtonEnable:(int)arg1 buttonEnable:(int)arg2;
- (void)changeButtonState:(int)arg1 buttonState:(int)arg2 buttonEnable:(int)arg3;
- (void)reportDC898:(id)arg1 EntryType:(long long)arg2 resv4:(id)arg3;
- (void)reportDC898:(id)arg1 resv3:(id)arg2 resv4:(id)arg3;
- (void)resetGestureTips:(_Bool)arg1;
- (void)checkGestureAfter2Seconds;
- (void)AVFunChatOneGestureEnded;
- (void)AVFunChatDetectedGesture;
- (void)sessionRuntimeError:(id)arg1;
- (void)onFloatChatWindowShow;
- (void)onFloatChatWindowHid;
- (_Bool)isFullScreenChatting;
- (_Bool)isFloatVideoChatting;
- (id)getChatWindow;
- (void)switchToBarAnimationEnd;
- (_Bool)onSwitchToBarAnimation;
- (void)switchToFullAnimationEnd;
- (void)switchToFloatState;
- (void)switchToFullState;
- (void)switchToBarState;
- (int)getPstnCount;
- (int)getChatDuration;
- (void)updateAVGQuality;
- (void)setMonitorShow:(_Bool)arg1;
- (void)relayoutAllView;
- (void)reAddAllView;
- (void)relayoutAllSmallView;
- (void)changeToBigViewEnd;
- (void)changeToBigViewWithUin:(unsigned long long)arg1 withType:(int)arg2;
- (id)getKey:(unsigned long long)arg1 withType:(int)arg2;
- (_Bool)isSelfViewInShow;
- (_Bool)isViewInShow;
- (_Bool)hasRemoteVideo;
- (void)checkVideoFloatState:(int)arg1;
- (void)checkVideoMemCount;
- (void)checkAutoRequestAllView;
- (void)requestAllView;
- (_Bool)isRecvFirstFrame;
- (void)onAllViewStop;
- (void)onViewStopWithUin:(unsigned long long)arg1 withType:(int)arg2;
- (void)checkVideoAbility;
- (void)updateCellStatus:(id)arg1;
- (void)onMemberAudioOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberAudioIn:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberPPTOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberPPTIn:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberScreenOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberScreenIn:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberVideoOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberVideoIn:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberGetOut:(int)arg1 withGroupID:(long long)arg2 inMemArray:(id)arg3;
- (void)onMemberGetIn:(int)arg1 withGroupID:(long long)arg2 inMemArray:(id)arg3;
- (void)onMemberStopSpeaking:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberStartSpeaking:(int)arg1 inMemArray:(id)arg2;
- (void)onVoiceLoopBack:(_Bool)arg1;
- (void)onVoiceLoopbackAction:(_Bool)arg1;
- (void)onVoiceChange;
- (void)voiceSelecterView:(id)arg1 voiceSelected:(int)arg2 enableLoopback:(_Bool)arg3;
- (void)onAVFunChatSelectVoiceType:(int)arg1 enableLoopback:(_Bool)arg2;
- (void)onVoiceChangeAction;
- (void)faceDetectHideTips;
- (void)faceDetectShowTips:(id)arg1 withDuration:(double)arg2;
- (void)onAVFunChatSelectDecorateItem:(id)arg1 bindFilterPath:(id)arg2;
- (void)onDecorateAction;
- (void)onAVFilterPanelItemUsed;
- (void)onFilterViewSingleTouch;
- (void)onSelectFilter:(id)arg1;
- (void)onPicFixValueEndChange;
- (void)onPicFixValueChange:(float)arg1;
- (void)onPicFixAction;
- (void)onShowSupport:(id)arg1;
- (_Bool)isSupportFilterAndDecorate;
- (id)getSmotthingFilter;
- (void)setSmotthing;
- (void)onAVFunChatClose;
- (void)onFunChatAction;
- (void)reportFunChatBeforeQuit;
- (void)reportBeadtyLevel;
- (void)reportFunChat:(id)arg1 withInfo:(id)arg2;
- (void)reportFunChat:(id)arg1;
- (void)initFunChat;
- (void)stopFunChat;
- (void)startFunChat;
- (void)onToggleCameraAction;
- (void)onCameraSwapAnimationDone;
- (void)onCloseAction;
- (void)changeToVideo;
- (void)changeToAudio;
- (void)goOffStageAction;
- (void)goOnStageAction;
- (void)onCameraActionEngine;
- (void)onCameraAction;
- (void)OnCamera:(id)arg1;
- (void)onDisableAddMem;
- (void)onAddMem;
- (void)onDisableCameraAction;
- (void)onMuteActionEngine;
- (void)onMuteAction;
- (void)OnMute:(id)arg1;
- (void)onDisableMuteAction;
- (void)showNotificationTipsView:(id)arg1;
- (void)callkitswitchtospeaker;
- (void)callkitSwicthToSpeakermode;
- (void)callkitswitchtohead;
- (void)callkitSwitchToHeadmode;
- (void)swithToSpeakerMode;
- (void)onSpeakerAction;
- (_Bool)checkSpeakerYes;
- (_Bool)customButton:(id)arg1;
- (void)AVControlbuttonPressed:(id)arg1;
- (void)showControlPanel:(_Bool)arg1;
- (void)resetControlPanelHideTimer;
- (void)onMonitorHide;
- (void)onMonitorShow;
- (void)onTipsViewShowTime:(id)arg1;
- (void)onTipsViewShowTips:(id)arg1;
- (void)removeMessageFromNoticeBar;
- (void)addMessageToNoticeBar:(id)arg1 withShowTime:(int)arg2;
- (void)openLocalVideo;
- (void)onResume;
- (void)onSuspend;
- (void)onControlPanelChangeToVideo:(_Bool)arg1;
- (void)onControlPanelShow:(_Bool)arg1;
- (void)forceSuspend;
- (_Bool)isPanelHideable;
- (void)onReturnAction;
- (void)switchToggleCameraButtonToEnableDelegate;
- (void)onVideoShowPanelMessageBarPressDelegate;
- (void)onOpenGLInitFail;
- (void)onImageDisplayDone;
- (void)onSmallViewTouchAnimationEnd;
- (void)onSmallViewTouch:(id)arg1 withType:(int)arg2;
- (id)getVideoViewInfoForUin:(id)arg1 withType:(int)arg2;
- (_Bool)isMulScreenMode;
- (id)getBigView;
- (id)getAllSmallView;
- (void)onVideoShowPanelOutAreaTouchDelegate;
- (int)getVideoViewIndexForUin:(id)arg1 withType:(int)arg2;
- (id)getVideoViewInfoAtIndex:(int)arg1;
- (void)onRecvAllVideo;
- (id)getNickName:(id)arg1;
- (void)onRotate:(id)arg1;
- (void)displayVideoFrame:(id)arg1;
- (void)onRecvVideoData:(char *)arg1 Length:(int)arg2 FrameAngle:(int)arg3;
- (void)onGroupNotificationVideoData:(id)arg1;
- (void)displayBeautifyFrame:(id)arg1;
- (void)beautifyProcessOnTransmitVideoData:(char *)arg1 BufferSize:(unsigned long long)arg2 Width:(unsigned long long)arg3 HeightY:(unsigned long long)arg4;
- (void)funchatProcessOnTransmitVideoData:(char *)arg1 toBuf:(char *)arg2 Width:(unsigned long long)arg3 HeightY:(unsigned long long)arg4;
- (void)transmitVideoData:(char *)arg1 BufferSize:(unsigned long long)arg2 Width:(unsigned long long)arg3 HeightY:(unsigned long long)arg4;
- (_Bool)detectBlankVideoFrame:(char *)arg1 BufferSize:(unsigned long long)arg2 width:(unsigned long long)arg3 HeightY:(unsigned long long)arg4;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)requestRemoteVideo;
- (long long)numberOfItemInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCollectionViewLayout;
- (void)setShowPanelLayout;
- (int)getChatState;
- (int)getBusinessType;
- (int)getRelationType;
- (unsigned long long)getRelationID;
- (_Bool)getIsFrontCameraState;
- (_Bool)getIsCameraState;
- (_Bool)getIsSpeakerState;
- (_Bool)getIsMicState;
- (void)delayRestartTRAEAudioWithMicState:(_Bool)arg1 withSpeakerState:(_Bool)arg2;
- (void)restartTRAEAudioWithMicState:(_Bool)arg1 withSpeakerState:(_Bool)arg2;
- (void)groupAudioInterruptionEnd;
- (void)groupAudioInterruptionStart;
- (_Bool)handleNetState;
- (void)NetChangeSuc;
- (void)onNetChangeEnd;
- (void)onNetChangeSuc;
- (void)StartNetChange:(id)arg1;
- (void)onStartNetChange:(id)arg1;
- (void)setPSWWording;
- (id)getTips:(id)arg1 withArray:(id)arg2;
- (id)getTips:(id)arg1 withAccountType:(int)arg2 withstate:(int)arg3;
- (void)showTipsChange:(id)arg1;
- (void)onTipsChange:(id)arg1;
- (void)OnStartRemoteVideoFail;
- (void)RecFirstFrameTimeout;
- (void)OnStartRemoteVideoSuccess;
- (void)onOffStageFail;
- (void)onOffStageSuccess;
- (void)onUpStageFail:(id)arg1;
- (void)closeLocalVideo;
- (void)onUpStageSuccess:(id)arg1;
- (void)onReopenCameraMul:(id)arg1;
- (void)onGroupNotificationCallback:(id)arg1;
- (void)onChangeDiscussNum;
- (void)switchSpeakerButtonStyle:(float)arg1;
- (void)switchSpeakerButtonStyleOnMain:(id)arg1;
- (void)confercence898DataReport;
- (void)onSelfInRoomOnmain;
- (_Bool)isStartWithVideo;
- (void)onEnterFrontGround;
- (void)onEnterBackGround;
- (void)PluggInHeadset:(id)arg1;
- (void)UnPluggingHeadset:(id)arg1;
- (void)checkProximityMonitoringEnabled;
- (void)clearProximityMonitoring;
- (void)sensorStateChange:(id)arg1;
- (_Bool)checkRemoteVideo;
- (_Bool)checkWiFi;
- (void)changeSpeakerState:(_Bool)arg1;
- (void)changeMicState:(_Bool)arg1;
- (id)cameraWithPosition:(long long)arg1;
- (void)receiveMessage;
- (void)showAudioHowlingAlert;
- (void)startGroupNameTimer;
- (void)setChatName:(id)arg1;
- (void)onUpDateDiscussName:(id)arg1;
- (void)checkGroupName;
- (void)dismissSelfViewController;
- (void)pushAVViewController:(id)arg1 withAnimateType:(int)arg2 withAnimationDuration:(float)arg3 withBarAnimation:(_Bool)arg4;
- (void)closeGroupAudioSessionEx;
- (void)closeGroupAudioSession;
- (void)dealloc;
- (void)unInitInterface;
- (void)unInitNofification;
- (void)stopOpenGL;
- (void)startOpenGL;
- (void)initVideo;
- (void)updateTipsLayoutForType:(int)arg1;
- (void)updateTipsColors;
- (void)settingTonesForAV;
- (void)updateNetworkLayout;
- (void)checkNetState;
- (void)checkMicAvailable;
- (void)initInterface;
- (void)assignPropertyToControlPanel;
- (void)initControlPanel;
- (void)initShowPanel;
- (void)initMemberCollectionView;
- (void)audioInterruption:(id)arg1;
- (void)initNotification;
- (void)handleUIApplicationWillChangeStatusBarFrameNotification:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRelationType:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

