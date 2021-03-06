//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (Layout)
- (void)align:(int)arg1 relativeToRect:(struct CGRect)arg2;
- (void)align:(int)arg1 relativeToPoint:(struct CGPoint)arg2;
- (struct CGPoint)rightBottomCorner;
- (struct CGPoint)rightTopCorner;
- (struct CGPoint)leftTopCorner;
- (struct CGPoint)leftBottomCorner;
- (void)frameIntegral;
- (struct CGPoint)boundsCenter;
@property(nonatomic) struct CGPoint viewOrigin;
@property(nonatomic) struct CGSize viewSize;
@property(nonatomic) double viewX;
@property(nonatomic) double viewY;
@property(nonatomic) double viewBottomEdge;
@property(nonatomic) double viewRightEdge;
@property(nonatomic) double viewHeight;
@property(nonatomic) double viewWidth;
@end

