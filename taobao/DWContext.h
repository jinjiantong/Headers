//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DWInstance, DWVideoFrontModel, DWVideoResources, NSDictionary, NSMutableDictionary, NSString;

@interface DWContext : NSObject
{
    _Bool _muted;
    _Bool _interactiveHidden;
    _Bool _onlyShowFullscreen;
    _Bool _notAutoPlay;
    _Bool _hiddenPlayingIcon;
    _Bool _shownMuteBtn;
    _Bool _UTFull;
    _Bool _UTComplete;
    float _controlsViewTopMargin;
    float _UTVideoDuration;
    DWInstance *_dwInstance;
    DWVideoFrontModel *_frontModel;
    NSMutableDictionary *_properties;
    NSDictionary *_recommendVideos;
    NSMutableDictionary *_parameters;
    double _userStartPlayTime;
    double _preloadStartTime;
    DWVideoResources *_videoResources;
    NSString *_UTLogToken;
}

+ (void)setOrientation:(long long)arg1;
+ (_Bool)fullScreen;
+ (void)setFullScreen:(_Bool)arg1;
+ (_Bool)isFreeFlowGuideEnabledForBusiness:(id)arg1;
+ (id)getTBMediaPlayerBundleOrangeConfig;
+ (id)getDWInteractiveSDKOrangeConfig;
+ (id)playerCoreABTestBucket;
+ (_Bool)isPlayerCoreABTestEnabledForBusiness:(id)arg1;
+ (id)interactiveVideoPlayerCoreMode;
+ (_Bool)enablePlayControlServiceBackupLogicWith:(id)arg1;
+ (_Bool)enableH265ForMachine;
+ (_Bool)enablePlayControlWith:(id)arg1;
+ (_Bool)enableMediaCacheWith:(id)arg1;
+ (_Bool)enableWithRule:(id)arg1 bizcoe:(id)arg2;
+ (_Bool)enableCacheWith:(id)arg1;
@property(retain, nonatomic) NSString *UTLogToken; // @synthesize UTLogToken=_UTLogToken;
@property(retain, nonatomic) DWVideoResources *videoResources; // @synthesize videoResources=_videoResources;
@property(nonatomic) double preloadStartTime; // @synthesize preloadStartTime=_preloadStartTime;
@property(nonatomic) double userStartPlayTime; // @synthesize userStartPlayTime=_userStartPlayTime;
@property(nonatomic) float UTVideoDuration; // @synthesize UTVideoDuration=_UTVideoDuration;
@property(nonatomic) _Bool UTComplete; // @synthesize UTComplete=_UTComplete;
@property(nonatomic) _Bool UTFull; // @synthesize UTFull=_UTFull;
@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool shownMuteBtn; // @synthesize shownMuteBtn=_shownMuteBtn;
@property(nonatomic) _Bool hiddenPlayingIcon; // @synthesize hiddenPlayingIcon=_hiddenPlayingIcon;
@property(nonatomic) _Bool notAutoPlay; // @synthesize notAutoPlay=_notAutoPlay;
@property(nonatomic) float controlsViewTopMargin; // @synthesize controlsViewTopMargin=_controlsViewTopMargin;
@property(nonatomic) _Bool onlyShowFullscreen; // @synthesize onlyShowFullscreen=_onlyShowFullscreen;
@property(nonatomic) _Bool interactiveHidden; // @synthesize interactiveHidden=_interactiveHidden;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(retain, nonatomic) NSDictionary *recommendVideos; // @synthesize recommendVideos=_recommendVideos;
@property(retain, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
@property(nonatomic) __weak DWVideoFrontModel *frontModel; // @synthesize frontModel=_frontModel;
@property(nonatomic) __weak DWInstance *dwInstance; // @synthesize dwInstance=_dwInstance;
- (void).cxx_destruct;
- (void)tLog:(id)arg1 msg:(id)arg2;
- (id)init;

@end

