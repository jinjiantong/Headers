//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AliBShaderObject;

@interface AliBGLTransitionRender : NSObject
{
    unsigned int _programId;
    unsigned int _vertexBuffer;
    unsigned int _indexBuffer;
    unsigned int _vertexArray;
    unsigned int _imageHandlerFrom;
    unsigned int _imageHandlerTo;
    float _ratio;
    float _progress;
    AliBShaderObject *_shaderObject;
}

@property(retain, nonatomic) AliBShaderObject *shaderObject; // @synthesize shaderObject=_shaderObject;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) float ratio; // @synthesize ratio=_ratio;
@property(nonatomic) unsigned int imageHandlerTo; // @synthesize imageHandlerTo=_imageHandlerTo;
@property(nonatomic) unsigned int imageHandlerFrom; // @synthesize imageHandlerFrom=_imageHandlerFrom;
- (void).cxx_destruct;
- (void)dealloc;
- (void)render;
- (void)compileShader:(id)arg1 error:(id *)arg2;

@end

