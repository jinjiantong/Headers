//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSString;

@protocol QQLoginDeviceProtectTipsViewDelegate <NSObject>

@optional
- (void)onDeviceProtectTipsStartBtnAction:(NSString *)arg1 mobileType:(int)arg2 sessionId:(int)arg3;
- (void)onDeviceProtectTipsChangeBtnAction:(int)arg1;
- (void)onDeviceProtectTipsClose:(int)arg1;
@end
