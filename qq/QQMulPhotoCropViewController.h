//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CropViewController.h>

#import <QQMainProject/PhotoCropDelegate-Protocol.h>

@class NSString, TBMultimediaEditCropComponent;

@interface QQMulPhotoCropViewController : CropViewController <PhotoCropDelegate>
{
    _Bool _hasModified;
    _Bool _hasRotateReport;
    _Bool _active;
    TBMultimediaEditCropComponent *_component;
}

@property(nonatomic) __weak TBMultimediaEditCropComponent *component; // @synthesize component=_component;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)photoCropDidRephotograp;
- (void)photoCropDidReset;
- (void)photoCropDidCut;
- (void)photoCropDidCancel;
- (void)photoCropDidChanged;
- (void)photoCropDidRotate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
