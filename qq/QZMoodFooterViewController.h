//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class QZMoodComposeViewCoordinator, QZMoodComposeViewPresenter, UIView;

@interface QZMoodFooterViewController : UIViewController
{
    QZMoodComposeViewPresenter *_viewModel;
    QZMoodComposeViewCoordinator *_coordinator;
    UIView *_hostView;
}

@property(nonatomic) __weak UIView *hostView; // @synthesize hostView=_hostView;
- (void).cxx_destruct;
- (void)updateMoodTime:(id)arg1;
- (void)refreshSyncView;
- (void)shareToWechatEnabled:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)viewDidLoad;
- (id)footerView;
- (void)loadView;
- (id)initWithViewModel:(id)arg1 coordinator:(id)arg2;

@end

