//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class APPassPresentDetailView, KABAOPRODMsgPassInfoResult;

@interface ALPPassPresentDetailViewController : DTViewController
{
    KABAOPRODMsgPassInfoResult *_passInfoResult;
    APPassPresentDetailView *_detailView;
}

@property(retain, nonatomic) APPassPresentDetailView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) KABAOPRODMsgPassInfoResult *passInfoResult; // @synthesize passInfoResult=_passInfoResult;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithQuery:(id)arg1 params:(id)arg2;

@end
