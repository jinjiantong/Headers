//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCNRenderer;
@protocol MTLCommandQueue, MTLTexture;

@interface QZTTARSceneRenderer : NSObject
{
    // Error parsing type: AB, name: _isRendering
    unsigned long long _loadAction;
    _Bool _antiAlias;
    _Bool _enableDefaultLighting;
    struct CGSize _canvasSize;
    SCNRenderer *_scnRenderer;
    id <MTLTexture> _writeableTexture;
    id <MTLTexture> _msaaTexture;
    id <MTLCommandQueue> _metalCmdQueue;
    struct CGRect _textureBounds;
    CDStruct_3ead2808 _clearColor;
}

@property(nonatomic) CDStruct_3ead2808 clearColor; // @synthesize clearColor=_clearColor;
- (void)renderTextureAtTime:(double)arg1;
- (void)prepUsingSCNView:(id)arg1 withCanvasSize:(struct CGSize)arg2;
- (id)init;

@end

