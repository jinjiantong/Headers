//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "ARScanBusinessBarViewProtocol-Protocol.h"
#import "FalconARKitTargetDelegate-Protocol.h"

@class APScanTitleBar, APScanViewController, ARRenderResource, ARScanAnimationView, ARScanBusinessBarView, ARScanLogicModel, ARScanRpcEngine, AVAudioPlayer, FalconARKitRecManager, NSDictionary, NSString, UIButton;

@interface ARScanController : DTViewController <FalconARKitTargetDelegate, ARScanBusinessBarViewProtocol>
{
    _Bool _hasBarConfigure;
    APScanViewController *_parentScanController;
    NSDictionary *_launchParams;
    FalconARKitRecManager *_recManager;
    ARScanRpcEngine *_rpcEngine;
    AVAudioPlayer *_audioPlayer;
    ARScanLogicModel *_logicModel;
    ARRenderResource *_currentRenderResource;
    ARScanAnimationView *_scanAnimationView;
    APScanTitleBar *_customTitleBar;
    UIButton *_titleMapButton;
    UIButton *_titleTorchButton;
    ARScanBusinessBarView *_barView;
    NSString *_barActionUrl;
}

+ (void)removeFromScanControlller:(id)arg1;
+ (id)attachToController:(id)arg1;
@property(nonatomic) _Bool hasBarConfigure; // @synthesize hasBarConfigure=_hasBarConfigure;
@property(retain, nonatomic) NSString *barActionUrl; // @synthesize barActionUrl=_barActionUrl;
@property(retain, nonatomic) ARScanBusinessBarView *barView; // @synthesize barView=_barView;
@property(retain, nonatomic) UIButton *titleTorchButton; // @synthesize titleTorchButton=_titleTorchButton;
@property(retain, nonatomic) UIButton *titleMapButton; // @synthesize titleMapButton=_titleMapButton;
@property(retain, nonatomic) APScanTitleBar *customTitleBar; // @synthesize customTitleBar=_customTitleBar;
@property(retain, nonatomic) ARScanAnimationView *scanAnimationView; // @synthesize scanAnimationView=_scanAnimationView;
@property(retain, nonatomic) ARRenderResource *currentRenderResource; // @synthesize currentRenderResource=_currentRenderResource;
@property(retain, nonatomic) ARScanLogicModel *logicModel; // @synthesize logicModel=_logicModel;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) ARScanRpcEngine *rpcEngine; // @synthesize rpcEngine=_rpcEngine;
@property(retain, nonatomic) FalconARKitRecManager *recManager; // @synthesize recManager=_recManager;
@property(retain, nonatomic) NSDictionary *launchParams; // @synthesize launchParams=_launchParams;
@property(nonatomic) __weak APScanViewController *parentScanController; // @synthesize parentScanController=_parentScanController;
- (void).cxx_destruct;
- (_Bool)hasArEnvelopeFound;
- (void)playSound;
- (void)setupAudioPlayer;
- (void)didClicBusinessAvatarView;
- (void)routeArResourceSuccessWithResult:(id)arg1 recModel:(id)arg2;
- (void)routeArEnvelopeWithCloudId:(id)arg1 currentImage:(id)arg2 userLocation:(id)arg3 result:(id)arg4;
- (void)routeRecResourceSuccessWith:(id)arg1;
- (void)requestScanRouteWithCloudId:(id)arg1 currentImage:(id)arg2 withObjectName:(id)arg3 withRecModel:(id)arg4;
- (void)targetScanFailed:(id)arg1;
- (void)targetScanSucceed:(id)arg1;
- (void)onTargetTrack:(id)arg1 Target:(id)arg2;
- (void)onTargetRecognize:(id)arg1;
- (void)businessBarShouldHide:(id)arg1;
- (void)recievedScanCameraFrame:(id)arg1;
- (void)resumeCameraFrame;
- (void)restartARScan;
- (void)stopScan;
- (void)pauseARScan;
- (void)startARScan;
- (void)triggerStartARScan;
- (void)downloadRecognizePackage:(id)arg1 withMd5:(id)arg2;
- (void)requestLBSLocation;
- (void)requestBusinessEvent;
- (void)requestMarketingEvent;
- (void)resetTitleBarBackground;
- (void)hideTitleBarBackground;
- (void)updateTorchState;
- (void)toggleTorch;
- (void)gotoARMap;
- (void)viewWillLayoutSubviews;
- (void)setupScanView;
- (void)setupViews;
- (long long)customStatusBarStytle;
- (void)applicationEnterForground;
- (void)dealloc;
- (void)viewWillDestroy;
- (void)didTapBack;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)autohideNavigationBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
