//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEIMChatModel, AWEIMMessageStateView, AWEIMUnreadDotView, CAShapeLayer, UIImageView, UILabel, UIView;

@interface AWEIMChatListTableViewCell : UITableViewCell
{
    _Bool _hasSetupKVO;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    AWEIMMessageStateView *_messageStateView;
    UILabel *_messageLabel;
    UILabel *_timeLabel;
    AWEIMUnreadDotView *_unreadView;
    CAShapeLayer *_dotLayer;
    UIView *_sepView;
    UIImageView *_assistantLogoView;
    UIImageView *_challengeView;
    AWEIMChatModel *_chat;
}

+ (id)identifier;
@property(nonatomic) _Bool hasSetupKVO; // @synthesize hasSetupKVO=_hasSetupKVO;
@property(retain, nonatomic) AWEIMChatModel *chat; // @synthesize chat=_chat;
@property(retain, nonatomic) UIImageView *challengeView; // @synthesize challengeView=_challengeView;
@property(retain, nonatomic) UIImageView *assistantLogoView; // @synthesize assistantLogoView=_assistantLogoView;
@property(retain, nonatomic) UIView *sepView; // @synthesize sepView=_sepView;
@property(retain, nonatomic) CAShapeLayer *dotLayer; // @synthesize dotLayer=_dotLayer;
@property(retain, nonatomic) AWEIMUnreadDotView *unreadView; // @synthesize unreadView=_unreadView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) AWEIMMessageStateView *messageStateView; // @synthesize messageStateView=_messageStateView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupUI;
- (void)_refreshUserUI;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeKVOForChat:(id)arg1;
- (void)_addKVOForChat:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleTapAvatarGes:(id)arg1;
- (void)configWithChat:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

