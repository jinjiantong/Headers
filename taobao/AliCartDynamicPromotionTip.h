//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AliCartBlockButton, TBCartDynamicPromotionComponent, UIImageView, UILabel;

@interface AliCartDynamicPromotionTip : UIView
{
    _Bool _isMulti;
    TBCartDynamicPromotionComponent *_compent;
    UILabel *_titleLabel;
    AliCartBlockButton *_nextBtn;
    UILabel *_nextTitleLabel;
    UIImageView *_arrowImgView;
    UIImageView *_iconImgView;
    CDUnknownBlockType _nextClickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType nextClickBlock; // @synthesize nextClickBlock=_nextClickBlock;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) UILabel *nextTitleLabel; // @synthesize nextTitleLabel=_nextTitleLabel;
@property(retain, nonatomic) AliCartBlockButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)registerAction;
- (void)bindData:(id)arg1 isMulti:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
