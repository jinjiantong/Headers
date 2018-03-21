//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBDWNewGoodListViewDelegate-Protocol.h"
#import "TBDWTNodViewActionProtocol-Protocol.h"
#import "TBDWVideoTableViewNextTipProtocol-Protocol.h"

@class DWInstance, NSDictionary, NSString, TBDWGoodListManager, TBDWVideoTableFooterView, TBDWVideoTableView, UIButton, UIImage, UILabel, UIView;

@interface TBDWVideoViewController : UIViewController <TBDWTNodViewActionProtocol, TBDWNewGoodListViewDelegate, TBDWVideoTableViewNextTipProtocol>
{
    _Bool _autoPause;
    _Bool _fromOpenUrl;
    _Bool _hasNextPage;
    _Bool _firstPageFailed;
    _Bool _showDanmaku;
    _Bool _vcIsAppear;
    _Bool _isAtmosphere;
    _Bool _autoPlayInNotWifi;
    _Bool _hasNormalClose;
    _Bool _gestureSeek;
    TBDWVideoTableView *_tableView;
    CDUnknownBlockType _pageDidClose;
    UIImage *_backgroundImg;
    unsigned long long _orientations;
    TBDWGoodListManager *_goodListManager;
    NSDictionary *_commonData;
    NSString *_from;
    UILabel *_tipLabel;
    DWInstance *_firstInstance;
    NSString *_sourceType;
    long long _currentPage;
    NSString *_firstVideoCover;
    UIView *_naviBar;
    UIButton *_closeButton;
    NSString *_lastVideoID;
    NSString *_lastTimestamp;
    TBDWVideoTableFooterView *_tableFooterView;
    NSDictionary *_extraData;
    NSString *_contentId;
    NSDictionary *_controls;
    NSDictionary *_utparam;
    struct CGRect _preVideoFrame;
}

@property(nonatomic) _Bool gestureSeek; // @synthesize gestureSeek=_gestureSeek;
@property(nonatomic) _Bool hasNormalClose; // @synthesize hasNormalClose=_hasNormalClose;
@property(nonatomic) _Bool autoPlayInNotWifi; // @synthesize autoPlayInNotWifi=_autoPlayInNotWifi;
@property(nonatomic) _Bool isAtmosphere; // @synthesize isAtmosphere=_isAtmosphere;
@property(nonatomic) _Bool vcIsAppear; // @synthesize vcIsAppear=_vcIsAppear;
@property(nonatomic) _Bool showDanmaku; // @synthesize showDanmaku=_showDanmaku;
@property(nonatomic) _Bool firstPageFailed; // @synthesize firstPageFailed=_firstPageFailed;
@property(retain, nonatomic) NSDictionary *utparam; // @synthesize utparam=_utparam;
@property(retain, nonatomic) NSDictionary *controls; // @synthesize controls=_controls;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(nonatomic) _Bool fromOpenUrl; // @synthesize fromOpenUrl=_fromOpenUrl;
@property(retain, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) TBDWVideoTableFooterView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(copy, nonatomic) NSString *lastTimestamp; // @synthesize lastTimestamp=_lastTimestamp;
@property(copy, nonatomic) NSString *lastVideoID; // @synthesize lastVideoID=_lastVideoID;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) struct CGRect preVideoFrame; // @synthesize preVideoFrame=_preVideoFrame;
@property(retain, nonatomic) UIView *naviBar; // @synthesize naviBar=_naviBar;
@property(copy, nonatomic) NSString *firstVideoCover; // @synthesize firstVideoCover=_firstVideoCover;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) DWInstance *firstInstance; // @synthesize firstInstance=_firstInstance;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) _Bool autoPause; // @synthesize autoPause=_autoPause;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSDictionary *commonData; // @synthesize commonData=_commonData;
@property(retain, nonatomic) TBDWGoodListManager *goodListManager; // @synthesize goodListManager=_goodListManager;
@property(nonatomic) unsigned long long orientations; // @synthesize orientations=_orientations;
@property(retain, nonatomic) UIImage *backgroundImg; // @synthesize backgroundImg=_backgroundImg;
@property(copy, nonatomic) CDUnknownBlockType pageDidClose; // @synthesize pageDidClose=_pageDidClose;
@property(retain, nonatomic) TBDWVideoTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)dataForUserTrack;
- (void)videoPlaying:(id)arg1;
- (void)onVideoNormalScreen;
- (void)hideNextTips;
- (void)showNextTips;
- (void)updateUtParam:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)requestNextPage;
- (void)requestFirstPage;
- (id)getFirstVideoCellModel;
- (void)closeVideoList;
- (void)setupContents;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)getUTParam;
- (void)updatePageEvent;
- (id)dwInstanceUTParams;
- (void)setUpFirstInstance;
- (void)getAtmosphere;
- (id)initWithURL:(id)arg1;
- (id)initWithDWInstance:(id)arg1 sourceType:(id)arg2 contentId:(id)arg3 firstVideoCover:(id)arg4 interactiveControls:(id)arg5 extraData:(id)arg6;
- (id)getUTParams;
- (void)dealTaoke:(id)arg1 itemId:(id)arg2 commonData:(id)arg3;
- (void)itemWillShow:(id)arg1;
- (void)addCart:(id)arg1;
- (void)goItemFromNewList:(id)arg1;
- (void)showItemList:(id)arg1;
- (void)share:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
