//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWERedPacketShareModel, UIButton, UIImageView, UILabel;

@interface AWERedPacketTextShareAlertView : UIView
{
    AWERedPacketShareModel *_shareModel;
    UIView *_gradientView;
    UIImageView *_bgImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_pasteBtn;
    UIButton *_dismissBtn;
}

@property(retain, nonatomic) UIButton *dismissBtn; // @synthesize dismissBtn=_dismissBtn;
@property(retain, nonatomic) UIButton *pasteBtn; // @synthesize pasteBtn=_pasteBtn;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) AWERedPacketShareModel *shareModel; // @synthesize shareModel=_shareModel;
- (void).cxx_destruct;
- (void)closeTextShareAlert;
- (void)pasteTextTouchedAction;
- (void)updateViewContent;
- (void)setupSubviews;
- (void)showFromView:(id)arg1;
- (void)show;
- (id)initWithShareModel:(id)arg1;

@end
