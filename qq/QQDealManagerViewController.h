//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWalletBaseViewController.h>

#import <QQMainProject/QQRedPointTableViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQWalletUserCenterCellDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSString;

@interface QQDealManagerViewController : QQWalletBaseViewController <UITableViewDataSource, UITableViewDelegate, QQRedPointTableViewControllerDelegate, QQWalletUserCenterCellDelegate>
{
    int userAttr;
    NSMutableArray *_datasource;
    long long _redPointId;
    _Bool _isLoading;
    double _lastQueryTime;
}

- (void)requestRedPointInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

