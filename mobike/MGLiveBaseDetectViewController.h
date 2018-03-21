//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MGLiveDetectionDelegate-Protocol.h"
#import "MGVideoDelegate-Protocol.h"

@class AVCaptureVideoPreviewLayer, MGLiveDetectionManager, MGVideoManager, NSString;

@interface MGLiveBaseDetectViewController : UIViewController <MGLiveDetectionDelegate, MGVideoDelegate>
{
    _Bool _tempFaceToLarge;
    AVCaptureVideoPreviewLayer *_previewLayer;
    MGVideoManager *_videoManager;
    MGLiveDetectionManager *_liveManager;
}

@property(nonatomic) _Bool tempFaceToLarge; // @synthesize tempFaceToLarge=_tempFaceToLarge;
@property(retain, nonatomic) MGLiveDetectionManager *liveManager; // @synthesize liveManager=_liveManager;
@property(retain, nonatomic) MGVideoManager *videoManager; // @synthesize videoManager=_videoManager;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void).cxx_destruct;
- (void)detectionManagerSucessLiveDetection:(id)arg1 liveDetectionType:(unsigned long long)arg2;
- (void)detectionManager:(id)arg1 checkError:(id)arg2;
- (void)detectionManager:(id)arg1 liveChangeAction:(int)arg2 timeOut:(unsigned long long)arg3 currentActionStep:(unsigned long long)arg4;
- (void)detectionManager:(id)arg1 finishWithError:(int)arg2;
- (void)detectionManager:(id)arg1 frameWithImage:(id)arg2;
- (void)detectionManager:(id)arg1 finishWithStep:(unsigned long long)arg2;
- (void)MGCaptureOutput:(id)arg1 error:(unsigned long long)arg2;
- (void)MGCaptureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)liveDetectionFinish:(int)arg1 checkOK:(_Bool)arg2 liveDetectionType:(unsigned long long)arg3;
- (void)detectionFaceRecover;
- (void)detectionFaceToLarge;
- (void)qualitayErrorMessage:(id)arg1;
- (void)starAnimation:(int)arg1 step:(long long)arg2 timeOut:(unsigned long long)arg3;
- (void)cancelDetect;
- (void)liveFaceDetection;
- (void)stopVideoWriter;
- (void)willStatLiveness;
- (void)defaultSetting;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithDefauleSetting;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
