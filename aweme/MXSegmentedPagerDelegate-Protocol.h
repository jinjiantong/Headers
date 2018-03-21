//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MXParallaxHeader, MXSegmentedPager, NSString, UIView;

@protocol MXSegmentedPagerDelegate <NSObject>

@optional
- (_Bool)segmentedPagerShouldScrollToTop:(MXSegmentedPager *)arg1;
- (void)segmentedPager:(MXSegmentedPager *)arg1 didEndDraggingWithParallaxHeader:(MXParallaxHeader *)arg2;
- (void)segmentedPager:(MXSegmentedPager *)arg1 didScrollWithParallaxHeader:(MXParallaxHeader *)arg2;
- (double)heightForSegmentedControlInSegmentedPager:(MXSegmentedPager *)arg1;
- (void)segmentedPager:(MXSegmentedPager *)arg1 didSelectViewWithIndex:(long long)arg2;
- (void)segmentedPager:(MXSegmentedPager *)arg1 didSelectViewWithTitle:(NSString *)arg2;
- (void)segmentedPager:(MXSegmentedPager *)arg1 didSelectView:(UIView *)arg2;
@end
