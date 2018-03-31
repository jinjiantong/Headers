//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface DTAudioWaveformBuilder : NSObject
{
    NSMutableArray *_recordMeters;
    float _space;
    double _levelMeterWidth;
    long long _levelHz;
    struct CGSize _contentSize;
}

@property(nonatomic) float space; // @synthesize space=_space;
@property(nonatomic) long long levelHz; // @synthesize levelHz=_levelHz;
@property(nonatomic) double levelMeterWidth; // @synthesize levelMeterWidth=_levelMeterWidth;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void).cxx_destruct;
- (id)generateMeterLevelsWithTimeV2:(float)arg1 levels:(id)arg2;
- (id)generateCompressPointsWithLevels:(id)arg1 compressRate:(double)arg2;
- (id)generateMeterHeightArrayWithMeters:(id)arg1;
- (id)zoomInMeterHeightArrayWithMeterHeights:(id)arg1;
- (double)compressValue:(int)arg1;
- (void)updateWaveform;
- (void)stopWithDuration:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)start;
- (id)init;

@end

