//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSearchSDKChildBaseViewController.h"

@class XSearchCollectionViewComponent, XSearchSDKChildComponent, XSearchSingleContainerView;

@interface XSearchSDKChildNatvieViewController : XSearchSDKChildBaseViewController
{
    XSearchSDKChildComponent *_childComponent;
    XSearchCollectionViewComponent *_collectionViewComponent;
    XSearchSingleContainerView *_emptyView;
    XSearchSingleContainerView *_errorView;
    XSearchSingleContainerView *_loadingView;
}

@property(retain, nonatomic) XSearchSingleContainerView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) XSearchSingleContainerView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) XSearchSingleContainerView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) XSearchCollectionViewComponent *collectionViewComponent; // @synthesize collectionViewComponent=_collectionViewComponent;
@property(retain, nonatomic) XSearchSDKChildComponent *childComponent; // @synthesize childComponent=_childComponent;
- (void).cxx_destruct;
- (_Bool)checkStatusViewRegister;
- (void)changeEmptyStatusViewFrame;
- (void)changeStatusViewFrame:(_Bool)arg1;
- (void)changeStatusViewFailForFilterSearch:(id)arg1;
- (void)changeStatusViewSuccessForFilterSearch:(_Bool)arg1;
- (void)changeStatusViewStartForFilterSearch;
- (void)loadStatusView;
- (void)hideStatusView;
- (void)createStatusView;
- (double)listHeaderViewHeight;
- (void)childScrollToTop;
- (void)childComponentSearchFailed:(id)arg1 Error:(id)arg2;
- (void)childComponentSearchSuccess:(id)arg1;
- (void)childComponentSearchStart:(id)arg1;
- (void)findScroll;
- (id)getStickyHeaderView;
- (void)headerLayout;
- (void)tabSearch;
- (void)filterSearch;
- (void)reloadDataAfterLayoutHeader;
- (void)reloadData;
- (void)viewDidLoad;
- (id)initWithService:(id)arg1 Delegate:(id)arg2;

@end

