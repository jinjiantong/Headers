//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class SSThemedImageView, SSThemedLabel, SSThemedView, TTCertificationConditionModel;

@interface TTCertificationConditionCell : SSThemedTableViewCell
{
    TTCertificationConditionModel *_model;
    SSThemedImageView *_iconView;
    SSThemedLabel *_titleLabel;
    SSThemedLabel *_regexLabel;
    SSThemedImageView *_completeImageView;
    SSThemedLabel *_completeButton;
    SSThemedView *_bottomLine;
}

@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedLabel *completeButton; // @synthesize completeButton=_completeButton;
@property(retain, nonatomic) SSThemedImageView *completeImageView; // @synthesize completeImageView=_completeImageView;
@property(retain, nonatomic) SSThemedLabel *regexLabel; // @synthesize regexLabel=_regexLabel;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SSThemedImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) TTCertificationConditionModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

