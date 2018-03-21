//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEFanStarNavView, NSArray, NSString, UITableView;

@interface AWELiveVerifyAnchorViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    AWEFanStarNavView *_navView;
    UITableView *_tableView;
    NSArray *_dataList;
    long long _verifyType;
}

@property(nonatomic) long long verifyType; // @synthesize verifyType=_verifyType;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AWEFanStarNavView *navView; // @synthesize navView=_navView;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)backBtnClicked:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)handleFinishAuthenticationNoti:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithVerifyType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
