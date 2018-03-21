//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AliHAPluginProtocol-Protocol.h"
#import "AliHAUserEventProtocol-Protocol.h"
#import "AliHAVCLifeProtocol-Protocol.h"

@class NSString, UIViewController;

@interface AliPerformanceWeexPlus : NSObject <AliHAPluginProtocol, AliHAVCLifeProtocol, AliHAUserEventProtocol>
{
    _Bool _isWeexLoadTimeCanUpdate;
    UIViewController *_curViewController;
}

+ (void)updateWeexReaderEndTime;
+ (id)shareInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) __weak UIViewController *curViewController; // @synthesize curViewController=_curViewController;
@property(nonatomic) _Bool isWeexLoadTimeCanUpdate; // @synthesize isWeexLoadTimeCanUpdate=_isWeexLoadTimeCanUpdate;
- (void).cxx_destruct;
- (void)onViewDidDisappear:(_Bool)arg1 viewController:(id)arg2;
- (void)onViewDidAppear:(_Bool)arg1 viewController:(id)arg2;
- (void)onViewDidLayoutSubviews:(id)arg1;
- (void)onPageChange:(long long)arg1 fromVC:(id)arg2 toVC:(id)arg3 args:(id)arg4;
- (void)onUserEvent:(id)arg1;
- (void)disabePlugin;
- (void)enablePlugin;
- (void)onPluginDestory;
- (void)onPluginInit:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
