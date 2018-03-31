//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "XSearchDelegateWaterfallLayout-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, XSearchContext, XSearchMoreDataCell, XSearchService, XSearchUICollectionView, XSearchWaterfallLayout;
@protocol XSearchCollectionViewComponentDelegate;

@interface XSearchCollectionViewComponent : NSObject <XSearchDelegateWaterfallLayout, UICollectionViewDataSource>
{
    _Bool _loadMoreFailed;
    _Bool _isLoadingMore;
    long long _layoutStyle;
    XSearchUICollectionView *_collectionView;
    id <XSearchCollectionViewComponentDelegate> _delegate;
    XSearchContext *_searchContext;
    XSearchWaterfallLayout *_collectionViewLayout;
    XSearchService *_searchService;
    NSMutableDictionary *_weexCellRegisterInfo;
    NSMutableDictionary *_cellHeightCache;
    double _reservedHeight;
    NSMutableArray *_itemList;
    NSObject *_itemFooter;
    XSearchMoreDataCell *_savedMoreCell;
    id _bizVCDelegate;
}

@property(nonatomic) __weak id bizVCDelegate; // @synthesize bizVCDelegate=_bizVCDelegate;
@property(retain, nonatomic) XSearchMoreDataCell *savedMoreCell; // @synthesize savedMoreCell=_savedMoreCell;
@property(retain, nonatomic) NSObject *itemFooter; // @synthesize itemFooter=_itemFooter;
@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
@property(nonatomic) double reservedHeight; // @synthesize reservedHeight=_reservedHeight;
@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(nonatomic) _Bool loadMoreFailed; // @synthesize loadMoreFailed=_loadMoreFailed;
@property(retain, nonatomic) NSMutableDictionary *cellHeightCache; // @synthesize cellHeightCache=_cellHeightCache;
@property(retain, nonatomic) NSMutableDictionary *weexCellRegisterInfo; // @synthesize weexCellRegisterInfo=_weexCellRegisterInfo;
@property(retain, nonatomic) XSearchService *searchService; // @synthesize searchService=_searchService;
@property(retain, nonatomic) XSearchWaterfallLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(nonatomic) __weak XSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(nonatomic) __weak id <XSearchCollectionViewComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XSearchUICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
- (_Bool)isOnScreen:(id)arg1;
- (void)playVisibleVideo;
- (void)hideCellMask;
- (void)scrollToTop;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)loadMoreDataFailed:(id)arg1;
- (void)moreDataLoaded;
- (void)loadMoreData;
- (void)loadMoreDataFromCell:(id)arg1;
- (void)preLoadMoreDataAtIndex:(long long)arg1;
- (_Bool)hasMore;
- (void)reloadData;
- (void)reloadCollectionView;
- (void)setData;
- (void)reloadItem;
- (void)turnLayout:(id)arg1;
- (void)setPlaceHolderHeight:(double)arg1;
- (void)setCollectionViewLayoutProperty:(long long)arg1;
- (void)initCollectionView:(struct CGRect)arg1;
- (void)initCollectionView;
- (void)initData;
- (void)dealloc;
- (id)initWithSearchService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

