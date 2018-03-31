//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSearchBaseCell.h"

#import "TBSRPSearchItemCellMaskDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, TBSRPXSearchItemCellLongPressManager, TBSRPXSearchItemCellMaskBase, TBSRPXSearchService, TBSearchIconViewComponent, TBSearchImageView, TBSearchItemCellShopInfoView, TBSearchPriceLabel, TBSearchTitleView, TBSearchTmallItem, UIButton, UIImageView, UILabel;

@interface TBSRPXSearchItemTmallCell : XSearchBaseCell <TBSRPSearchItemCellMaskDelegate, UIGestureRecognizerDelegate>
{
    TBSearchTmallItem *_model;
    TBSearchImageView *_productImageView;
    TBSearchTitleView *_titleView;
    TBSearchPriceLabel *_priceLabelLeft;
    UILabel *_numLabel;
    UIButton *_moreButton;
    UIImageView *_p4pIconImageView;
    UIImageView *_preTitleIconImageView;
    UIButton *_sameBtn;
    UIButton *_similarBtn;
    TBSRPXSearchItemCellMaskBase *_maskView;
    NSArray *_iconListArray;
    UILabel *_daySoldLabel;
    TBSearchIconViewComponent *_iconViewComponent;
    TBSearchItemCellShopInfoView *_shopInfoView;
    UIButton *_cartButton;
    TBSRPXSearchItemCellLongPressManager *_lpmanager;
    UILabel *_propTagLabel;
}

+ (_Bool)hasGridIcon:(id)arg1;
+ (struct CGSize)cellSizeWithModel:(id)arg1 searchService:(id)arg2 layoutStyle:(long long)arg3;
@property(retain, nonatomic) UILabel *propTagLabel; // @synthesize propTagLabel=_propTagLabel;
@property(retain, nonatomic) TBSRPXSearchItemCellLongPressManager *lpmanager; // @synthesize lpmanager=_lpmanager;
@property(retain, nonatomic) UIButton *cartButton; // @synthesize cartButton=_cartButton;
@property(retain, nonatomic) TBSearchItemCellShopInfoView *shopInfoView; // @synthesize shopInfoView=_shopInfoView;
@property(retain, nonatomic) TBSearchIconViewComponent *iconViewComponent; // @synthesize iconViewComponent=_iconViewComponent;
@property(retain, nonatomic) UILabel *daySoldLabel; // @synthesize daySoldLabel=_daySoldLabel;
@property(retain, nonatomic) NSArray *iconListArray; // @synthesize iconListArray=_iconListArray;
@property(retain, nonatomic) TBSRPXSearchItemCellMaskBase *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *similarBtn; // @synthesize similarBtn=_similarBtn;
@property(retain, nonatomic) UIButton *sameBtn; // @synthesize sameBtn=_sameBtn;
@property(retain, nonatomic) UIImageView *preTitleIconImageView; // @synthesize preTitleIconImageView=_preTitleIconImageView;
@property(retain, nonatomic) UIImageView *p4pIconImageView; // @synthesize p4pIconImageView=_p4pIconImageView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) TBSearchPriceLabel *priceLabelLeft; // @synthesize priceLabelLeft=_priceLabelLeft;
@property(retain, nonatomic) TBSearchTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) TBSearchImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) TBSearchTmallItem *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)onShopInfoClick:(id)arg1;
- (void)didSelect;
- (void)longPress:(id)arg1;
- (_Bool)hasSame;
- (_Bool)hasSimilar;
- (void)cellMoreButtonClicked:(id)arg1;
- (void)hideMask;
- (void)setImageviewByUrl:(id)arg1 layout:(long long)arg2 doCutting:(_Bool)arg3;
- (void)changePreTitleColor;
- (void)changeTitleColorToGray;
- (void)addcart;
- (void)setCellAccessibilty;
- (void)adjustViews;
- (void)setLayout:(long long)arg1;
- (void)render;
- (void)removeMaskView:(id)arg1;
- (void)createMaskViewWithClassString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak TBSRPXSearchService *searchService; // @dynamic searchService;
@property(readonly) Class superclass;

@end

