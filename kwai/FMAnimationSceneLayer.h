//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMSceneLayer.h"

@class AVAudioPlayer, FMAnimation2dFilter, FMNormalizedFaceFeature, FMSprite2dFilter, NSArray;

@interface FMAnimationSceneLayer : FMSceneLayer
{
    _Bool _fullScreenRequireFace;
    _Bool _isRunBackGround;
    int _currentTriggerType;
    AVAudioPlayer *_audioPlayer;
    long long _sceneDuration;
    long long _sceneCurrentPlayTime;
    long long _sceneTime;
    NSArray *_sprites;
    double _sceneStartTime;
    FMNormalizedFaceFeature *_faceFeature;
    FMAnimation2dFilter *_animation2dFilter;
    long long _cameraPosition;
    FMSprite2dFilter *_sprite2dFilter;
}

+ (id)sceneWithResource:(id)arg1 materialProvider:(id)arg2 layerName:(id)arg3;
@property(nonatomic) _Bool isRunBackGround; // @synthesize isRunBackGround=_isRunBackGround;
@property(nonatomic) _Bool fullScreenRequireFace; // @synthesize fullScreenRequireFace=_fullScreenRequireFace;
@property(retain, nonatomic) FMSprite2dFilter *sprite2dFilter; // @synthesize sprite2dFilter=_sprite2dFilter;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(retain, nonatomic) FMAnimation2dFilter *animation2dFilter; // @synthesize animation2dFilter=_animation2dFilter;
@property(nonatomic) int currentTriggerType; // @synthesize currentTriggerType=_currentTriggerType;
@property(retain, nonatomic) FMNormalizedFaceFeature *faceFeature; // @synthesize faceFeature=_faceFeature;
@property(nonatomic) double sceneStartTime; // @synthesize sceneStartTime=_sceneStartTime;
@property(retain, nonatomic) NSArray *sprites; // @synthesize sprites=_sprites;
@property(nonatomic) long long sceneTime; // @synthesize sceneTime=_sceneTime;
@property(nonatomic) long long sceneCurrentPlayTime; // @synthesize sceneCurrentPlayTime=_sceneCurrentPlayTime;
@property(nonatomic) long long sceneDuration; // @synthesize sceneDuration=_sceneDuration;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
- (void).cxx_destruct;
- (void)didReceiveDidBecomeActive:(id)arg1;
- (void)didReceiveWillResignActive:(id)arg1;
- (id)sceneFilter;
- (_Bool)faceRequired;
- (void)setFaces:(id)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2;
- (void)clear;
- (void)playAudio;
- (void)loadFilterResource;
- (id)init;
- (void)dealloc;

@end

