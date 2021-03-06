//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "LFMessageTableViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class LFMessageTableView, NSMutableArray, NSString;

@interface LifeMessageViewController : DTViewController <LFMessageTableViewDelegate, UIActionSheetDelegate>
{
    NSString *_publicId;
    LFMessageTableView *_tableView;
    NSMutableArray *_modelArray;
}

@property(retain, nonatomic) NSMutableArray *modelArray; // @synthesize modelArray=_modelArray;
@property(retain, nonatomic) LFMessageTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkHasMore:(id)arg1;
- (void)loadMore;
- (void)clear;
- (void)loadMoreData;
- (void)loadData;
- (id)imageUrlAdapter:(id)arg1;
- (id)transformMsgToModel:(id)arg1;
- (void)setupParams;
- (void)setupUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

