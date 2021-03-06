//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedLabel, WDPostQuestionReviewStatusViewModel, WDQuestionReviewStateTagView, WDQuestionReviewStatusImageBoxView;

@interface WDPostQuestionReviewStatusContentView : SSThemedView
{
    WDPostQuestionReviewStatusViewModel *_viewModel;
    WDQuestionReviewStateTagView *_tagView;
    SSThemedLabel *_questTitleLabel;
    SSThemedLabel *_questContentLabel;
    WDQuestionReviewStatusImageBoxView *_imageBoxView;
}

@property(retain, nonatomic) WDQuestionReviewStatusImageBoxView *imageBoxView; // @synthesize imageBoxView=_imageBoxView;
@property(retain, nonatomic) SSThemedLabel *questContentLabel; // @synthesize questContentLabel=_questContentLabel;
@property(retain, nonatomic) SSThemedLabel *questTitleLabel; // @synthesize questTitleLabel=_questTitleLabel;
@property(retain, nonatomic) WDQuestionReviewStateTagView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) WDPostQuestionReviewStatusViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)entity;
- (double)heightForContentLabelWithMaxNumberOfLines:(long long)arg1;
- (double)heightForTitleLabel;
- (void)updateContentLabel;
- (void)updateTitleLabel;
- (struct CGRect)frameForImageBoxView;
- (struct CGRect)frameForDescLabel;
- (struct CGRect)frameForTitleLabel;
- (struct CGRect)frameForTagView;
- (void)reload;
- (void)refresh;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;
- (void)dealloc;

@end

