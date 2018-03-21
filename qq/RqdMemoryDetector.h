//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface RqdMemoryDetector : NSObject
{
    _Bool _enableAppMemoryDetection;
    _Bool _observersInstalled;
    _Bool _didMemoryWarningReceived;
    _Bool _didCrashed;
    _Bool _didTerminated;
    _Bool _didBackground;
    _Bool _didQuit;
    NSDate *_deviceBootTime;
    NSString *_appPreviousVersion;
}

+ (id)sharedInstance;
+ (void)setAppCrashFlag;
+ (void)start;
+ (id)deviceBootTime;
+ (_Bool)isDebuggerAttached;
@property(copy, nonatomic) NSString *appPreviousVersion; // @synthesize appPreviousVersion=_appPreviousVersion;
@property(copy, nonatomic) NSDate *deviceBootTime; // @synthesize deviceBootTime=_deviceBootTime;
@property(nonatomic) _Bool didQuit; // @synthesize didQuit=_didQuit;
@property(nonatomic) _Bool didBackground; // @synthesize didBackground=_didBackground;
@property(nonatomic) _Bool didTerminated; // @synthesize didTerminated=_didTerminated;
@property(nonatomic) _Bool didCrashed; // @synthesize didCrashed=_didCrashed;
@property(nonatomic) _Bool didMemoryWarningReceived; // @synthesize didMemoryWarningReceived=_didMemoryWarningReceived;
@property(nonatomic) _Bool observersInstalled; // @synthesize observersInstalled=_observersInstalled;
@property(nonatomic, getter=isAppMemoryDetectionEnabled) _Bool enableAppMemoryDetection; // @synthesize enableAppMemoryDetection=_enableAppMemoryDetection;
- (void)didReceiveAppEnterForeground:(id)arg1;
- (void)didReceiveAppEnterBackground:(id)arg1;
- (void)didReceiveAppWillTerminate:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)readFlags;
- (_Bool)saveFlagsAsync:(_Bool)arg1;
- (void)startApplicationMonitoring;
- (_Bool)isDeviceReboot;
- (_Bool)isAppVersionUpgraded;
- (void)checkAndReportEvent;
- (void)dealloc;
- (id)init;

@end
