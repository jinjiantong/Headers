//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FGBrushParameters, NSMutableData, NSString, UIColor;

@interface FGDrawEnginePath : NSObject
{
    _Bool _shouldUpdateEmitters;
    unsigned int _numInfluences;
    float _approximateArcLength;
    NSString *_uuid;
    NSMutableData *_controlPointsData;
    NSMutableData *_positionData;
    NSMutableData *_arcLengthData;
    NSMutableData *_sizeData;
    UIColor *_color;
    FGBrushParameters *_brushParameters;
    struct CGPoint _A;
    struct CGPoint _B;
    struct CGPoint _C;
    struct CGPoint _lastInterpolatedPoint;
}

@property(nonatomic) float approximateArcLength; // @synthesize approximateArcLength=_approximateArcLength;
@property(nonatomic) unsigned int numInfluences; // @synthesize numInfluences=_numInfluences;
@property(nonatomic) struct CGPoint lastInterpolatedPoint; // @synthesize lastInterpolatedPoint=_lastInterpolatedPoint;
@property(nonatomic) struct CGPoint C; // @synthesize C=_C;
@property(nonatomic) struct CGPoint B; // @synthesize B=_B;
@property(nonatomic) struct CGPoint A; // @synthesize A=_A;
@property(nonatomic) _Bool shouldUpdateEmitters; // @synthesize shouldUpdateEmitters=_shouldUpdateEmitters;
@property(retain, nonatomic) FGBrushParameters *brushParameters; // @synthesize brushParameters=_brushParameters;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSMutableData *sizeData; // @synthesize sizeData=_sizeData;
@property(retain, nonatomic) NSMutableData *arcLengthData; // @synthesize arcLengthData=_arcLengthData;
@property(retain, nonatomic) NSMutableData *positionData; // @synthesize positionData=_positionData;
@property(retain, nonatomic) NSMutableData *controlPointsData; // @synthesize controlPointsData=_controlPointsData;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long splatterCount;
- (void)appendPoint:(struct CGPoint)arg1;
- (id)initWithBrushParameters:(id)arg1;

@end
