//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, WBNavigationCommonTitleModel, WBNavigationCommonTitleView;

@protocol WBNavigationCommonTitleViewDelegate <NSObject>
- (WBNavigationCommonTitleModel *)titleViewDataSource;
- (UIView *)titleViewTitle:(WBNavigationCommonTitleView *)arg1;
- (UIView *)titleViewRightButton:(WBNavigationCommonTitleView *)arg1;
- (UIView *)titleViewLeftIcon:(WBNavigationCommonTitleView *)arg1;

@optional
- (void)titleViewClickRightButton:(UIView *)arg1;
- (void)titleViewClickLeftIcon:(UIView *)arg1;
- (void)titleViewClickTitle:(UIView *)arg1;
@end

