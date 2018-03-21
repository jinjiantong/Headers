//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MBKShortRideConfirmView : UIView
{
    CDUnknownBlockType _faultBlock;
    UIView *_reportView;
    UIView *_backgroundView;
    UIImageView *_confirmImageView;
    UILabel *_confirmLabel;
}

@property(retain, nonatomic) UILabel *confirmLabel; // @synthesize confirmLabel=_confirmLabel;
@property(retain, nonatomic) UIImageView *confirmImageView; // @synthesize confirmImageView=_confirmImageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *reportView; // @synthesize reportView=_reportView;
@property(copy, nonatomic) CDUnknownBlockType faultBlock; // @synthesize faultBlock=_faultBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unShowWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)show;
- (void)backGroundClicked:(id)arg1;
- (void)setUpReportViews;
- (id)init;

@end
