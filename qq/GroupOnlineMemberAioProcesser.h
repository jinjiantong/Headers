//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/GroupOnlineMemberListViewDelegate-Protocol.h>
#import <QQMainProject/QQAIOEventDispatcherProtocol-Protocol.h>

@class GroupOnlineMemberListView, NSArray, NSString, OnlineTitleView, QQWeakContainer;

@interface GroupOnlineMemberAioProcesser : NSObject <GroupOnlineMemberListViewDelegate, QQAIOEventDispatcherProtocol>
{
    GroupOnlineMemberListView *_onlineMemberListView;
    _Bool _isShowingList;
    _Bool _isListAnimating;
    int _requestedTime;
    _Bool _isTitleAnimating;
    _Bool _isIconAnimating;
    _Bool _isAIOAppear;
    QQWeakContainer *_container;
    NSString *_groupCode;
    OnlineTitleView *_titleView;
    NSArray *_onlineList;
}

@property(nonatomic) _Bool isAIOAppear; // @synthesize isAIOAppear=_isAIOAppear;
@property(nonatomic) _Bool isIconAnimating; // @synthesize isIconAnimating=_isIconAnimating;
@property(nonatomic) _Bool isTitleAnimating; // @synthesize isTitleAnimating=_isTitleAnimating;
@property(retain, nonatomic) NSArray *onlineList; // @synthesize onlineList=_onlineList;
@property(retain, nonatomic) OnlineTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSString *groupCode; // @synthesize groupCode=_groupCode;
@property(retain, nonatomic) QQWeakContainer *container; // @synthesize container=_container;
- (void)didDismiss;
- (void)didPressAvatar;
- (_Bool)controller:(id)arg1 EndScrollToTopTableView:(id)arg2;
- (_Bool)controllerViewWillDisappear:(id)arg1;
- (_Bool)controllerViewWillAppear:(id)arg1;
- (_Bool)controller:(id)arg1 EndScrollBySetContenOffset:(id)arg2;
- (_Bool)controller:(id)arg1 EndDraggingInTableView:(id)arg2 speed:(double)arg3 byUser:(_Bool)arg4;
- (_Bool)controllerViewDidAppear:(id)arg1;
- (_Bool)controllerViewDidLoad:(id)arg1;
- (void)onExitAnonymousMode:(id)arg1;
- (void)onBannerTipViewShow:(id)arg1;
- (void)requestAioOnlineMemberWording;
- (void)onGetAioOnlineGroupMemberWording:(id)arg1;
- (void)onGetAioOnlineGroupMember:(id)arg1;
- (void)onGroupChatVCCustomTitleViewChange:(id)arg1;
- (void)cancelOnlineMemberListIndicator;
- (void)hideOnlineList;
- (void)showGuideView;
- (void)showOnlineList:(id)arg1;
- (void)setupListView;
- (void)stopJumpAnimation;
- (void)_jumpAnimation;
- (void)jumpAnimation;
- (void)hideOnlienNavigationTitle;
- (void)showOnlineNavigationTitle:(id)arg1;
- (void)setOnlineWording:(id)arg1;
- (void)tapSubTitle;
- (void)updateOnlineWording:(id)arg1;
- (id)createOnlineTitleView:(id)arg1;
- (id)init;
- (void)didShowKeyBoard:(id)arg1;
- (id)groupChatViewController;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

