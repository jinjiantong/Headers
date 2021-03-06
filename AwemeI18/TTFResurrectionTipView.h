//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTFantasyButton, TTFantasyImageView, TTFantasyLabel, UIControl;
@protocol TTFResurrectionDelegate;

@interface TTFResurrectionTipView : UIView
{
    id <TTFResurrectionDelegate> _delegate;
    CDUnknownBlockType _shareTapped;
    TTFantasyButton *_touchControl;
    TTFantasyLabel *_topTipLabel;
    TTFantasyButton *_iconButton;
    UIView *_linkedLine;
    UIControl *_bottomTipControl;
    TTFantasyLabel *_bottomTipLabel;
    TTFantasyImageView *_arrowIconView;
}

@property(retain, nonatomic) TTFantasyImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) TTFantasyLabel *bottomTipLabel; // @synthesize bottomTipLabel=_bottomTipLabel;
@property(retain, nonatomic) UIControl *bottomTipControl; // @synthesize bottomTipControl=_bottomTipControl;
@property(retain, nonatomic) UIView *linkedLine; // @synthesize linkedLine=_linkedLine;
@property(retain, nonatomic) TTFantasyButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain, nonatomic) TTFantasyLabel *topTipLabel; // @synthesize topTipLabel=_topTipLabel;
@property(retain, nonatomic) TTFantasyButton *touchControl; // @synthesize touchControl=_touchControl;
@property(copy, nonatomic) CDUnknownBlockType shareTapped; // @synthesize shareTapped=_shareTapped;
@property(nonatomic) __weak id <TTFResurrectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideViews:(_Bool)arg1;
- (void)shrinkTip;
- (void)expendTip;
- (void)setHasLife:(_Bool)arg1;
- (void)enableLife:(_Bool)arg1;
- (void)setLifes:(long long)arg1;
- (void)buttonTouched;
- (void)initComponents;
- (id)initWithFrame:(struct CGRect)arg1;

@end

