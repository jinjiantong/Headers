//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AliHAAppLifeProtocol-Protocol.h"
#import "AliHAPluginProtocol-Protocol.h"
#import "AliHAUserEventProtocol-Protocol.h"
#import "AliHAVCLifeProtocol-Protocol.h"

@class AliHAControllerMemoryManager, AliHAImageMemoryManager, AliHASmartCPUExceptionMonitor, AliHASmartMemoryMeasure, AliHASmartMemoryPressureManager, NSArray, NSString;

@interface AliHASmartRecovery : NSObject <AliHAPluginProtocol, AliHAVCLifeProtocol, AliHAAppLifeProtocol, AliHAUserEventProtocol>
{
    _Bool _enableMemoryWarningCritical;
    NSArray *_controllerBlackNameList;
    AliHASmartMemoryMeasure *_memoryMeasure;
    AliHAImageMemoryManager *_imageMemoryManager;
    AliHASmartCPUExceptionMonitor *_cpuExceptionMonitor;
    AliHASmartMemoryPressureManager *_memoryPressureManager;
    AliHAControllerMemoryManager *_controllerMemoryManager;
}

@property(nonatomic) _Bool enableMemoryWarningCritical; // @synthesize enableMemoryWarningCritical=_enableMemoryWarningCritical;
@property(retain, nonatomic) AliHAControllerMemoryManager *controllerMemoryManager; // @synthesize controllerMemoryManager=_controllerMemoryManager;
@property(retain, nonatomic) AliHASmartMemoryPressureManager *memoryPressureManager; // @synthesize memoryPressureManager=_memoryPressureManager;
@property(retain, nonatomic) AliHASmartCPUExceptionMonitor *cpuExceptionMonitor; // @synthesize cpuExceptionMonitor=_cpuExceptionMonitor;
@property(retain, nonatomic) AliHAImageMemoryManager *imageMemoryManager; // @synthesize imageMemoryManager=_imageMemoryManager;
@property(retain, nonatomic) AliHASmartMemoryMeasure *memoryMeasure; // @synthesize memoryMeasure=_memoryMeasure;
@property(copy, nonatomic) NSArray *controllerBlackNameList; // @synthesize controllerBlackNameList=_controllerBlackNameList;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onApplicationResignActive;
- (void)onApplicationBecomeActive;
- (void)onApplicationEnterBackground;
- (void)onApplicationEnterForeground;
- (void)onReceiveMemoryWarning;
- (void)handleMemoryWarning:(_Bool)arg1;
- (void)onViewDidDisappear:(_Bool)arg1 viewController:(id)arg2;
- (void)onViewDidLayoutSubviews:(id)arg1;
- (void)onViewWillAppear:(_Bool)arg1 viewController:(id)arg2;
- (void)onViewDidAppear:(_Bool)arg1 viewController:(id)arg2;
- (void)onViewDidLoad:(id)arg1;
- (void)onPageChange:(long long)arg1 fromVC:(id)arg2 toVC:(id)arg3 args:(id)arg4;
- (void)onPluginDestory;
- (void)onUserSwipe;
- (void)onUserTap;
- (void)onUserEvent;
- (void)onPluginInit:(id)arg1;
- (void)aliha_EnableMemoryMeasureNotifyForDebug:(_Bool)arg1;
- (void)aliha_OpenMemoryMeasureForDebug;
- (void)aliha_enableDebugMode;
- (void)aliha_disableMemoryMeasureForDebug:(id)arg1;
- (void)aliha_enableMemoryMeasureForDebug:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

