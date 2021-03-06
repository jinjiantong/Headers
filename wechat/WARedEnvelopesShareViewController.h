//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ForwardMessageLogicDelegate-Protocol.h"

@class ForwardMessageLogicController, NSString;
@protocol WARedEnvelopesShareViewControllerDelegate;

@interface WARedEnvelopesShareViewController : MMUIViewController <ForwardMessageLogicDelegate>
{
    id <WARedEnvelopesShareViewControllerDelegate> m_delegate;
    ForwardMessageLogicController *_forwardLogic;
}

@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(nonatomic) __weak id <WARedEnvelopesShareViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (id)getCurrentViewController;
- (void)shareBtnClick;
- (void)doneBtnClick;
- (void)onReturn;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

