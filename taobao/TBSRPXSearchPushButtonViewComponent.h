//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchMainViewComponent.h"

#import "CAAnimationDelegate-Protocol.h"
#import "TBSRPXSearchFloatViewDelegate-Protocol.h"

@class NSString, TBSRPXSearchPushButtonViewModel, TBSearchBaseUIView, TBSearchTriangleView, UIButton, UIImageView, UILabel, UIView;
@protocol TBSRPXSearchFloatViewDelegate;

@interface TBSRPXSearchPushButtonViewComponent : TBXSearchMainViewComponent <TBSRPXSearchFloatViewDelegate, CAAnimationDelegate>
{
    TBSRPXSearchPushButtonViewModel *_viewModel;
    UIButton *_iconButton;
    UIImageView *_iconNormalImageView;
    UIImageView *_iconHighlightImageView;
    UIButton *_hintTextContainerButton;
    TBSearchBaseUIView *_hintTextBackgroundView;
    TBSearchTriangleView *_hintTextTriangleView;
    UILabel *_hintTextLabel;
    UIView *_redDotView;
    UIImageView *_enterIconView;
    struct CGRect _viewFrame;
}

@property(retain, nonatomic) UIImageView *enterIconView; // @synthesize enterIconView=_enterIconView;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) UILabel *hintTextLabel; // @synthesize hintTextLabel=_hintTextLabel;
@property(retain, nonatomic) TBSearchTriangleView *hintTextTriangleView; // @synthesize hintTextTriangleView=_hintTextTriangleView;
@property(retain, nonatomic) TBSearchBaseUIView *hintTextBackgroundView; // @synthesize hintTextBackgroundView=_hintTextBackgroundView;
@property(retain, nonatomic) UIButton *hintTextContainerButton; // @synthesize hintTextContainerButton=_hintTextContainerButton;
@property(retain, nonatomic) UIImageView *iconHighlightImageView; // @synthesize iconHighlightImageView=_iconHighlightImageView;
@property(retain, nonatomic) UIImageView *iconNormalImageView; // @synthesize iconNormalImageView=_iconNormalImageView;
@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(retain, nonatomic) TBSRPXSearchPushButtonViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)getRealView;
- (void)configSearchService:(id)arg1;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)onIconBtnClick:(id)arg1;
- (void)renderPromotionHintText;
- (void)renderHintText;
- (void)hideStrongGuide;
- (void)disappear;
- (void)renderIconHightlightImageView;
- (void)renderIconNormalImageView;
- (void)dataLoaded;
- (void)loadView;
- (long long)showType;
- (void)setViewModelData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <TBSRPXSearchFloatViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

