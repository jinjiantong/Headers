//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GMSx_QTMGeometry : NSObject
{
}

+ (struct CGPoint)intersectionOfBounds:(struct CGRect)arg1 toPoint:(struct CGPoint)arg2 maxDragDistance:(double)arg3 maxInkOffset:(double)arg4;
+ (double)exponentialValue:(double)arg1 min:(double)arg2 max:(double)arg3;
+ (double)distanceBetweenPoints:(struct CGPoint)arg1 point2:(struct CGPoint)arg2;
+ (double)GMSx_boundf:(double)arg1 min:(double)arg2 max:(double)arg3;
- (id)pathForRectSize:(struct CGSize)arg1 withHollowCircle:(struct CGSize)arg2;

@end

