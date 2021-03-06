//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MAMapEngineRenderDelegate-Protocol.h"

@class CADisplayLink, CAEAGLLayer, EAGLContext, MAMapEngine, NSDate, NSString, NSTimer, UIBezierPath, UIImage;
@protocol MAMapRenderDelegate;

@interface MAMapRender : UIView <MAMapEngineRenderDelegate>
{
    MAMapEngine *_internalMapEngine;
    CADisplayLink *_displayLink;
    CAEAGLLayer *_eaglLayer;
    EAGLContext *_context;
    unsigned int _defaultFrameBuffer;
    unsigned int _colorRenderBuffer;
    unsigned int _depthBuffer;
    int _backingWidth;
    int _backingHeight;
    double _scale;
    NSTimer *_listenFrequencyTimer;
    NSDate *_decreaseFrequencyMinDate;
    _Bool _isNeedReloadMap;
    _Bool _isNeedResizeSubView;
    _Bool _snapshotEnabled;
    _Bool _isAllowDecreaseRenderFrame;
    MAMapEngine *_mapEngine;
    id <MAMapRenderDelegate> _delegate;
    unsigned long long _renderFrameInterval;
    unsigned long long _maxRenderFrameInterval;
    unsigned long long _minRenderFrameInterval;
    UIBezierPath *_snapshotPath;
    UIImage *_snapshotImage;
}

+ (Class)layerClass;
@property(nonatomic) _Bool isAllowDecreaseRenderFrame; // @synthesize isAllowDecreaseRenderFrame=_isAllowDecreaseRenderFrame;
@property(nonatomic) _Bool snapshotEnabled; // @synthesize snapshotEnabled=_snapshotEnabled;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
@property(retain, nonatomic) UIBezierPath *snapshotPath; // @synthesize snapshotPath=_snapshotPath;
@property(nonatomic) unsigned long long minRenderFrameInterval; // @synthesize minRenderFrameInterval=_minRenderFrameInterval;
@property(nonatomic) unsigned long long maxRenderFrameInterval; // @synthesize maxRenderFrameInterval=_maxRenderFrameInterval;
@property(nonatomic) unsigned long long renderFrameInterval; // @synthesize renderFrameInterval=_renderFrameInterval;
@property(nonatomic) __weak id <MAMapRenderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)deallocOperation;
- (void)dealloc;
- (void)reloadMap;
- (void)render;
- (void)takeSnapshot;
- (void)layoutSubviews;
- (void)resizeEAGLLayer;
- (void)setRenderFrame:(double)arg1;
- (void)fireListenFrequencyTimer;
- (void)resumeFrequency;
- (void)decreaseFrequency;
- (void)stopRender;
- (void)startRender;
@property(readonly, nonatomic) __weak MAMapEngine *mapEngine; // @synthesize mapEngine=_mapEngine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

