//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QZARRefObj : NSObject
{
    struct opaqueCMSampleBuffer *_cmSampleBuffer;
    struct __CVBuffer *_cvPixelBuffer;
}

+ (id)createWithPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)createWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@property(nonatomic) struct __CVBuffer *cvPixelBuffer; // @synthesize cvPixelBuffer=_cvPixelBuffer;
@property(retain, nonatomic) struct opaqueCMSampleBuffer *cmSampleBuffer; // @synthesize cmSampleBuffer=_cmSampleBuffer;
- (void)dealloc;

@end

