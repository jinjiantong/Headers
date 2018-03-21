//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQBaseClusterMessageViewController.h>

#import <QQMainProject/HotChatFolderCellDelegate-Protocol.h>

@class NSString;

@interface HotChatFolderViewController : QQBaseClusterMessageViewController <HotChatFolderCellDelegate>
{
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)cell:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reportClickHotChatFolder;
- (_Bool)isSupportRightDragToGoBack;
- (void)setHotChatADDataHighPriority:(id)arg1;
- (void)refreshMessageViewData;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithModel:(id)arg1 topString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
