//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSKeyboardBarViewController.h"

#import "KSFeedKeyboardBarDelegate-Protocol.h"
#import "KSKeyboardBarScreenCoverViewDelegate-Protocol.h"
#import "KSMailDetailTableViewCellDelegate-Protocol.h"
#import "KSURLPortalAnnotation-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KSBlackListModel, KSFeedKeyboardBar, KSMailDetailTableDataSource, KSMailDetailTableViewCell, KSMessage, KSMessageOperationModel, KSTableView, NSIndexPath, NSNumber, NSString, NSTimer;

@interface KSMailDetailViewController : KSKeyboardBarViewController <KSURLPortalAnnotation, KSFeedKeyboardBarDelegate, KSKeyboardBarScreenCoverViewDelegate, UITableViewDelegate, KSMailDetailTableViewCellDelegate>
{
    _Bool _isOpenKeyboard;
    _Bool _canRefresh;
    _Bool _isLoadedModel;
    _Bool _isCopy;
    _Bool _isScrolling;
    NSNumber *_reportUserId;
    NSString *_reportLiveStreamId;
    NSNumber *_reportPhotoId;
    NSNumber *_refreshInterval;
    KSTableView *_tableView;
    KSFeedKeyboardBar *_messageKeyboardBar;
    KSMailDetailTableDataSource *_tableDataSource;
    double _currentKeyboardHeight;
    KSMailDetailTableViewCell *_errorCell;
    NSTimer *_pollingTimer;
    id _reachabilityToken;
    KSMessage *_currentMessage;
    NSIndexPath *_currentCellIndex;
    KSMessageOperationModel *_messageOperationModel;
    KSBlackListModel *_blackListModel;
}

+ (id)ks_portalViewControllerWithContext:(id)arg1;
+ (id)ks_portalPath;
@property(retain, nonatomic) KSBlackListModel *blackListModel; // @synthesize blackListModel=_blackListModel;
@property(retain, nonatomic) KSMessageOperationModel *messageOperationModel; // @synthesize messageOperationModel=_messageOperationModel;
@property(retain, nonatomic) NSIndexPath *currentCellIndex; // @synthesize currentCellIndex=_currentCellIndex;
@property(retain, nonatomic) KSMessage *currentMessage; // @synthesize currentMessage=_currentMessage;
@property(retain, nonatomic) id reachabilityToken; // @synthesize reachabilityToken=_reachabilityToken;
@property(retain, nonatomic) NSTimer *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool isCopy; // @synthesize isCopy=_isCopy;
@property(nonatomic) _Bool isLoadedModel; // @synthesize isLoadedModel=_isLoadedModel;
@property(retain, nonatomic) KSMailDetailTableViewCell *errorCell; // @synthesize errorCell=_errorCell;
@property(nonatomic) double currentKeyboardHeight; // @synthesize currentKeyboardHeight=_currentKeyboardHeight;
@property(retain, nonatomic) KSMailDetailTableDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(retain, nonatomic) KSFeedKeyboardBar *messageKeyboardBar; // @synthesize messageKeyboardBar=_messageKeyboardBar;
@property(retain, nonatomic) KSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSNumber *refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(nonatomic) _Bool canRefresh; // @synthesize canRefresh=_canRefresh;
@property(nonatomic) _Bool isOpenKeyboard; // @synthesize isOpenKeyboard=_isOpenKeyboard;
@property(retain, nonatomic) NSNumber *reportPhotoId; // @synthesize reportPhotoId=_reportPhotoId;
@property(retain, nonatomic) NSString *reportLiveStreamId; // @synthesize reportLiveStreamId=_reportLiveStreamId;
@property(retain, nonatomic) NSNumber *reportUserId; // @synthesize reportUserId=_reportUserId;
- (void).cxx_destruct;
- (id)ksuShowMetaData;
- (id)pageURL;
- (void)monitorNetworkState;
- (_Bool)ks_shouldHandleBackPanGestureRecognizer:(id)arg1;
- (id)messages;
- (void)sendMsg:(id)arg1;
- (void)reportWithMessage:(id)arg1;
- (void)didTapMessageOfMailDetailCell:(id)arg1;
- (void)mailDetailTableViewCell:(id)arg1 userId:(long long)arg2 name:(id)arg3;
- (void)keyboardBar:(id)arg1 changingHeight:(double)arg2;
- (_Bool)keyboardBar:(id)arg1 shouldReturn:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showMore;
- (void)back;
- (void)didReceiveShowTagViewControllerNotify:(id)arg1;
- (void)didTapURL:(id)arg1;
- (void)pollingToGetMessages;
- (void)polling;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)modelDidCancelLoad:(id)arg1;
- (void)model:(id)arg1 DidFailLoadWithError:(id)arg2;
- (void)modelDidFinishLoad:(id)arg1;
- (void)modelDidStartLoad:(id)arg1;
- (id)createModel;
- (_Bool)snapshotNavigationBarWhenDisappear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUid:(long long)arg1;
- (id)initWithUid:(long long)arg1 headUrl:(id)arg2 name:(id)arg3;
- (_Bool)ks_presentViewNeedUserAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
