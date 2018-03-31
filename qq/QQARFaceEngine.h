//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, QQARFaceHandler;
@protocol OS_dispatch_queue, QQARFaceRecogProtocol;

@interface QQARFaceEngine : NSObject
{
    NSObject<OS_dispatch_queue> *_processQueue;
    double _lastFrameTime;
    _Bool _hasGetResponse;
    _Bool _pauseRecog;
    _Bool _isInProcess;
    _Bool _firstShowFace;
    id <QQARFaceRecogProtocol> _delegate;
    long long _faceRecogState;
    NSMutableArray *_pretreatList;
    NSMutableArray *_starRecogResult;
    QQARFaceHandler *_faceHandler;
}

@property(retain, nonatomic) QQARFaceHandler *faceHandler; // @synthesize faceHandler=_faceHandler;
@property(retain, nonatomic) NSMutableArray *starRecogResult; // @synthesize starRecogResult=_starRecogResult;
@property(retain, nonatomic) NSMutableArray *pretreatList; // @synthesize pretreatList=_pretreatList;
@property(nonatomic) long long faceRecogState; // @synthesize faceRecogState=_faceRecogState;
@property(nonatomic) __weak id <QQARFaceRecogProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)stopFaceTracking;
- (_Bool)resumeFaceTracking;
- (_Bool)pauseFaceTracking;
- (void)frameBufferUpdate:(id)arg1;
- (_Bool)checkLocalRecogState;
- (_Bool)startLocalFaceRecog;
- (_Bool)starFaceRecogResponse:(id)arg1;
- (void)dealloc;
- (void)resetData;
- (void)faceResourceReady;
- (id)init;

@end

