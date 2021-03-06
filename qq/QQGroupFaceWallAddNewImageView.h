//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class QQCircularProgressView, UIView;

@interface QQGroupFaceWallAddNewImageView : UIImageView
{
    QQCircularProgressView *_progressView;
    UIView *_maskView;
    double _process;
    UIView *_maskProcessView;
    UIView *_verifyingView;
}

@property(retain, nonatomic) UIView *verifyingView; // @synthesize verifyingView=_verifyingView;
- (void)hideAddButtonView;
- (void)showAddButtonView;
- (void)hideVerifyingView;
- (void)showVerifyingView;
- (void)hideMaskProcessView;
- (void)showMaskProcessView:(double)arg1;
- (void)updateMaskProcessView:(double)arg1;
- (void)updateProgressView:(double)arg1;
- (void)showProgressLoading;
- (void)hideMaskView;
- (void)showMaskView:(double)arg1;
- (void)hideProgressView;
- (void)showProgressView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

