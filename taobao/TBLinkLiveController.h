//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBAVBoardCastViewProtocol-Protocol.h"

@class NSDateFormatter, NSDictionary, NSString, NSTimer, TBAVBoardCastOptions, TBAVBoardCastView, TBLiveDataModel, UIButton, UILabel, UIView;

@interface TBLinkLiveController : NSObject <TBAVBoardCastViewProtocol>
{
    long long _linkPlayStatus;
    UIView *_superview;
    TBLiveDataModel *_dataModel;
    UIView *_linkWaitingView;
    CDUnknownBlockType _startLinkLiveBlock;
    CDUnknownBlockType _endLinkLiveBlock;
    CDUnknownBlockType _getLinkLiveCalledBlock;
    CDUnknownBlockType _miniWindowCalledBlock;
    TBAVBoardCastView *_broadCastView;
    TBAVBoardCastOptions *_boardCastOpt;
    NSDictionary *_boardCastConfig;
    UIView *_linkPreView;
    UIView *_linkPlayView;
    UIView *_linkMaskView;
    UIButton *_linkCloseBtn;
    NSTimer *_linkLiveTimer;
    UILabel *_linkTimeLabel;
    long long _linkTimeCount;
    NSDateFormatter *_dateFormatter;
    UILabel *_waitingTitleLabel;
    UILabel *_waitingCountLabel;
    UILabel *_subLabel;
}

@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *waitingCountLabel; // @synthesize waitingCountLabel=_waitingCountLabel;
@property(retain, nonatomic) UILabel *waitingTitleLabel; // @synthesize waitingTitleLabel=_waitingTitleLabel;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) long long linkTimeCount; // @synthesize linkTimeCount=_linkTimeCount;
@property(retain, nonatomic) UILabel *linkTimeLabel; // @synthesize linkTimeLabel=_linkTimeLabel;
@property(retain, nonatomic) NSTimer *linkLiveTimer; // @synthesize linkLiveTimer=_linkLiveTimer;
@property(retain, nonatomic) UIButton *linkCloseBtn; // @synthesize linkCloseBtn=_linkCloseBtn;
@property(retain, nonatomic) UIView *linkMaskView; // @synthesize linkMaskView=_linkMaskView;
@property(nonatomic) __weak UIView *linkPlayView; // @synthesize linkPlayView=_linkPlayView;
@property(nonatomic) __weak UIView *linkPreView; // @synthesize linkPreView=_linkPreView;
@property(retain, nonatomic) NSDictionary *boardCastConfig; // @synthesize boardCastConfig=_boardCastConfig;
@property(retain, nonatomic) TBAVBoardCastOptions *boardCastOpt; // @synthesize boardCastOpt=_boardCastOpt;
@property(retain, nonatomic) TBAVBoardCastView *broadCastView; // @synthesize broadCastView=_broadCastView;
@property(copy, nonatomic) CDUnknownBlockType miniWindowCalledBlock; // @synthesize miniWindowCalledBlock=_miniWindowCalledBlock;
@property(copy, nonatomic) CDUnknownBlockType getLinkLiveCalledBlock; // @synthesize getLinkLiveCalledBlock=_getLinkLiveCalledBlock;
@property(copy, nonatomic) CDUnknownBlockType endLinkLiveBlock; // @synthesize endLinkLiveBlock=_endLinkLiveBlock;
@property(copy, nonatomic) CDUnknownBlockType startLinkLiveBlock; // @synthesize startLinkLiveBlock=_startLinkLiveBlock;
@property(retain, nonatomic) UIView *linkWaitingView; // @synthesize linkWaitingView=_linkWaitingView;
@property(retain, nonatomic) TBLiveDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak UIView *superview; // @synthesize superview=_superview;
@property(nonatomic) long long linkPlayStatus; // @synthesize linkPlayStatus=_linkPlayStatus;
- (void).cxx_destruct;
- (void)handleLinkLiveEvent:(long long)arg1 Param:(id)arg2;
- (void)didAddCameraSource;
- (void)checkGestureDetectionResult:(int)arg1 gestureZone:(struct CGRect)arg2;
- (void)connectionStatusChanged:(long long)arg1;
- (void)addLinkLiveActionView;
- (void)isEndLinkLive;
- (void)onTimer;
- (void)onWaitingTimer;
- (void)clearLinkMaskView;
- (void)cleanLinkLiveSession;
- (void)cancelLinkLive;
- (void)passiveEndLinkLive;
- (void)activeEndLinkLive;
- (void)rejectLinkLive;
- (void)acceptLinkLive;
- (void)miniWindowCalledClickAction;
- (void)gotoPrivacy:(id)arg1;
- (void)refeshWaitingViewData:(id)arg1;
- (void)showMiniWindowCalledView:(id)arg1;
- (void)getLinkLiveCalled;
- (void)setupBroadCastViewWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
