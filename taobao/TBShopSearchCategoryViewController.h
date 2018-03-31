//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "VLViewDelegate-Protocol.h"

@class HUDActivityView, NSDictionary, NSMutableArray, NSString, SPNetworkRequest, TBModelStatusHandler, TBShopCatInfoItemX, UITableView, VLView;

@interface TBShopSearchCategoryViewController : TBViewController <VLViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_categoryTableView;
    NSString *_sellerId;
    NSString *_shopId;
    NSString *_categoryID;
    NSDictionary *_query;
    NSMutableArray *_categoryItems;
    TBShopCatInfoItemX *_firstItemNavCat;
    SPNetworkRequest *_categoryInfoRequest;
    NSMutableArray *_headviewArray;
    TBModelStatusHandler *_failStatusHandler;
    HUDActivityView *_categoryLoadingView;
    VLView *_vlView;
    NSString *_downgradeUrl;
}

@property(retain, nonatomic) NSString *downgradeUrl; // @synthesize downgradeUrl=_downgradeUrl;
@property(retain, nonatomic) VLView *vlView; // @synthesize vlView=_vlView;
@property(retain, nonatomic) HUDActivityView *categoryLoadingView; // @synthesize categoryLoadingView=_categoryLoadingView;
@property(retain, nonatomic) TBModelStatusHandler *failStatusHandler; // @synthesize failStatusHandler=_failStatusHandler;
@property(retain, nonatomic) NSMutableArray *headviewArray; // @synthesize headviewArray=_headviewArray;
@property(retain, nonatomic) SPNetworkRequest *categoryInfoRequest; // @synthesize categoryInfoRequest=_categoryInfoRequest;
@property(retain, nonatomic) TBShopCatInfoItemX *firstItemNavCat; // @synthesize firstItemNavCat=_firstItemNavCat;
@property(retain, nonatomic) NSMutableArray *categoryItems; // @synthesize categoryItems=_categoryItems;
@property(retain, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) UITableView *categoryTableView; // @synthesize categoryTableView=_categoryTableView;
- (void).cxx_destruct;
- (id)pageUserInfo;
- (_Bool)isNativePage:(id)arg1;
- (id)dataForUserTrack;
- (void)cellCheckButtonClicked:(id)arg1;
- (void)sectionCheckButtonClicked:(id)arg1;
- (void)onLoadVLView:(id)arg1 Error:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)jumpToCategoryViewWithCatName:(id)arg1;
- (void)reloadCategoryData;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)updatePageProperties;
- (id)defaultTracker;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

