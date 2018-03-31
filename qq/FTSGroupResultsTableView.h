//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class FTSDynamicSearchResultsListViewModel, FTSEntranceViewController, NSMutableArray, NSString;
@protocol FTSGroupResultsDelegate;

@interface FTSGroupResultsTableView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_ftsGroupResultsList;
    _Bool _isNeedReportStayTime;
    FTSDynamicSearchResultsListViewModel *_ftsDynamicSearchResultsListViewModel;
    double _lastOffsetY;
    int _pbArticleSource;
    id <FTSGroupResultsDelegate> _ftsGroupResultsDelegate;
    FTSEntranceViewController *_ftsEntranceViewController;
}

@property(nonatomic) __weak FTSEntranceViewController *ftsEntranceViewController; // @synthesize ftsEntranceViewController=_ftsEntranceViewController;
@property(nonatomic) int pbArticleSource; // @synthesize pbArticleSource=_pbArticleSource;
@property(nonatomic) __weak id <FTSGroupResultsDelegate> ftsGroupResultsDelegate; // @synthesize ftsGroupResultsDelegate=_ftsGroupResultsDelegate;
- (void).cxx_destruct;
- (long long)getFatherViewPageShowStyle;
- (long long)getFatherViewShowStyle;
- (void)articleHotwordReport:(id)arg1;
- (void)onApplicationWillResignActiveNotification:(id)arg1;
- (int)p_getReoportModelID:(long long)arg1;
- (void)_ftsDataReportGroupResultsSucc:(id)arg1;
- (void)_ftsDataReportSelected:(id)arg1 indexPath:(id)arg2;
- (void)reportGroupItemExp;
- (id)getBaseCellModelFromGroupResults:(id)arg1;
- (id)getCellModelFromGroupResultsSafe:(id)arg1;
- (_Bool)isDynamicSearchModelFromGroupResults:(id)arg1;
- (_Bool)checkDataSourceValid:(unsigned long long)arg1 row:(unsigned long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)handleNetSearchClick:(id)arg1;
- (void)handleLocalSearchClick:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableViewHeightForCellAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tapHeaderView:(id)arg1;
- (id)separatorLayerInHeight:(double)arg1 OffsetX:(double)arg2 color:(id)arg3 borderHeight:(double)arg4;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)top5RelationResultPrint:(id)arg1 cellViewClassForString:(id)arg2 indexPath:(id)arg3;
- (id)sectionHeadModelForSection:(unsigned long long)arg1;
- (id)sectionModelForSection:(unsigned long long)arg1;
- (id)getCellModelFromGroupResultsAtSection:(unsigned long long)arg1 row:(unsigned long long)arg2;
- (unsigned long long)cellTypeAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellAddBottomView:(id)arg2 AtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshGroupResultsTb;
- (void)clearAllGroupResults;
- (void)updateGroupResultsList:(id)arg1 withGroupShowState:(long long)arg2 isNeedContinueRefresh:(_Bool)arg3 isAllTab:(_Bool)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

