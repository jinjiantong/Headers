//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBCameraManagerCaptureOutputDelegate-Protocol.h"
#import "WBCameraVideoFilterDelegate-Protocol.h"

@class EAGLContext, NSArray, NSError, NSMutableDictionary, NSString, UIView, WBCameraCaptureMediaWriter, WBCameraManager, WBCameraVideoBeautyFilter;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, WBCameraVideoFilterProtocol><WBCameraVideoLookupFilterProtocol;

@interface WBCameraVideoOutputManager : NSObject <WBCameraVideoFilterDelegate, WBCameraManagerCaptureOutputDelegate>
{
    _Bool _renderByGPUImage;
    UIView *_previewView;
    NSArray *_filterList;
    WBCameraManager *_cameraManager;
    CDUnknownBlockType _beautyAvailable;
    id <WBCameraVideoFilterProtocol><WBCameraVideoLookupFilterProtocol> _videoLookupFilter;
    WBCameraVideoBeautyFilter *_videoBeautyFilter;
    WBCameraCaptureMediaWriter *_mediaWriter;
    NSObject<OS_dispatch_queue> *_writerQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
    NSObject<OS_dispatch_semaphore> *_renderSemaphore;
    NSError *_writerError;
    NSMutableDictionary *_writerLog;
    EAGLContext *_currentContext;
}

@property(retain, nonatomic) EAGLContext *currentContext; // @synthesize currentContext=_currentContext;
@property(retain, nonatomic) NSMutableDictionary *writerLog; // @synthesize writerLog=_writerLog;
@property(retain, nonatomic) NSError *writerError; // @synthesize writerError=_writerError;
@property(nonatomic) _Bool renderByGPUImage; // @synthesize renderByGPUImage=_renderByGPUImage;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *renderSemaphore; // @synthesize renderSemaphore=_renderSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writerQueue; // @synthesize writerQueue=_writerQueue;
@property(retain, nonatomic) WBCameraCaptureMediaWriter *mediaWriter; // @synthesize mediaWriter=_mediaWriter;
@property(retain, nonatomic) WBCameraVideoBeautyFilter *videoBeautyFilter; // @synthesize videoBeautyFilter=_videoBeautyFilter;
@property(retain, nonatomic) id <WBCameraVideoFilterProtocol><WBCameraVideoLookupFilterProtocol> videoLookupFilter; // @synthesize videoLookupFilter=_videoLookupFilter;
@property(copy, nonatomic) CDUnknownBlockType beautyAvailable; // @synthesize beautyAvailable=_beautyAvailable;
@property(nonatomic) __weak WBCameraManager *cameraManager; // @synthesize cameraManager=_cameraManager;
@property(retain, nonatomic) NSArray *filterList; // @synthesize filterList=_filterList;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
- (void).cxx_destruct;
- (id)getWriterStatistics;
- (void)cleanRenderLog;
- (id)getStatistics;
- (void)getImageWithFilterEffect:(id)arg1 completeHandle:(CDUnknownBlockType)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)getBeautyAvailable:(CDUnknownBlockType)arg1;
- (void)setBeautyStatus:(_Bool)arg1;
- (void)processVideoWithFilterLeft:(unsigned long long)arg1 right:(unsigned long long)arg2 divide:(double)arg3;
- (void)wbCameraVideoFilter:(id)arg1 outTexture:(int)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)wbCameraDidOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)cancelVideoCapture;
- (void)stopVideoCapture:(_Bool)arg1 compeletion:(CDUnknownBlockType)arg2;
- (void)endVideoCaptureCompletion:(CDUnknownBlockType)arg1;
- (void)_startCapture;
- (void)startVideoCapture;
- (void)resetMediaWriter;
- (void)tearDownMediaWriter;
- (void)setupMediaWriter;
@property(readonly, nonatomic) _Bool isRecording;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

