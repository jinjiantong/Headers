//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MAMapCameraInfo : NSObject
{
    double _cameraFov;
    double _aspectRatio;
    struct cameraVec3 _cameraFrom;
    struct cameraEulerAngle _cameraEulerAngle;
}

@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) struct cameraEulerAngle cameraEulerAngle; // @synthesize cameraEulerAngle=_cameraEulerAngle;
@property(nonatomic) double cameraFov; // @synthesize cameraFov=_cameraFov;
@property(nonatomic) struct cameraVec3 cameraFrom; // @synthesize cameraFrom=_cameraFrom;

@end
