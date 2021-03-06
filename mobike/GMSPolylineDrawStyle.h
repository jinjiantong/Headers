//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, UIColor;

@interface GMSPolylineDrawStyle : NSObject <NSCopying>
{
    unsigned long long _hash;
    int _drawMode;
    int _textureStrokeColor;
    int _relativeDrawPriority;
    double _strokeWidth;
    UIColor *_strokeColor;
    reffed_ptr_7371fe81 _textureState;
    NSArray *_styleList;
    NSArray *_sizeList;
}

+ (id)styleWithStrokeWidth:(double)arg1 textureTint:(id)arg2 relativeDrawPriority:(int)arg3;
+ (id)styleWithStyleList:(id)arg1 sizeList:(id)arg2;
+ (id)styleWithStrokeWidth:(double)arg1 textureState:(reffed_ptr_7371fe81)arg2 relativeDrawPriority:(int)arg3;
+ (id)styleWithStrokeWidth:(double)arg1 strokeColor:(id)arg2 relativeDrawPriority:(int)arg3;
+ (id)styleWithStrokeWidth:(double)arg1 textureStrokeColor:(int)arg2 dim:(_Bool)arg3 relativeDrawPriority:(int)arg4;
@property(readonly, nonatomic) int relativeDrawPriority; // @synthesize relativeDrawPriority=_relativeDrawPriority;
@property(readonly, copy, nonatomic) NSArray *sizeList; // @synthesize sizeList=_sizeList;
@property(readonly, copy, nonatomic) NSArray *styleList; // @synthesize styleList=_styleList;
@property(readonly, nonatomic) reffed_ptr_7371fe81 textureState; // @synthesize textureState=_textureState;
@property(readonly, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(readonly, nonatomic) int textureStrokeColor; // @synthesize textureStrokeColor=_textureStrokeColor;
@property(readonly, nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(readonly, nonatomic) int drawMode; // @synthesize drawMode=_drawMode;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)combinesWith:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStrokeWidth:(double)arg1 strokeColor:(id)arg2 textureStrokeColor:(int)arg3 textureState:(reffed_ptr_7371fe81)arg4 styleList:(id)arg5 sizeList:(id)arg6 drawMode:(int)arg7 relativeDrawPriority:(int)arg8;
- (id)init;

@end

