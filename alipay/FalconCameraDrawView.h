//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface FalconCameraDrawView : UIView
{
    _Bool isCanFocus;
    struct CGRect idCardRangeRect;
    UIButton *shadowView;
    BOOL _edgeLine;
    id _capturePhotoDelegate;
}

@property(nonatomic) __weak id capturePhotoDelegate; // @synthesize capturePhotoDelegate=_capturePhotoDelegate;
@property(nonatomic) BOOL edgeLine; // @synthesize edgeLine=_edgeLine;
- (void).cxx_destruct;
- (void)takePhoto:(id)arg1;
- (void)drawEdge:(struct CGContext *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setIdCardRangeRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
