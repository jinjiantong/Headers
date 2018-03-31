//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQBaseClusterMessageViewController.h>

#import <QQMainProject/SayHonestCardViewDelegate-Protocol.h>

@class NSString;
@protocol FriendSelectedChildViewDeletage;

@interface HSMessageBoxViewController : QQBaseClusterMessageViewController <SayHonestCardViewDelegate>
{
    _Bool _bSelectFriends;
    id <FriendSelectedChildViewDeletage> _delegate;
}

@property(nonatomic) id <FriendSelectedChildViewDeletage> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bSelectFriends; // @synthesize bSelectFriends=_bSelectFriends;
- (_Bool)isSupportRightDragToGoBack;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)sayHonestCardViewDidClick:(id)arg1;
- (void)refreshMessageViewData;
- (void)configMessageTableHeader;
- (id)ImageFromColor:(id)arg1 size:(struct CGSize)arg2;
- (void)cancelRedirect;
- (void)sayHonestRedPointDidUpdate:(id)arg1;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithModel:(id)arg1 topString:(id)arg2;
- (id)initWithModel:(id)arg1 topString:(id)arg2 bSelectFriends:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

