//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSRevealSideViewController, UIViewController;

@protocol KSRevealSideViewControllerDelegate <NSObject>

@optional
- (void)revealSideViewController:(KSRevealSideViewController *)arg1 showMenuWithProgress:(double)arg2;
- (void)revealSideViewController:(KSRevealSideViewController *)arg1 didHideMenuViewController:(UIViewController *)arg2;
- (void)revealSideViewController:(KSRevealSideViewController *)arg1 didShowMenuViewController:(UIViewController *)arg2;
- (void)revealSideViewController:(KSRevealSideViewController *)arg1 willShowMenuViewController:(UIViewController *)arg2;
@end
