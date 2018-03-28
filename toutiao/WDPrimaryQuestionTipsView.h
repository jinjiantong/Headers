//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedLabel, WDListViewModel;

@interface WDPrimaryQuestionTipsView : SSThemedView
{
    WDListViewModel *_viewModel;
    SSThemedLabel *_titleLabel;
    SSThemedView *_bottomLine;
}

@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WDListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (struct CGRect)frameForTitleLabel;
- (void)primaryTaped:(id)arg1;
- (void)refreshContentWithTitle:(id)arg1;
- (void)reload;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

@end
