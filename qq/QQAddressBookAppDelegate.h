//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <QQMainProject/PKPushRegistryDelegate-Protocol.h>
#import <QQMainProject/QQAudioSessionManagerWebViewDelegate-Protocol.h>
#import <QQMainProject/QQFriendSelectedViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQSafeModeViewControllerDelegate-Protocol.h>
#import <QQMainProject/SimpleAlertViewDelegate-Protocol.h>
#import <QQMainProject/SplashManagerDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UIApplicationDelegate-Protocol.h>
#import <QQMainProject/UITabBarControllerDelegate-Protocol.h>
#import <QQMainProject/UNUserNotificationCenterDelegate-Protocol.h>
#import <QQMainProject/WXApiDelegate-Protocol.h>

@class DiscussGroup, NSString, NSTimer, PassWordView, QQDBMigrationProgressWindow, QQNavigationController, QQPlatform, QQTabBarController, QUIAlertView, UIAlertView, UIApplication, UIImageView, UIWindow;

@interface QQAddressBookAppDelegate : UIResponder <SplashManagerDelegate, QQAudioSessionManagerWebViewDelegate, QQSafeModeViewControllerDelegate, UIApplicationDelegate, UIAlertViewDelegate, UITabBarControllerDelegate, SimpleAlertViewDelegate, QQFriendSelectedViewControllerDelegate, WXApiDelegate, PKPushRegistryDelegate, UNUserNotificationCenterDelegate>
{
    UIWindow *window;
    NSString *upgradeUrl;
    QQTabBarController *tabCtr;
    _Bool _isVideoViewController;
    _Bool _isShowingSdkUpdateAlertView;
    unsigned long long bgTask;
    NSTimer *_bgRuningTaskTimer;
    _Bool _isLaunchFromLocalPush;
    _Bool _RegisterForRemoteNotificationsSucc;
    QQDBMigrationProgressWindow *_DBMigrationProgressWindow;
    UIImageView *_fakeFlashScreen;
    UIApplication *_uiApplication;
    UIWindow *_passWindow;
    PassWordView *_passView;
    _Bool _passViewShow;
    _Bool _ifHasQQAlertView;
    NSString *_failUin;
    NSString *_failPass;
    _Bool _needEnterForeAction;
    _Bool _needEnterFinishAction;
    _Bool _disConnectAtBackground;
    _Bool _havegoto30SecondLogic;
    _Bool _isLoginInit;
    DiscussGroup *_discussGroup;
    _Bool _storyTabShown;
    QQPlatform *_QQPlatform;
    NSString *_param_sessionID;
    _Bool _shouldNotVibrate;
    _Bool _shouldNotPlaysound;
    _Bool _showPassAfterSplash;
    UIAlertView *_alertView;
    _Bool _deleteAccount;
    UIWindow *_guideWindow;
    _Bool _isGuideWindowShowed;
    _Bool _isGuideWindowBlock;
    _Bool _isDBMigrationBlock;
    _Bool _shouldStartLogin;
    _Bool _bDelayLoaded;
    _Bool _isLowMemory;
    QUIAlertView *_timAlertView;
    int _xo;
    _Bool deferredLoginProcess;
    _Bool _isRecentShow;
    _Bool _isActionSFinished;
    _Bool _isOpenUrl;
}

@property(nonatomic) _Bool isOpenUrl; // @synthesize isOpenUrl=_isOpenUrl;
@property(nonatomic) _Bool isDBMigrationBlock; // @synthesize isDBMigrationBlock=_isDBMigrationBlock;
@property(nonatomic) _Bool isGuideWindowBlock; // @synthesize isGuideWindowBlock=_isGuideWindowBlock;
@property(nonatomic) _Bool shouldStartLogin; // @synthesize shouldStartLogin=_shouldStartLogin;
@property(nonatomic) _Bool havegoto30SecondLogic; // @synthesize havegoto30SecondLogic=_havegoto30SecondLogic;
@property(nonatomic) _Bool isActionSFinished; // @synthesize isActionSFinished=_isActionSFinished;
@property(nonatomic) _Bool isLowMemory; // @synthesize isLowMemory=_isLowMemory;
@property(nonatomic) _Bool deleteAccount; // @synthesize deleteAccount=_deleteAccount;
@property(nonatomic) _Bool needEnterForeAction; // @synthesize needEnterForeAction=_needEnterForeAction;
@property(retain, nonatomic) NSString *param_sessionID; // @synthesize param_sessionID=_param_sessionID;
@property(nonatomic) _Bool ifHasQQAlertView; // @synthesize ifHasQQAlertView=_ifHasQQAlertView;
@property(nonatomic) _Bool needEnterFinishAction; // @synthesize needEnterFinishAction=_needEnterFinishAction;
@property(nonatomic) _Bool isVideoViewController; // @synthesize isVideoViewController=_isVideoViewController;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) _Bool isRecentShow; // @synthesize isRecentShow=_isRecentShow;
@property(nonatomic) _Bool deferredLoginProcess; // @synthesize deferredLoginProcess;
@property(nonatomic) _Bool passViewShow; // @synthesize passViewShow=_passViewShow;
@property(retain, nonatomic) NSString *upgradeUrl; // @synthesize upgradeUrl;
@property(retain, nonatomic) QQTabBarController *tabCtr; // @synthesize tabCtr;
@property(retain, nonatomic) UIWindow *window; // @synthesize window;
- (void)startFromSafeMode;
- (_Bool)isInSafeMode;
- (_Bool)needShowGesturePassView;
- (void)onSplashDismiss;
- (void)pushRegistry:(id)arg1 didInvalidatePushTokenForType:(id)arg2;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3;
- (void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;
- (void)onQQWalletNetworkFlowChanged:(id)arg1;
- (_Bool)webViewOnTop;
- (id)getChatViewControllerByUin:(id)arg1 chatModelType:(int)arg2;
- (void)qdPushChatViewController:(id)arg1 animated:(_Bool)arg2 shouldReturnToRoot:(_Bool)arg3;
- (void)pushChatViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)appIsChineselanguage;
- (void)didWindowHidden;
- (void)goToRecentViewController;
- (void)goToContactView;
- (void)showContactsTipWindow;
- (void)showQianhaiBankTipWindow:(id)arg1;
- (void)migrationDidFinished;
- (void)closeRecordVideoView;
- (void)receiveRemoteMsgGotoDetailNew:(id)arg1;
- (void)handleRemoteNotification:(id)arg1;
- (id)findAndReturnViewController:(Class)arg1;
- (void)savePasswordState;
- (void)reSetPassErrorState;
- (void)hiddePassWindow;
- (void)recoverPosition;
- (void)passWordViewDissLeft:(_Bool)arg1;
- (void)hidePassWindow;
- (void)passWordViewDiss:(_Bool)arg1;
- (void)passWordViewShowLeft;
- (void)passwordViewShow;
- (void)backgroudWithoutAnimation;
- (_Bool)showQQBrowser:(id)arg1 additionalParam:(id)arg2;
- (_Bool)showQQBrowser:(id)arg1;
- (id)encodeQQUrl:(id)arg1;
- (void)showLocalNotification:(int)arg1 sendUin:(id)arg2 content:(id)arg3 badgeCount:(int)arg4;
- (void)notifyReceiveMsgAndPlaySound:(id)arg1;
- (_Bool)checkPushMsgWhenPCOnline;
- (void)updatePushbannerStatus;
- (void)hiddenStatusOnlineView;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)startNetworkWork;
- (void)WillEnterForeground;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)showTouchIDNotification;
- (void)logNotifications:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)didClickNotification:(id)arg1 userInfo:(id)arg2;
- (void)_iphonePushSet;
- (void)processBackgroundVideoRequest;
- (void)bgRuningTaskTimerOut;
- (void)uploadPushNotifyState;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)processApplicationDidEnterBackground:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)dealloc;
- (void)showBadge:(id)arg1;
- (void)ActionOffLineMsg:(id)arg1;
- (void)simpleAlertViewDismiss:(id)arg1;
- (void)handleVersionUpdateURL:(id)arg1;
- (void)emotionAlertButtonClick:(id)arg1 atIndex:(int)arg2;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionOtherAppUpgrade:(id)arg1;
- (void)dismissTIMAlertView;
- (void)ActionSDKUpgrade:(id)arg1;
- (void)onResp:(id)arg1;
- (void)onReq:(id)arg1;
- (void)application:(id)arg1 didUpdateUserActivity:(id)arg2;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (_Bool)doApplication:(id)arg1 handleOpenURL:(id)arg2 sourceApplication:(id)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (_Bool)doApplication:(id)arg1 handleOpenURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)closeAllMaskView;
- (void)registerNotifications;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)cleanMemory;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (id)restoreSimplifiedInfo:(id)arg1;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)reLoadSkins:(_Bool)arg1;
- (void)applicationStatusBarTouchedAction;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)popViewControllers;
- (_Bool)isIphone4EarlyDevice;
- (void)restoreViewsOnAppWindow;
- (void)initUI;
- (void)initThumbPassword:(_Bool)arg1;
- (void)initSystemFaceResource;
- (void)printBatteryAndNetworkTrafficStats:(_Bool)arg1;
- (void)startLoginProcess;
- (void)checkLogFileSize:(id)arg1;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isAlertPush:(id)arg1;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (int)_infoStringConvertToType:(id)arg1;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)progressWindowWillDisappear:(id)arg1;
- (void)configSsoEnv;
- (void)startSecondLaunchStage;
- (void)endLaunchQQ;
- (_Bool)doLogin;
- (void)asyncLoadRecentLatestMessages;
- (void)changeAccount;
- (void)initInSplash;
- (void)initSingleton;
- (void)didFinishedLoadRecentMsgList;
- (void)doLoadRecentMsgList:(id)arg1;
- (void)showFakeSplashScreen;
- (_Bool)doDBMigration;
- (void)setPushForApplication:(id)arg1 withOptions:(id)arg2;
- (void)dismissGuideWindow;
- (void)doShowGuideWindow;
- (void)initAccounts;
- (void)startedWithCrashCheck;
- (void)initLog;
- (void)dismissFakeFlashScreen;
- (void)showFakeFlashScreenWithImage:(id)arg1;
- (void)delayLoad;
- (void)firstInitApplication:(id)arg1 withOptions:(id)arg2;
- (void)launchAfterGuideWindow;
- (_Bool)qq_application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)app:(id)arg1 initWithOption:(id)arg2;
- (id)init;
@property(readonly, nonatomic) _Bool storyTabSelected;
@property(readonly, nonatomic) QQNavigationController *storyTabController;
@property(readonly, nonatomic) _Bool storyTabShown;
- (void)setStoryTabShown:(_Bool)arg1;
- (void)configStoryTab;
- (void)configStoryTabForLogIn;
- (void)configReadInJoyTab;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

