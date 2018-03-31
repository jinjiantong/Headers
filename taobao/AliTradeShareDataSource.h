//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ATSDataBuilderDelegate-Protocol.h"
#import "ATSNetworkProcessorDelegate-Protocol.h"
#import "ATSSegmentedControlDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ATSDataBuilder, ATSEventHandler, ATSEventManager, ATSGatherView, ATSMainPerformanceInfo, ATSMoreCell, ATSNetworkProcessor, ATSStatus, NSMutableArray, NSMutableDictionary, NSString, StyleKitContext, UIView;
@protocol ATSBizProtocol;

@interface AliTradeShareDataSource : NSObject <UIGestureRecognizerDelegate, ATSSegmentedControlDelegate, UITableViewDelegate, UITableViewDataSource, ATSNetworkProcessorDelegate, ATSDataBuilderDelegate>
{
    _Bool _onlyShowErrorMsgOnUICache;
    ATSDataBuilder *_dataBuilder;
    ATSNetworkProcessor *_networkProcessor;
    ATSStatus *_status;
    StyleKitContext *_styleKitContext;
    id <ATSBizProtocol> _sourceTarget;
    NSMutableArray *_selectedItem;
    NSMutableDictionary *_cellMap;
    ATSGatherView *_gatherView;
    UIView *_emptyView;
    UIView *_statusView;
    ATSMoreCell *_moreDataCell;
    ATSEventManager *_eventManager;
    ATSEventHandler *_eventHandler;
    ATSMainPerformanceInfo *_cartPerformanceInfo;
    long long _contextIndex;
}

@property(nonatomic) long long contextIndex; // @synthesize contextIndex=_contextIndex;
@property(retain, nonatomic) ATSMainPerformanceInfo *cartPerformanceInfo; // @synthesize cartPerformanceInfo=_cartPerformanceInfo;
@property(retain, nonatomic) ATSEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) ATSEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property(retain, nonatomic) ATSMoreCell *moreDataCell; // @synthesize moreDataCell=_moreDataCell;
@property(retain, nonatomic) UIView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) __weak ATSGatherView *gatherView; // @synthesize gatherView=_gatherView;
@property(retain, nonatomic) NSMutableDictionary *cellMap; // @synthesize cellMap=_cellMap;
@property(retain, nonatomic) NSMutableArray *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(nonatomic) __weak id <ATSBizProtocol> sourceTarget; // @synthesize sourceTarget=_sourceTarget;
@property(retain, nonatomic) StyleKitContext *styleKitContext; // @synthesize styleKitContext=_styleKitContext;
@property(retain, nonatomic) ATSStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) ATSNetworkProcessor *networkProcessor; // @synthesize networkProcessor=_networkProcessor;
@property(retain, nonatomic) ATSDataBuilder *dataBuilder; // @synthesize dataBuilder=_dataBuilder;
@property(nonatomic) _Bool onlyShowErrorMsgOnUICache; // @synthesize onlyShowErrorMsgOnUICache=_onlyShowErrorMsgOnUICache;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)logResponse:(id)arg1 actionType:(unsigned long long)arg2 isFailed:(_Bool)arg3;
- (void)atsEventClicked:(id)arg1 component:(id)arg2 args:(id)arg3;
- (void)refreshData;
- (void)refreshUI;
- (void)loadMore;
- (void)reloadList:(id)arg1 isFirstPage:(_Bool)arg2;
- (void)dataSourceDidLoad;
- (_Bool)isCacheAppare;
- (void)scrollViewToTopWithAnimated:(_Bool)arg1;
- (void)networkChanged:(int)arg1;
- (void)userLogout;
- (void)reloadViewModel;
- (void)bindFooterViewEvent;
- (void)registerAction;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (CDUnknownBlockType)clickEvent:(id)arg1 withEventType:(unsigned long long)arg2 preprocessBlock:(CDUnknownBlockType)arg3 target:(id)arg4;
- (void)registerHandleForCell:(id)arg1 withModel:(id)arg2 inIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectShareItemRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (CDUnknownBlockType)onSearchFocusBlock;
- (CDUnknownBlockType)onSearchCancelBlock;
- (CDUnknownBlockType)onSearchBlock;
- (void)segmentUTClick:(unsigned long long)arg1;
- (void)segmentIndexChanged:(long long)arg1 toIndex:(long long)arg2;
- (void)queryFailedNoNewData;
- (void)queryFailedNoDataWithError:(id)arg1;
- (void)showOKViewInTable;
- (void)showEmptyViewInTable;
- (void)showLoadErrorView:(id)arg1;
- (_Bool)shouldShowEmpty;
- (id)modelWithIndexPath:(id)arg1;
- (id)cellNameFromModel:(id)arg1;
- (Class)cellClassFromModel:(id)arg1;
- (void)reloadFooterData;
- (void)reloadTitleButton;
- (void)reloadTableViewData;
- (void)handleRequestResultFailedwithEvent:(id)arg1 refreshUI:(_Bool)arg2 showMsg:(id)arg3 actionType:(unsigned long long)arg4 response:(id)arg5;
- (void)handleRequestResultFailedwithEvent:(id)arg1 refreshUI:(_Bool)arg2 showMsg:(id)arg3 actionType:(unsigned long long)arg4;
- (void)handleRequestSuccesswithEvent:(id)arg1 refreshData:(_Bool)arg2 refreshUI:(_Bool)arg3 showMsg:(id)arg4 sendNotify:(id)arg5 response:(id)arg6 actionType:(unsigned long long)arg7;
- (void)handleQueryTradeShare;
- (void)handleCreateShareSuccess;
- (void)handleRequestSuccesswithEvent:(id)arg1 refreshData:(_Bool)arg2 refreshUI:(_Bool)arg3 showMsg:(id)arg4 sendNotify:(id)arg5 actionType:(unsigned long long)arg6 response:(id)arg7;
- (void)parseDataEnd:(id)arg1;
- (void)parseDataBegin;
- (void)switchClient:(id)arg1;
- (void)switchSourceType:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithSourceTarget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

