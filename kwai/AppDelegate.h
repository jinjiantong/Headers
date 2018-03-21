//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "GInsightSDKDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class KSANRMonitor, KSHomeViewController, KSMenuViewController, NSDate, NSMutableDictionary, NSString, UIWindow;

@interface AppDelegate : UIResponder <UIApplicationDelegate, UNUserNotificationCenterDelegate, GInsightSDKDelegate>
{
    _Bool _logIsReturn;
    NSString *_logPrevURLString;
    NSDate *_logPrevViewAppearDate;
    KSHomeViewController *_homeViewController;
    NSMutableDictionary *_logPrevLeaveDetail;
    UIWindow *_window;
    KSANRMonitor *_anrMonitor;
    KSMenuViewController *_menuViewController;
    NSDate *_useStart;
    NSString *_openFrom;
}

@property(retain, nonatomic) NSString *openFrom; // @synthesize openFrom=_openFrom;
@property(retain, nonatomic) NSDate *useStart; // @synthesize useStart=_useStart;
@property(retain, nonatomic) KSMenuViewController *menuViewController; // @synthesize menuViewController=_menuViewController;
@property(retain, nonatomic) KSANRMonitor *anrMonitor; // @synthesize anrMonitor=_anrMonitor;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) NSMutableDictionary *logPrevLeaveDetail; // @synthesize logPrevLeaveDetail=_logPrevLeaveDetail;
@property(retain, nonatomic) KSHomeViewController *homeViewController; // @synthesize homeViewController=_homeViewController;
@property(retain, nonatomic) NSDate *logPrevViewAppearDate; // @synthesize logPrevViewAppearDate=_logPrevViewAppearDate;
@property(retain, nonatomic) NSString *logPrevURLString; // @synthesize logPrevURLString=_logPrevURLString;
@property(nonatomic) _Bool logIsReturn; // @synthesize logIsReturn=_logIsReturn;
- (void).cxx_destruct;
- (void)relogin;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)pauseGPUQueue;
- (void)resumeGPUQueue;
- (void)statusBarTouchedAction;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)dealloc;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)rotateTopViewControllerToPortrait:(CDUnknownBlockType)arg1;
- (id)settingModel;
- (_Bool)supportFastLaunch:(id)arg1;
- (void)p_handleRemoteNotification:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)registerRemoteNotificationWithPermisionAuthorized;
- (void)registerRemoteNotificationIfNeed;
- (void)setupUserNotification;
- (void)GInsightSDKDidReceiveError:(id)arg1;
- (void)GInsightSDKDidReceiveGiuid:(id)arg1;
- (void)startGInsight;
- (void)showImportFailToast;
- (void)importMediaError:(id)arg1;
- (void)shareImageWithCacheKey:(id)arg1 sourceApplication:(id)arg2;
- (void)tryShareVideoOfUrl:(id)arg1 sourceApplication:(id)arg2;
- (id)videoFileUrlFromPasteboard:(id)arg1;
- (void)importFileOfUrl:(id)arg1 sourceApplication:(id)arg2;
- (void)importMediaFromPastboardWithOpenUrl:(id)arg1 sourceApplication:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
