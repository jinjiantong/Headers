//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQSubViewVideoChatViewController.h>

#import <QQMainProject/MemberListViewControllerDelegate-Protocol.h>

@class NSString, NSTimer, QQGroupVideoMemberListViewController, UIViewController;

@interface QQGroupAudioChatViewController : QQSubViewVideoChatViewController <MemberListViewControllerDelegate>
{
    UIViewController *_userSummaryController;
    NSTimer *_checkMemberNameTimer;
    _Bool _isSelfManager;
    _Bool _isSelfRoomCreator;
    QQGroupVideoMemberListViewController *_memberListController;
}

- (void)ActionQQInviteJoinGroupResult:(id)arg1;
- (void)onWirelessRoutesAvailableDidChange:(id)arg1;
- (void)onMicOffByAdminFailNotify;
- (_Bool)canAddMem;
- (void)onSelfManagerUpdate;
- (void)TroopInfoUpdated:(id)arg1;
- (void)onSelfManagerChange:(id)arg1;
- (void)onMemberGetIn:(int)arg1 withGroupID:(long long)arg2 inMemArray:(id)arg3;
- (_Bool)handleNetState;
- (void)onRecvAllVideo;
- (void)onSmallViewTouch:(id)arg1 withType:(int)arg2;
- (void)checkAutoRequestAllView;
- (void)requestRemoteVideo;
- (void)onUpStageFail:(id)arg1;
- (void)onUpStageSuccess:(id)arg1;
- (void)OnStartRemoteVideoFail;
- (void)onDisableAddMem;
- (void)onAddMem;
- (void)onToggleCameraAction;
- (void)onCloseAction;
- (void)onManageRoom;
- (void)onCameraAction;
- (void)onDisableCameraAction;
- (void)onMuteAction;
- (void)onSpeakerAction;
- (void)onReturnAction;
- (void)onEnterBackGround;
- (void)viewController:(id)arg1 memberSelected:(unsigned long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)setupMultiMemberCell:(id)arg1 forUin:(unsigned long long)arg2;
- (void)startCheckMemberNameTimer;
- (void)checkMemberName:(id)arg1;
- (long long)numberOfItemInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)initControlPanel;
- (void)initShowPanel;
- (void)initMemberCollectionView;
- (void)initNotification;
- (void)updateAddButtonState;
- (void)updateManageButtonState;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRelationType:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

