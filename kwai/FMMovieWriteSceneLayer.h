//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMSceneLayer.h"

#import "FMPlaybackControllableScene-Protocol.h"

@class DepthMotionSensor, GPUImageFilter, GPUImageMovieWriter, GPUImageTransformFilter, NSString, NSURL;

@interface FMMovieWriteSceneLayer : FMSceneLayer <FMPlaybackControllableScene>
{
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *fp;
    DepthMotionSensor *imu;
    struct DepthProc *depthFile;
    _Bool skipVersion;
    _Bool pause;
    _Bool _capDepthData;
    GPUImageFilter *_filter;
    GPUImageTransformFilter *_transformFilter;
    GPUImageMovieWriter *_movieWriter;
    NSURL *_videoFileURL;
    NSString *_depthFilePath;
}

+ (id)sceneWithResource:(id)arg1 materialProvider:(id)arg2 layerName:(id)arg3;
@property(retain, nonatomic) NSString *depthFilePath; // @synthesize depthFilePath=_depthFilePath;
@property(retain, nonatomic) NSURL *videoFileURL; // @synthesize videoFileURL=_videoFileURL;
@property(retain, nonatomic) GPUImageMovieWriter *movieWriter; // @synthesize movieWriter=_movieWriter;
@property(retain, nonatomic) GPUImageTransformFilter *transformFilter; // @synthesize transformFilter=_transformFilter;
@property(retain, nonatomic) GPUImageFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) _Bool capDepthData; // @synthesize capDepthData=_capDepthData;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetMovieWriter;
- (void)saveData:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2;
- (void)processDepthData:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2 connection:(id)arg3;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)start;
- (id)sceneFilter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
