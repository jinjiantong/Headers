//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class NSLayoutConstraint, SSThemedButton, SSThemedImageView, SSThemedLabel, UIButton, UIView;

@interface TTFullScreenErrorView : SSThemedView
{
    SSThemedLabel *_errorMsg;
    SSThemedLabel *_errorSubMsg;
    SSThemedImageView *_errorImage;
    SSThemedButton *_actionBtn;
    UIButton *_refreshButton;
    UIButton *_addConcernButton;
    unsigned long long _viewType;
    CDUnknownBlockType _customEmptyErrorMsgBlock;
    CDUnknownBlockType _customEmptyErrorImageNameBlock;
    CDUnknownBlockType _customFullScreenErrorViewBlock;
    NSLayoutConstraint *_errorImageWidthConstraint;
    NSLayoutConstraint *_errorImageHeightConstraint;
    UIView *_lastCustomErrorView;
}

@property(retain, nonatomic) UIView *lastCustomErrorView; // @synthesize lastCustomErrorView=_lastCustomErrorView;
@property(nonatomic) __weak NSLayoutConstraint *errorImageHeightConstraint; // @synthesize errorImageHeightConstraint=_errorImageHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *errorImageWidthConstraint; // @synthesize errorImageWidthConstraint=_errorImageWidthConstraint;
@property(copy, nonatomic) CDUnknownBlockType customFullScreenErrorViewBlock; // @synthesize customFullScreenErrorViewBlock=_customFullScreenErrorViewBlock;
@property(copy, nonatomic) CDUnknownBlockType customEmptyErrorImageNameBlock; // @synthesize customEmptyErrorImageNameBlock=_customEmptyErrorImageNameBlock;
@property(copy, nonatomic) CDUnknownBlockType customEmptyErrorMsgBlock; // @synthesize customEmptyErrorMsgBlock=_customEmptyErrorMsgBlock;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) UIButton *addConcernButton; // @synthesize addConcernButton=_addConcernButton;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) SSThemedButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) SSThemedImageView *errorImage; // @synthesize errorImage=_errorImage;
@property(retain, nonatomic) SSThemedLabel *errorSubMsg; // @synthesize errorSubMsg=_errorSubMsg;
@property(retain, nonatomic) SSThemedLabel *errorMsg; // @synthesize errorMsg=_errorMsg;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;

@end
