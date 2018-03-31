//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CNNibLoadView.h"

@class CNCabinetInfoViewModel, CNServiceCarButton, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface CNCabinetInfoView : CNNibLoadView
{
    CNCabinetInfoViewModel *_model;
    CNServiceCarButton *_evaluatedButton;
    NSLayoutConstraint *_evaluatedButtonWidth;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
}

@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak NSLayoutConstraint *evaluatedButtonWidth; // @synthesize evaluatedButtonWidth=_evaluatedButtonWidth;
@property(nonatomic) __weak CNServiceCarButton *evaluatedButton; // @synthesize evaluatedButton=_evaluatedButton;
@property(retain, nonatomic) CNCabinetInfoViewModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)jumpWithUrlString:(id)arg1;
- (void)cabinetButtonClicked:(id)arg1;
- (void)evaluatedButtonClicked;
- (void)updateModel;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) UIView *view; // @dynamic view;

@end

