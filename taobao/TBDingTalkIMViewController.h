//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBIMUserServiceDelegate-Protocol.h"
#import "TBNavigatorBehaviorProtocol-Protocol.h"

@class MCChatPageConfig, MCDingTalkChatFragment, NSString, UIImageView;
@protocol MCSessionDO, TBIMUserServiceAdapter;

@interface TBDingTalkIMViewController : UIViewController <TBIMUserServiceDelegate, TBNavigatorBehaviorProtocol>
{
    NSString *_receiveId;
    MCChatPageConfig *_config;
    NSString *_sessionID;
    MCDingTalkChatFragment *_chatFragment;
    UIImageView *_headView;
    NSString *_navTitle;
    id <MCSessionDO> _session;
    id <TBIMUserServiceAdapter> _userService;
}

@property(nonatomic) __weak id <TBIMUserServiceAdapter> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <MCSessionDO> session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(retain, nonatomic) UIImageView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) MCDingTalkChatFragment *chatFragment; // @synthesize chatFragment=_chatFragment;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) MCChatPageConfig *config; // @synthesize config=_config;
@property(copy, nonatomic) NSString *receiveId; // @synthesize receiveId=_receiveId;
- (void).cxx_destruct;
- (void)UserChange:(id)arg1;
- (void)updateNavigationBarTitle:(id)arg1;
- (id)uniquePageIdForNavigatorBehavior;
- (void)enterStoreEvent:(id)arg1;
- (void)gotoChatProfile:(id)arg1;
- (void)setupNavigation;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initConfig;
- (void)initData;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

