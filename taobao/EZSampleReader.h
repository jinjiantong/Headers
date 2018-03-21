//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EZStreamTextureProvider-Protocol.h"

@class AVAssetReader, AVAssetReaderTrackOutput, NSString, NSURL;

@interface EZSampleReader : NSObject <EZStreamTextureProvider>
{
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_assetReaderOutput;
    struct opaqueCMSampleBuffer *sampleBuffer;
    int _frameCount;
    int _frameIndex;
    _Bool _looping;
    NSURL *_streamUrl;
    int _frameRate;
}

- (void).cxx_destruct;
- (void)seekToIndex:(int)arg1;
- (struct __CVBuffer *)currentPixelBuffer;
- (_Bool)retrievePixelBufferToDraw;
- (void)cancelLastTrack;
- (void)dealloc;
- (id)initWithUrl:(id)arg1 frameCount:(int)arg2 looping:(_Bool)arg3 frameRate:(float)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
