//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXRDMARManagerProtocol-Protocol.h"

@class CMMotionManager, NSMutableArray, NSString, TBARMarkerRecognitionManager, TBARSlamRecognitionManager;

@interface WXRDMARManager : NSObject <WXRDMARManagerProtocol>
{
    struct _opaque_pthread_mutex_t lock;
    float quaternion[7];
    _Bool _markerRecognitionRunning;
    int _cameraWidth;
    int _cameraHeight;
    TBARSlamRecognitionManager *_slamRecognitionManager;
    TBARMarkerRecognitionManager *_markerRecognitionManager;
    NSString *_cameraParamFilePath;
    unsigned long long _arType;
    NSMutableArray *_markers;
    CMMotionManager *_motionManager;
}

@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) _Bool markerRecognitionRunning; // @synthesize markerRecognitionRunning=_markerRecognitionRunning;
@property(retain, nonatomic) NSMutableArray *markers; // @synthesize markers=_markers;
@property(nonatomic) unsigned long long arType; // @synthesize arType=_arType;
@property(copy, nonatomic) NSString *cameraParamFilePath; // @synthesize cameraParamFilePath=_cameraParamFilePath;
@property(nonatomic) int cameraHeight; // @synthesize cameraHeight=_cameraHeight;
@property(nonatomic) int cameraWidth; // @synthesize cameraWidth=_cameraWidth;
@property(retain, nonatomic) TBARMarkerRecognitionManager *markerRecognitionManager; // @synthesize markerRecognitionManager=_markerRecognitionManager;
@property(retain, nonatomic) TBARSlamRecognitionManager *slamRecognitionManager; // @synthesize slamRecognitionManager=_slamRecognitionManager;
- (void).cxx_destruct;
- (void)inputVideo:(char **)arg1 width:(int)arg2 height:(int)arg3;
- (void)stopSLAMDeviceMotionUpdate;
- (void)stopMarkerTracking;
- (void)destory;
- (void)startSLAMDeviceMotionUpdate;
- (id)devicePlatform;
- (id)yamlPathForDevice;
- (void)resetCenter;
- (void)setupSLAM;
- (void)internalAddMarkers;
- (void)removeMarkers:(id)arg1;
- (void)addMarkers:(id)arg1;
- (void)dealloc;
- (id)initWithCameraWidth:(int)arg1 cameraHeight:(int)arg2 cameraParamFilePath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
