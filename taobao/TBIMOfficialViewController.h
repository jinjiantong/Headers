//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MCOfficialDataSourceDelegate-Protocol.h"
#import "TBIMInitServiceDelegate-Protocol.h"
#import "TBNavigatorBehaviorProtocol-Protocol.h"

@class IMOfficalAccountInfo, MCChatPageConfig, MCOfficialPageInfo, MCPageContext, MCWMCBaseFragment, NSString, UIImageView;

@interface TBIMOfficialViewController : UIViewController <MCOfficialDataSourceDelegate, TBIMInitServiceDelegate, TBNavigatorBehaviorProtocol>
{
    _Bool _previewMode;
    NSString *_msgTypeId;
    MCWMCBaseFragment *_officialContentFragment;
    MCChatPageConfig *_config;
    long long _statusBarStyle;
    NSString *_previewExt;
    IMOfficalAccountInfo *_soa;
    MCPageContext *_pageContext;
    MCOfficialPageInfo *_pageInfo;
    UIImageView *_guideView;
    long long _accountType;
}

@property(nonatomic) long long accountType; // @synthesize accountType=_accountType;
@property(retain, nonatomic) UIImageView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) MCOfficialPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(retain, nonatomic) MCPageContext *pageContext; // @synthesize pageContext=_pageContext;
@property(retain, nonatomic) IMOfficalAccountInfo *soa; // @synthesize soa=_soa;
@property(copy, nonatomic) NSString *previewExt; // @synthesize previewExt=_previewExt;
@property(nonatomic) _Bool previewMode; // @synthesize previewMode=_previewMode;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) MCChatPageConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) MCWMCBaseFragment *officialContentFragment; // @synthesize officialContentFragment=_officialContentFragment;
@property(retain, nonatomic) NSString *msgTypeId; // @synthesize msgTypeId=_msgTypeId;
- (void).cxx_destruct;
- (long long)tbfestival_defaultStatusBarStyle;
- (void)officalAccountInfoUpdateReceiveFailed:(id)arg1;
- (void)officalAccountInfoUpdated:(id)arg1;
- (id)uniquePageIdForNavigatorBehavior;
- (void)imInitBaseFinish;
- (void)reflushStyle;
- (_Bool)tbfestival_isFestivalEnable;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupSubcscribeAcccountNavi:(id)arg1;
- (void)goinfoPage;
- (void)gotoOfficialPage:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)setupGuideView;
- (void)dataInit;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

