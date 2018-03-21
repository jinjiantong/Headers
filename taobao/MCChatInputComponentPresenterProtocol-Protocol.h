//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCInputComponentPresenterProtocol-Protocol.h"

@class MCChatInputExIcon, UIButton, UIView;
@protocol MCChatInputComponentPresenterDelegate;

@protocol MCChatInputComponentPresenterProtocol <MCInputComponentPresenterProtocol>
@property(nonatomic) _Bool isHiddenToBottom;
@property(nonatomic) _Bool existPopWindow;
- (void)changeConfig:(unsigned long long)arg1 changeType:(unsigned long long)arg2;
- (void)updateExtensionViewIcon:(MCChatInputExIcon *)arg1;
- (void)updateCustom:(UIView *)arg1;
- (void)updateVoiceButton:(UIButton *)arg1;
- (void)updateFunctionSwitchButton:(UIButton *)arg1;
- (void)addDelegate:(id <MCChatInputComponentPresenterDelegate>)arg1;
@end
