//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/CmshowQAVRoomDelegate-Protocol.h>
#import <QQMainProject/QAVLocalVideoDelegate-Protocol.h>
#import <QQMainProject/QAVRemoteVideoDelegate-Protocol.h>
#import <QQMainProject/QQAudioSessionManagerDelegate-Protocol.h>
#import <QQMainProject/UITextViewDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SpriteShareViewController, UIButton, UITextView, sa_gl_view;
@protocol CmShowGameViewDelegate;

@interface CmShowGameView : UIView <CmshowQAVRoomDelegate, QAVLocalVideoDelegate, QAVRemoteVideoDelegate, QQAudioSessionManagerDelegate, UITextViewDelegate>
{
    _Bool _onClose;
    int _lastNetworkState;
    UITextView *textField;
    double _enterTime;
    UIView *_toolBar;
    UIButton *_confirmButton;
    _Bool _isCreator;
    _Bool _qavCameraSwitch;
    _Bool _qavSpeakerSwitch;
    _Bool _qavMicSwitch;
    _Bool _qavIsWorking;
    _Bool _qavHasAudioSession;
    _Bool _qavUseAudioSession;
    _Bool _isPushed;
    _Bool _hasGivenGameOpenKey;
    int _aioType;
    unsigned int _gameId;
    int _gamePreviewState;
    int _gameSoundSwitch;
    int _gameMode;
    int _fromType;
    float _qavBeauty;
    int _screenMode;
    int _gameOrientation;
    int _src;
    id <CmShowGameViewDelegate> _delegate;
    sa_gl_view *_gameGLView;
    unsigned long long _roomId;
    NSString *_gameVersion;
    NSString *_gameST;
    NSString *_gameSTKey;
    NSString *_openId;
    NSString *_sessionId;
    NSMutableArray *_shareSessionIdArray;
    NSString *_gameTips;
    NSString *_extraStr;
    NSString *_gameParamStr;
    NSString *_openKey;
    SpriteShareViewController *_shareVC;
    NSMutableArray *_qavCurrentIDList;
    NSMutableArray *_qavWatchIDList;
    NSDictionary *_qavParam;
    NSMutableArray *_fetchTinyIDs;
    NSMutableDictionary *_tinyidsMap;
    NSMutableDictionary *_identifiersMap;
    double _lastSendMsgTime;
    double _lastSendShareMsgTime;
    NSMutableArray *_muArrGameAsyncGetDataReq;
}

@property(nonatomic) _Bool hasGivenGameOpenKey; // @synthesize hasGivenGameOpenKey=_hasGivenGameOpenKey;
@property(retain, nonatomic) NSMutableArray *muArrGameAsyncGetDataReq; // @synthesize muArrGameAsyncGetDataReq=_muArrGameAsyncGetDataReq;
@property(nonatomic) _Bool isPushed; // @synthesize isPushed=_isPushed;
@property(nonatomic) int src; // @synthesize src=_src;
@property(nonatomic) double lastSendShareMsgTime; // @synthesize lastSendShareMsgTime=_lastSendShareMsgTime;
@property(nonatomic) double lastSendMsgTime; // @synthesize lastSendMsgTime=_lastSendMsgTime;
@property(nonatomic) int gameOrientation; // @synthesize gameOrientation=_gameOrientation;
@property(nonatomic) int screenMode; // @synthesize screenMode=_screenMode;
@property(nonatomic) _Bool qavUseAudioSession; // @synthesize qavUseAudioSession=_qavUseAudioSession;
@property(nonatomic) NSMutableDictionary *identifiersMap; // @synthesize identifiersMap=_identifiersMap;
@property(nonatomic) NSMutableDictionary *tinyidsMap; // @synthesize tinyidsMap=_tinyidsMap;
@property(nonatomic) NSMutableArray *fetchTinyIDs; // @synthesize fetchTinyIDs=_fetchTinyIDs;
@property(nonatomic) NSDictionary *qavParam; // @synthesize qavParam=_qavParam;
@property(nonatomic) float qavBeauty; // @synthesize qavBeauty=_qavBeauty;
@property(nonatomic) _Bool qavHasAudioSession; // @synthesize qavHasAudioSession=_qavHasAudioSession;
@property(nonatomic) _Bool qavIsWorking; // @synthesize qavIsWorking=_qavIsWorking;
@property(nonatomic) _Bool qavMicSwitch; // @synthesize qavMicSwitch=_qavMicSwitch;
@property(nonatomic) _Bool qavSpeakerSwitch; // @synthesize qavSpeakerSwitch=_qavSpeakerSwitch;
@property(nonatomic) _Bool qavCameraSwitch; // @synthesize qavCameraSwitch=_qavCameraSwitch;
@property(nonatomic) NSMutableArray *qavWatchIDList; // @synthesize qavWatchIDList=_qavWatchIDList;
@property(nonatomic) NSMutableArray *qavCurrentIDList; // @synthesize qavCurrentIDList=_qavCurrentIDList;
@property(retain, nonatomic) SpriteShareViewController *shareVC; // @synthesize shareVC=_shareVC;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(retain, nonatomic) NSString *openKey; // @synthesize openKey=_openKey;
@property(retain, nonatomic) NSString *gameParamStr; // @synthesize gameParamStr=_gameParamStr;
@property(retain, nonatomic) NSString *extraStr; // @synthesize extraStr=_extraStr;
@property(nonatomic) int gameMode; // @synthesize gameMode=_gameMode;
@property(retain, nonatomic) NSString *gameTips; // @synthesize gameTips=_gameTips;
@property(nonatomic) int gameSoundSwitch; // @synthesize gameSoundSwitch=_gameSoundSwitch;
@property(nonatomic) int gamePreviewState; // @synthesize gamePreviewState=_gamePreviewState;
@property(retain, nonatomic) NSMutableArray *shareSessionIdArray; // @synthesize shareSessionIdArray=_shareSessionIdArray;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *gameSTKey; // @synthesize gameSTKey=_gameSTKey;
@property(retain, nonatomic) NSString *gameST; // @synthesize gameST=_gameST;
@property(retain, nonatomic) NSString *gameVersion; // @synthesize gameVersion=_gameVersion;
@property(nonatomic) unsigned long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) unsigned int gameId; // @synthesize gameId=_gameId;
@property(nonatomic) _Bool isCreator; // @synthesize isCreator=_isCreator;
@property(nonatomic) int aioType; // @synthesize aioType=_aioType;
@property(retain, nonatomic) sa_gl_view *gameGLView; // @synthesize gameGLView=_gameGLView;
@property(nonatomic) id <CmShowGameViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)selectPhoto:(struct bkImageSelector *)arg1;
- (void)reportGameTime;
- (void)recordTime;
- (_Bool)canSSORequestCallback;
- (void)handleMinimize;
- (void)handleMaximize;
- (void)qqCallComming:(id)arg1;
- (void)onForeOffLine:(id)arg1;
- (void)changeAccount:(id)arg1;
- (void)loginFailed_v2:(id)arg1 andRst:(int)arg2 withErrInfo:(id)arg3 tag:(long long)arg4;
- (void)loginSuccessSig_v2:(id)arg1 andSig:(id)arg2 andBaseInfo:(id)arg3 tag:(long long)arg4;
- (void)passToEngineOpenKey:(id)arg1 appId:(int)arg2;
- (id)keyForOpenKeyTimestampByAppId:(int)arg1;
- (id)keyForOpenKeyByAppId:(int)arg1;
- (void)requestGetOpenKeyByAppId:(int)arg1;
- (int)appidForRequestOpenKey;
- (void)callBackToBK:(id)arg1 retCode:(int)arg2 jsonStr:(id)arg3;
- (void)ssoSendByLocal:(id)arg1 dataChar:(const char *)arg2;
- (void)ssoDrawFirstFrame:(id)arg1;
- (void)ssoGetOpenKey:(id)arg1;
- (void)handleMSFNetworkApnStateNotification:(id)arg1;
- (id)capture;
- (void)ssoSharePic:(id)arg1;
- (void)ssoOpenWebViewWithoutUrl:(id)arg1;
- (void)ssoOpenTransparentWebView:(id)arg1;
- (void)ssoOpenWebView:(id)arg1;
- (void)ssoGameToJsEvent:(id)arg1;
- (void)onReceiveJsEvent:(id)arg1;
- (void)ssoOpenPA:(id)arg1;
- (void)ssoCheckPAState:(id)arg1;
- (void)ssoShareArkMsg:(id)arg1;
- (void)ssoSendGameMsg:(id)arg1;
- (void)ssoInviteFriends:(id)arg1;
- (void)ssoShareActionSheet:(id)arg1;
- (void)ssoNewMessage:(id)arg1;
- (void)ssoGetSeverIp:(id)arg1;
- (void)ssoSaveRecommendIp:(id)arg1;
- (void)ssoGameTips:(id)arg1;
- (void)ssoGameStart:(id)arg1;
- (void)ssoGameReady:(id)arg1;
- (void)ssoGameClose:(id)arg1;
- (void)ssoGamePackUp:(id)arg1;
- (void)sendSSOCallBack:(id)arg1 param:(id)arg2;
- (void)ssoGetDressPathWith:(id)arg1 openId:(id)arg2;
- (void)ssoGetDressPath:(id)arg1;
- (void)ssoGetActionData:(id)arg1;
- (void)joinRoomNeed:(id)arg1 jsonDic:(id)arg2 aioType:(int)arg3 fromType:(int)arg4;
- (void)cmShowGameViewJoinRoom:(id)arg1;
- (void)ssoJoinRoom:(id)arg1;
- (void)ssoCreateRoom:(id)arg1;
- (void)asyncGetNickNameByOpenID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asyncGetAvatarByOpenID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onApplicationDidBecomeActive;
- (void)onApplicationWillResignActive;
- (void)onReceiveRemoteMsgGotoDetailNew:(id)arg1;
- (void)initGameGlobalData:(id)arg1;
- (id)getServerIpPort;
- (id)dicToJSON:(id)arg1;
- (void)addCmShowGameNSNotification;
- (void)dealloc;
- (void)setGLViewDirectorHidden:(_Bool)arg1;
- (void)loadGame;
- (_Bool)initCmShowGLView;
- (void)textViewDidChange:(id)arg1;
- (void)onEditorClick;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)textField;
- (void)showKeyboardEditor;
- (id)spriteReadOfflineImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)shouldReleaseAudioDevice;
- (void)releaseAudioDevice;
- (_Bool)requestAudioDevice;
- (void)onIntterruptEnd;
- (void)onDeactiveWithSystem;
- (void)onAudioSessionDeactive;
- (void)onIntterruptBegin;
- (void)onAudioSessionActive;
- (void)OnVideoPreview:(id)arg1;
- (void)OnLocalVideoRawSampleBuf:(struct opaqueCMSampleBuffer *)arg1 result:(struct opaqueCMSampleBuffer **)arg2;
- (void)OnLocalVideoPreProcess:(id)arg1;
- (void)OnLocalVideoPreview:(id)arg1;
- (void)fetchUserAccInfoByTinyIDs:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)CmshowQAVOnSemiAutoRecvCameraVideo:(id)arg1;
- (void)CmshowQAVOnEndpointsUpdateInfo:(long long)arg1 endpointlist:(id)arg2;
- (void)CmshowQAVOnRoomDisconnect:(int)arg1 WithErrinfo:(id)arg2;
- (void)CmshowQAVOnExitRoomComplete;
- (void)CmshowQAVOnEnterRoomComplete:(int)arg1 WithErrinfo:(id)arg2;
- (id)dictPoint:(id)arg1 tinyId:(id)arg2 identifier:(id)arg3;
- (id)dictPoint:(id)arg1 identifier:(id)arg2;
- (id)dictPoint:(id)arg1 uin:(id)arg2 openId:(id)arg3;
- (void)cancelRequest;
- (void)updateVideoRequestList:(id)arg1;
- (void)updateRequestList:(id)arg1 srcTypeList:(id)arg2;
- (void)changeAVControlRole:(id)arg1;
- (void)ssoInitAvRoom:(id)arg1;
- (void)setAudioRoomSpeaker:(id)arg1;
- (void)setAudioRoomMic:(id)arg1;
- (void)exitAudioRoom;
- (void)ssoExitAudioRoom:(id)arg1;
- (void)enterAudioRoom:(id)arg1;
- (void)watchRemoteVideo:(id)arg1;
- (void)setRemoteVideo:(id)arg1;
- (void)setBeauty:(id)arg1;
- (void)setCameraEnable:(id)arg1;
- (void)setCameraSwitch:(id)arg1;
- (void)isFrontCamera:(id)arg1;
- (void)resumeQAVSetting;
- (void)pauseQAVSetting;
- (void)handleQAVResume;
- (void)handleQAVPause:(_Bool)arg1;
- (void)handleQAVShow;
- (void)handleQAVHide;
- (void)handleQAVClean;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

