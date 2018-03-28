//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SSImpressionProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AWEVideoContainerCollectionView, AWEVideoContainerCollectionViewCell, AWEVideoDetailTracker, NSDictionary, NSIndexPath, NSString, TSVDetailViewModel, TSVVideoDetailPromptManager;
@protocol TSVShortVideoDataFetchManagerProtocol;

@interface AWEVideoContainerViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIScrollViewDelegate, UIGestureRecognizerDelegate, SSImpressionProtocol>
{
    _Bool _needCellularAlert;
    _Bool _loadingCellOnScreen;
    _Bool _firstPageShown;
    _Bool _cellularAlertHasShown;
    _Bool _needsLoadingCell;
    _Bool _showingNoMoreVideoIndicator;
    _Bool _scrollViewExceeedsBoundary;
    _Bool _preventVideoPlay;
    id <TSVShortVideoDataFetchManagerProtocol> _dataFetchManager;
    TSVDetailViewModel *_viewModel;
    NSDictionary *_commonTrackingParameter;
    CDUnknownBlockType _didDoubleTap;
    CDUnknownBlockType _wantToClosePage;
    CDUnknownBlockType _configureOverlayViewController;
    CDUnknownBlockType _loadMoreBlock;
    TSVVideoDetailPromptManager *_detailPromptManager;
    AWEVideoContainerCollectionView *_collectionView;
    AWEVideoDetailTracker *_tracker;
    NSIndexPath *_currentIndexPath;
    long long _initialItemIndex;
    AWEVideoContainerCollectionViewCell *_currentVideoCell;
    struct CGRect _customFrame;
}

@property(retain, nonatomic) AWEVideoContainerCollectionViewCell *currentVideoCell; // @synthesize currentVideoCell=_currentVideoCell;
@property(nonatomic) long long initialItemIndex; // @synthesize initialItemIndex=_initialItemIndex;
@property(nonatomic) _Bool preventVideoPlay; // @synthesize preventVideoPlay=_preventVideoPlay;
@property(nonatomic) _Bool scrollViewExceeedsBoundary; // @synthesize scrollViewExceeedsBoundary=_scrollViewExceeedsBoundary;
@property(nonatomic) _Bool showingNoMoreVideoIndicator; // @synthesize showingNoMoreVideoIndicator=_showingNoMoreVideoIndicator;
@property(nonatomic) _Bool needsLoadingCell; // @synthesize needsLoadingCell=_needsLoadingCell;
@property(nonatomic) _Bool cellularAlertHasShown; // @synthesize cellularAlertHasShown=_cellularAlertHasShown;
@property(copy, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) AWEVideoDetailTracker *tracker; // @synthesize tracker=_tracker;
@property(nonatomic) _Bool firstPageShown; // @synthesize firstPageShown=_firstPageShown;
@property(retain, nonatomic) AWEVideoContainerCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) struct CGRect customFrame; // @synthesize customFrame=_customFrame;
@property(retain, nonatomic) TSVVideoDetailPromptManager *detailPromptManager; // @synthesize detailPromptManager=_detailPromptManager;
@property(copy, nonatomic) CDUnknownBlockType loadMoreBlock; // @synthesize loadMoreBlock=_loadMoreBlock;
@property(nonatomic) _Bool loadingCellOnScreen; // @synthesize loadingCellOnScreen=_loadingCellOnScreen;
@property(nonatomic) _Bool needCellularAlert; // @synthesize needCellularAlert=_needCellularAlert;
@property(copy, nonatomic) CDUnknownBlockType configureOverlayViewController; // @synthesize configureOverlayViewController=_configureOverlayViewController;
@property(copy, nonatomic) CDUnknownBlockType wantToClosePage; // @synthesize wantToClosePage=_wantToClosePage;
@property(copy, nonatomic) CDUnknownBlockType didDoubleTap; // @synthesize didDoubleTap=_didDoubleTap;
@property(copy, nonatomic) NSDictionary *commonTrackingParameter; // @synthesize commonTrackingParameter=_commonTrackingParameter;
@property(retain, nonatomic) TSVDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <TSVShortVideoDataFetchManagerProtocol> dataFetchManager; // @synthesize dataFetchManager=_dataFetchManager;
- (void).cxx_destruct;
- (id)exitScreenshotView;
- (void)pauseCurrentVideo;
- (void)playCurrentVideo;
- (void)alertCeullarPlayWithCompletion:(CDUnknownBlockType)arg1;
- (void)playCurrentVideoIfAllowed;
- (void)updateLoadingCellOnScreen;
- (void)needRerecordImpressions;
- (void)sendImpressionWithVideoDetail:(id)arg1 status:(long long)arg2;
- (void)endLastImpression;
- (void)beginFirstImpression;
- (void)processImpression;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)sendStayPageTracking;
- (void)sendVideoOverTracking;
- (void)sendGoDetailAndVideoPlay;
- (void)didSwitchToCurrentVideoCell;
- (void)endCurrentVideoCellStatus;
- (_Bool)canPullToClose;
- (long long)currentItemIndex;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)showSwipePromotionIfNecessaryWithIndex:(long long)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)showPromotionIfNecessaryWithIndex:(long long)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)deleteItemAtCurrentIndex;
- (void)refreshCurrentModel;
- (void)replaceDataFetchManager:(id)arg1;
- (void)reloadData;
- (void)refresh;
- (void)viewWillAppear:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (void)skStoreViewDidDisappear:(id)arg1;
- (void)skStoreViewDidAppear:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
