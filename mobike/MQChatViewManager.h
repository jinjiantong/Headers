//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQChatViewConfig, MQChatViewController, MQChatViewStyle, NSArray;

@interface MQChatViewManager : NSObject
{
    MQChatViewController *chatViewController;
    MQChatViewConfig *chatViewConfig;
}

- (void).cxx_destruct;
- (void)setStatusBarStyle:(long long)arg1;
- (void)setMaxRecordDuration:(double)arg1;
- (void)setOutgoingMessageSoundFileName:(id)arg1;
- (void)setIncomingMessageSoundFileName:(id)arg1;
- (void)enableVoiceRecordBlurView:(_Bool)arg1;
- (void)enableChatWelcome:(_Bool)arg1;
- (void)enableBottomPullRefresh:(_Bool)arg1;
- (void)enableTopAutoRefresh:(_Bool)arg1;
- (void)enableRoundAvatar:(_Bool)arg1;
- (void)enableTopPullRefresh:(_Bool)arg1;
- (void)setNavTitleText:(id)arg1;
- (void)setNavLeftButton:(id)arg1;
- (void)setNavRightButton:(id)arg1;
- (void)setBubbleImageStretchInsets:(struct UIEdgeInsets)arg1;
- (void)setOutgoingBubbleImage:(id)arg1;
- (void)setIncomingBubbleImage:(id)arg1;
- (void)setResignKeyboardImage:(id)arg1 highlightedImage:(id)arg2;
- (void)setTextSenderImage:(id)arg1 highlightedImage:(id)arg2;
- (void)setVoiceSenderImage:(id)arg1 highlightedImage:(id)arg2;
- (void)setPhotoSenderImage:(id)arg1 highlightedImage:(id)arg2;
- (void)setoutgoingDefaultAvatarImage:(id)arg1;
- (void)setincomingDefaultAvatarImage:(id)arg1;
- (void)enableOutgoingAvatar:(_Bool)arg1;
- (void)enableIncomingAvatar:(_Bool)arg1;
- (void)setAgentName:(id)arg1;
- (void)setChatWelcomeText:(id)arg1;
- (void)setPullRefreshColor:(id)arg1;
- (void)setNavTitleColor:(id)arg1;
- (void)setNavigationBarColor:(id)arg1;
- (void)setNavigationBarTitleColor:(id)arg1;
- (void)setNavigationBarTintColor:(id)arg1;
- (void)setEventTextColor:(id)arg1;
- (void)enableMessageImageMask:(_Bool)arg1;
- (void)setOutgoingBubbleColor:(id)arg1;
- (void)setOutgoingMessageTextColor:(id)arg1;
- (void)setIncomingBubbleColor:(id)arg1;
- (void)setIncomingMessageTextColor:(id)arg1;
- (void)enableShowNewMessageAlert:(_Bool)arg1;
- (void)enableSendImageMessage:(_Bool)arg1;
- (void)enableSendVoiceMessage:(_Bool)arg1;
- (void)enableEventDispaly:(_Bool)arg1;
- (void)setMessageEmailRegex:(id)arg1;
- (void)setMessageLinkRegex:(id)arg1;
- (void)setMessageNumberRegex:(id)arg1;
@property(nonatomic) unsigned long long playMode; // @dynamic playMode;
- (void)setViewControllerPoint:(struct CGPoint)arg1;
- (void)setChatViewFrame:(struct CGRect)arg1;
- (void)hidesBottomBarWhenPushed:(_Bool)arg1;
- (void)disappearMQChatViewController;
- (void)updateNavAttributesWithViewController:(id)arg1 navigationController:(id)arg2 defaultNavigationController:(id)arg3 isPresentModalView:(_Bool)arg4;
- (id)createNavigationControllerWithWithAnimationSupport:(id)arg1 presentedViewController:(id)arg2;
- (void)presentOnViewController:(id)arg1 transiteAnimation:(unsigned long long)arg2;
- (id)presentMQChatViewControllerInViewController:(id)arg1;
- (id)pushMQChatViewControllerInViewController:(id)arg1;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;

// Remaining properties
@property(retain, nonatomic) MQChatViewStyle *chatViewStyle; // @dynamic chatViewStyle;
@property(nonatomic) _Bool keepAudioSessionActive; // @dynamic keepAudioSessionActive;
@property(retain, nonatomic) NSArray *preSendMessages; // @dynamic preSendMessages;
@property(nonatomic) unsigned long long recordMode; // @dynamic recordMode;

@end

