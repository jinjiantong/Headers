//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSearchBaseCell.h"

#import "TBSearchItemCellMaskDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, TBSearchIconViewComponent, TBSearchImageView, TBSearchItemCellShopInfoView, TBSearchPriceLabel, TBSearchShopDiscountView, TBSearchSummaryTipsView, TBSearchTitleView, TBSearchWapItem, TBXSearchItemCellLongPressManager, TBXSearchItemCellMaskBase, UIButton, UIImageView, UILabel;

@interface TBXSearchItemAuctionNewCell : TBSearchBaseCell <TBSearchItemCellMaskDelegate, UIGestureRecognizerDelegate>
{
    TBSearchWapItem *_model;
    TBSearchImageView *_productImageView;
    TBSearchTitleView *_titleView;
    TBSearchPriceLabel *_priceLabelLeft;
    UILabel *_numLabel;
    UIButton *_moreButton;
    UIImageView *_p4pIconImageView;
    UIImageView *_preTitleIconImageView;
    TBXSearchItemCellMaskBase *_maskView;
    NSArray *_iconListArray;
    UILabel *_locLabel;
    UILabel *_daySoldLabel;
    TBSearchIconViewComponent *_iconViewComponent;
    UIButton *_cartButton;
    TBXSearchItemCellLongPressManager *_lpmanager;
    TBSearchItemCellShopInfoView *_shopInfoView;
    TBSearchSummaryTipsView *_summaryTipsView;
    TBSearchShopDiscountView *_shopDiscountView;
}

+ (struct CGSize)cellSizeWithModel:(id)arg1 searchService:(id)arg2 layoutStyle:(int)arg3;
@property(retain, nonatomic) TBSearchShopDiscountView *shopDiscountView; // @synthesize shopDiscountView=_shopDiscountView;
@property(retain, nonatomic) TBSearchSummaryTipsView *summaryTipsView; // @synthesize summaryTipsView=_summaryTipsView;
@property(retain, nonatomic) TBSearchItemCellShopInfoView *shopInfoView; // @synthesize shopInfoView=_shopInfoView;
@property(retain, nonatomic) TBXSearchItemCellLongPressManager *lpmanager; // @synthesize lpmanager=_lpmanager;
@property(retain, nonatomic) UIButton *cartButton; // @synthesize cartButton=_cartButton;
@property(retain, nonatomic) TBSearchIconViewComponent *iconViewComponent; // @synthesize iconViewComponent=_iconViewComponent;
@property(retain, nonatomic) UILabel *daySoldLabel; // @synthesize daySoldLabel=_daySoldLabel;
@property(retain, nonatomic) UILabel *locLabel; // @synthesize locLabel=_locLabel;
@property(retain, nonatomic) NSArray *iconListArray; // @synthesize iconListArray=_iconListArray;
@property(retain, nonatomic) TBXSearchItemCellMaskBase *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *preTitleIconImageView; // @synthesize preTitleIconImageView=_preTitleIconImageView;
@property(retain, nonatomic) UIImageView *p4pIconImageView; // @synthesize p4pIconImageView=_p4pIconImageView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) TBSearchPriceLabel *priceLabelLeft; // @synthesize priceLabelLeft=_priceLabelLeft;
@property(retain, nonatomic) TBSearchTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) TBSearchImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) id model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setCellAccessibilty;
- (void)didSelect;
- (void)hideMask;
- (void)setImageviewByUrl:(id)arg1 layout:(int)arg2 doCutting:(_Bool)arg3;
- (void)changePreTitleColor;
- (void)changeTitleColorToGray;
- (void)addcart;
- (void)adjustViews;
- (void)setLayout:(int)arg1;
- (void)render;
- (void)onShopInfoClick:(id)arg1;
- (void)removeMaskView:(id)arg1;
- (void)longPress:(id)arg1;
- (void)cellMoreButtonClicked:(id)arg1;
- (void)whenMoreButtonClicked;
- (void)createMaskViewWithClassString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

