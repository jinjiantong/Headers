//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, UIView, WBStatusBusinessViewController;

@protocol WBStatusBusinessViewControllerDelegate <NSObject>

@optional
- (void)showLoadError:(WBStatusBusinessViewController *)arg1 error:(NSError *)arg2;
- (void)configHasMoreData:(WBStatusBusinessViewController *)arg1;
- (UIView *)viewForHeaderInController:(WBStatusBusinessViewController *)arg1;
- (double)heightForHeaderInController:(WBStatusBusinessViewController *)arg1;
- (void)controllerNeedsLayout:(WBStatusBusinessViewController *)arg1;
- (void)controller:(WBStatusBusinessViewController *)arg1 hasItemCountChangedTo:(unsigned long long)arg2;
@end

