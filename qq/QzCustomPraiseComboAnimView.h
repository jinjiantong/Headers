//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>
#import <QQMainProject/QZCFrameAnimationViewDelegate-Protocol.h>

@class CALayer, NSArray, NSMutableArray, NSString, QZCFrameAnimationView;
@protocol QzCustomPraiseComboAnimViewDelegate;

@interface QzCustomPraiseComboAnimView : UIView <QZCFrameAnimationViewDelegate, CAAnimationDelegate>
{
    CALayer *_comboLayer;
    QZCFrameAnimationView *_frameAnim;
    NSMutableArray *_randomLayerArray;
    long long _randomAnimatingCount;
    id <QzCustomPraiseComboAnimViewDelegate> _customPraiseAnimDelegate;
    long long _comboCount;
    long long _type;
    NSArray *_animImagePaths;
    long long _frameRate;
    double _repeatCount;
    NSString *_comboZipUrl;
}

@property(copy, nonatomic) NSString *comboZipUrl; // @synthesize comboZipUrl=_comboZipUrl;
@property(nonatomic) double repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) long long frameRate; // @synthesize frameRate=_frameRate;
@property(copy, nonatomic) NSArray *animImagePaths; // @synthesize animImagePaths=_animImagePaths;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long comboCount; // @synthesize comboCount=_comboCount;
@property(nonatomic) __weak id <QzCustomPraiseComboAnimViewDelegate> customPraiseAnimDelegate; // @synthesize customPraiseAnimDelegate=_customPraiseAnimDelegate;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (double)timeRatioToPathRatio:(double)arg1;
- (struct _CustomPraiseBezierPath)BezierPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

