//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SSImageUtil : NSObject
{
}

+ (id)imageRotatedByDegrees:(double)arg1 originImg:(id)arg2;
+ (id)imageRotatedByRadians:(double)arg1 originImg:(id)arg2;
+ (id)tryCompressImage:(id)arg1 ifImageSizeLargeTargetSize:(struct CGSize)arg2;
+ (id)compressImage:(id)arg1 withTargetSize:(struct CGSize)arg2;
+ (id)fixImgOrientation:(id)arg1;
+ (id)cutImage:(id)arg1 withCutWidth:(double)arg2 withSideHeight:(double)arg3 cutPosition:(int)arg4;
+ (id)cutImage:(id)arg1 withRect:(struct CGRect)arg2;

@end
