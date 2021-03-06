//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMSceneLayer.h"

#import "FMHandGestureDelegate-Protocol.h"

@class FMHandGestureFilter, FMHandGestureRecognizerInfo, NSString, UIView;

@interface FMHandGestureSceneLayer : FMSceneLayer <FMHandGestureDelegate>
{
    _Bool _firstFrameDetected;
    _Bool _lastFrameDetected;
    _Bool _mirror;
    int _missNum;
    int _MAX_MISS_NUM;
    FMHandGestureFilter *_handGestureFilter;
    UIView *_handGestureView;
    FMHandGestureRecognizerInfo *_lastValidHandInfo;
}

+ (id)sceneWithResource:(id)arg1 materialProvider:(id)arg2 layerName:(id)arg3;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(retain, nonatomic) FMHandGestureRecognizerInfo *lastValidHandInfo; // @synthesize lastValidHandInfo=_lastValidHandInfo;
@property(nonatomic) int MAX_MISS_NUM; // @synthesize MAX_MISS_NUM=_MAX_MISS_NUM;
@property(nonatomic) int missNum; // @synthesize missNum=_missNum;
@property(nonatomic) _Bool lastFrameDetected; // @synthesize lastFrameDetected=_lastFrameDetected;
@property(nonatomic) _Bool firstFrameDetected; // @synthesize firstFrameDetected=_firstFrameDetected;
@property(retain, nonatomic) UIView *handGestureView; // @synthesize handGestureView=_handGestureView;
@property(retain, nonatomic) FMHandGestureFilter *handGestureFilter; // @synthesize handGestureFilter=_handGestureFilter;
- (void).cxx_destruct;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2;
- (void)processHandGestureRect:(struct KSHandGestureOut)arg1;
- (void)clear;
- (_Bool)faceRequired;
- (id)sceneFilter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

