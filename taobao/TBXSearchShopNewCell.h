//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSearchBaseCell.h"

@class NSMutableArray, NSString, TBSearchIconViewComponent, TBSearchPropTagView, TBShopSearchNewShopView, TBShopSearchResultListItem, UILabel, UIView;

@interface TBXSearchShopNewCell : TBSearchBaseCell
{
    TBShopSearchResultListItem *_model;
    TBShopSearchNewShopView *_shopView;
    UILabel *_noItemLabel;
    NSMutableArray *_itemCardArray;
    NSString *_sellerId;
    NSString *_pageName;
    NSString *_keyword;
    TBShopSearchResultListItem *_item;
    TBSearchIconViewComponent *_iconViewComponent;
    TBSearchPropTagView *_propTagView;
    UIView *_containerView;
}

+ (double)heightOfCell:(id)arg1 searchService:(id)arg2;
+ (struct CGSize)cellSizeWithModel:(id)arg1 searchService:(id)arg2 layoutStyle:(int)arg3;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TBSearchPropTagView *propTagView; // @synthesize propTagView=_propTagView;
@property(retain, nonatomic) TBSearchIconViewComponent *iconViewComponent; // @synthesize iconViewComponent=_iconViewComponent;
@property(retain, nonatomic) TBShopSearchResultListItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) NSMutableArray *itemCardArray; // @synthesize itemCardArray=_itemCardArray;
@property(retain, nonatomic) UILabel *noItemLabel; // @synthesize noItemLabel=_noItemLabel;
@property(retain, nonatomic) TBShopSearchNewShopView *shopView; // @synthesize shopView=_shopView;
- (void)setModel:(id)arg1;
- (id)model;
- (void).cxx_destruct;
- (void)didSelect;
- (void)adjustViews;
- (id)createItemCardViewWithModel:(id)arg1 andIndex:(int)arg2 andItemViewFrame:(struct CGRect)arg3;
- (void)processItemWithModel:(id)arg1 andIndex:(int)arg2 andItemViewFrame:(struct CGRect)arg3;
- (void)render;
- (id)initWithFrame:(struct CGRect)arg1;

@end

