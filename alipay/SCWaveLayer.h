//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class SCWaveAnimationView;

@interface SCWaveLayer : CALayer
{
    SCWaveAnimationView *_parentView;
}

@property(nonatomic) __weak SCWaveAnimationView *parentView; // @synthesize parentView=_parentView;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startAnimation;
- (id)initWithBounds:(struct CGRect)arg1 position:(struct CGPoint)arg2 parentView:(id)arg3;
- (void)dealloc;

@end

