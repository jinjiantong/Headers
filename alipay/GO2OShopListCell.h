//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OTableViewCell.h"

@class GO2OShopListItem, O2OStarView, UIImageView, UILabel;

@interface GO2OShopListCell : GO2OTableViewCell
{
    _Bool _starHiden;
    UIImageView *_shopLogoView;
    UILabel *_shopNameLabel;
    O2OStarView *_starView;
    UILabel *_commentCountLabel;
    UILabel *_shopLabelLabel;
    UILabel *_shopDistrictLabel;
    UILabel *_distanceLabel;
    UILabel *_averagePriceLabel;
    GO2OShopListItem *_shopListItem;
}

+ (double)calHeightWithShopListItem:(id)arg1 inTableView:(id)arg2;
@property(nonatomic) _Bool starHiden; // @synthesize starHiden=_starHiden;
@property(retain, nonatomic) GO2OShopListItem *shopListItem; // @synthesize shopListItem=_shopListItem;
@property(retain, nonatomic) UILabel *averagePriceLabel; // @synthesize averagePriceLabel=_averagePriceLabel;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UILabel *shopDistrictLabel; // @synthesize shopDistrictLabel=_shopDistrictLabel;
@property(retain, nonatomic) UILabel *shopLabelLabel; // @synthesize shopLabelLabel=_shopLabelLabel;
@property(retain, nonatomic) UILabel *commentCountLabel; // @synthesize commentCountLabel=_commentCountLabel;
@property(retain, nonatomic) O2OStarView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UILabel *shopNameLabel; // @synthesize shopNameLabel=_shopNameLabel;
@property(retain, nonatomic) UIImageView *shopLogoView; // @synthesize shopLogoView=_shopLogoView;
- (void).cxx_destruct;
- (double)heightWithShopListItem:(id)arg1 inTableView:(id)arg2;
- (id)shopLabelString:(id)arg1;
- (void)configureCellWithShopListItem:(id)arg1 loadResource:(_Bool)arg2;
- (void)initCell;

@end

