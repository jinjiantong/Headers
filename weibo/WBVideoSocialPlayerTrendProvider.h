//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBMediaTableViewSectionsProvider-Protocol.h"

@class NSArray, NSDictionary, NSString, SNHTTPRequestOperationWrapper, WBStatus;
@protocol WBMediaTableViewProxing, WBVideoSocialPlayerTrendProviderDelegate;

@interface WBVideoSocialPlayerTrendProvider : NSObject <WBMediaTableViewSectionsProvider>
{
    SNHTTPRequestOperationWrapper *_currentRequest;
    _Bool _autoPlayEnabled;
    id <WBVideoSocialPlayerTrendProviderDelegate> _delegate;
    NSArray *_trendArray;
    WBStatus *_status;
    id <WBMediaTableViewProxing> _tableViewProxing;
    long long _analysisDepthCount;
    NSDictionary *_extraParameters;
}

@property(retain, nonatomic) NSDictionary *extraParameters; // @synthesize extraParameters=_extraParameters;
@property(nonatomic) long long analysisDepthCount; // @synthesize analysisDepthCount=_analysisDepthCount;
@property(nonatomic) __weak id <WBMediaTableViewProxing> tableViewProxing; // @synthesize tableViewProxing=_tableViewProxing;
@property(retain, nonatomic) WBStatus *status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool autoPlayEnabled; // @synthesize autoPlayEnabled=_autoPlayEnabled;
@property(retain, nonatomic) NSArray *trendArray; // @synthesize trendArray=_trendArray;
@property(nonatomic) __weak id <WBVideoSocialPlayerTrendProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)autoPlayEnabledDidChangeNotification:(id)arg1;
- (void)setAutoPlayEnabled:(_Bool)arg1;
- (void)restoreAutoPlaySwitchFromUserDefaults;
@property(readonly, nonatomic) WBStatus *preferredNextVideoStatus;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)failedToFetchStatusWithError:(id)arg1;
- (void)reloadTrendsWithStatusArray:(id)arg1;
- (void)requestTrendDataFromServer;
- (id)initWithStatus:(id)arg1 extraParameters:(id)arg2;
- (id)initWithStatus:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

