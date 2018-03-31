//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/DirectionViewDelegate-Protocol.h>
#import <QQMainProject/GLKViewDelegate-Protocol.h>
#import <QQMainProject/IQZUrlDownloaderDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class CADisplayLink, CMAttitude, CMMotionManager, GLKView, NSMutableSet, NSString, PituGLProgram, QZDirectionView, QZPanoramaGuideView, QZPanoramaLoadingView, QZRotateRadius, UIImage, UIImageView;
@protocol QZPanoramaViewDelegate;

@interface QZPanoramaView : UIView <GLKViewDelegate, UIGestureRecognizerDelegate, IQZUrlDownloaderDelegate, DirectionViewDelegate>
{
    union _GLKMatrix4 _modelViewMatrix;
    union _GLKMatrix4 _projectionMatrix;
    NSMutableSet *_otherPanGesture;
    double _modelRadian;
    _Bool _modelBufferFinished;
    _Bool _textureBufferFinished;
    _Bool _shouldResponsePanGuesture;
    double _lastRotateX;
    double _lastRotateY;
    QZRotateRadius *_lastRotateRadius;
    QZRotateRadius *_panRotateRadius;
    _Bool _isIndicatorReset;
    struct CGPoint _endVelocity;
    _Bool _isInBackgroud;
    _Bool _isImageDownloadFinish;
    unsigned int _lastTexureBufferID;
    unsigned int _lastVertexBufferID;
    unsigned int _lastVertexTexCoordID;
    unsigned int _lastVertexIndicesBufferID;
    double _beginTime;
    _Bool _needShowGuideView;
    _Bool _hasInitAttitude;
    _Bool _shouldRestorePanoramaView;
    int _mvpMatrixID;
    int _numIndices;
    unsigned int _texureBufferID;
    unsigned int _vertexIndicesBufferID;
    unsigned int _vertexBufferID;
    unsigned int _vertexTexCoordID;
    unsigned int _vertexTexCoordAttributeIndex;
    NSString *_panoramaUrl;
    NSString *_bgImageUrl;
    UIImage *_panoramaImage;
    UIImage *_bgImage;
    long long _scene;
    id <QZPanoramaViewDelegate> _panoramaDelegate;
    GLKView *_glkView;
    long long _type;
    UIImageView *_bgImageView;
    CMMotionManager *_motionManager;
    CADisplayLink *_displayLink;
    PituGLProgram *_program;
    CMAttitude *_lastAttitude;
    CMAttitude *_initialAttitude;
    QZPanoramaLoadingView *_loadingView;
    QZPanoramaGuideView *_guideView;
    QZDirectionView *_indicatorView;
    struct CGPoint _lastPanPos;
}

@property(nonatomic) _Bool isInBackgroud; // @synthesize isInBackgroud=_isInBackgroud;
@property(nonatomic) _Bool shouldRestorePanoramaView; // @synthesize shouldRestorePanoramaView=_shouldRestorePanoramaView;
@property(retain, nonatomic) QZDirectionView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) QZPanoramaGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) QZPanoramaLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool hasInitAttitude; // @synthesize hasInitAttitude=_hasInitAttitude;
@property(retain, nonatomic) CMAttitude *initialAttitude; // @synthesize initialAttitude=_initialAttitude;
@property(retain, nonatomic) CMAttitude *lastAttitude; // @synthesize lastAttitude=_lastAttitude;
@property(nonatomic) struct CGPoint lastPanPos; // @synthesize lastPanPos=_lastPanPos;
@property(nonatomic) unsigned int vertexTexCoordAttributeIndex; // @synthesize vertexTexCoordAttributeIndex=_vertexTexCoordAttributeIndex;
@property(nonatomic) unsigned int vertexTexCoordID; // @synthesize vertexTexCoordID=_vertexTexCoordID;
@property(nonatomic) unsigned int vertexBufferID; // @synthesize vertexBufferID=_vertexBufferID;
@property(nonatomic) unsigned int vertexIndicesBufferID; // @synthesize vertexIndicesBufferID=_vertexIndicesBufferID;
@property(nonatomic) unsigned int texureBufferID; // @synthesize texureBufferID=_texureBufferID;
@property(nonatomic) int numIndices; // @synthesize numIndices=_numIndices;
@property(nonatomic) int mvpMatrixID; // @synthesize mvpMatrixID=_mvpMatrixID;
@property(retain, nonatomic) PituGLProgram *program; // @synthesize program=_program;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) GLKView *glkView; // @synthesize glkView=_glkView;
@property(nonatomic) __weak id <QZPanoramaViewDelegate> panoramaDelegate; // @synthesize panoramaDelegate=_panoramaDelegate;
@property(nonatomic) _Bool needShowGuideView; // @synthesize needShowGuideView=_needShowGuideView;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
@property(retain, nonatomic) UIImage *panoramaImage; // @synthesize panoramaImage=_panoramaImage;
@property(retain, nonatomic) NSString *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
@property(retain, nonatomic) NSString *panoramaUrl; // @synthesize panoramaUrl=_panoramaUrl;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)showIndicatorView;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)showGuideView;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (double)getFieldOfView;
- (void)modifyModelViewMatrix:(double)arg1 rotateY:(double)arg2;
- (double)getIndicatorRadian;
- (void)modifyTimerFrameInterval:(double)arg1;
- (id)getRotateRadius;
- (_Bool)update;
- (void)commitRender;
- (_Bool)canRender;
- (double)getRadianOfPoint;
- (void)onIndicatorClicked;
- (void)calculateOffsetOfDeacceleration;
- (void)handlePanGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)processImageLoadFinish;
- (void)setupTextureInfo:(id)arg1 withContext:(id)arg2;
- (void)processPanoramaImage:(id)arg1;
- (void)generateModelBuffer:(id)arg1 withContext:(id)arg2;
- (double)getRadianOfCylinder:(id)arg1;
- (double)ratioWidthHightOfCompleteCylinder;
- (id)preProcessImage:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)tearDownGL;
- (void)setupBuffers:(long long)arg1 modelRadian:(double)arg2 withContext:(id)arg3;
- (void)buildProgram;
- (void)setupGL;
- (void)stopTimer;
- (void)startTimer;
- (void)stopDeviceMotion;
- (void)startDeviceMotion;
- (void)addGesture;
- (void)stopRender;
- (void)startRender;
- (void)resetData;
- (void)dealloc;
- (void)removeNotification;
- (void)registerNotification;
- (void)layoutSubviews;
- (void)initBgView;
- (void)resetRotateStatus;
- (void)initParameter;
- (id)initWithFrame:(struct CGRect)arg1 type:(long long)arg2 scene:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

