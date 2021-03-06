//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString, TBFavoriteGoodListModel;
@protocol TBFavorGoodPriceTrendModel, TBFavoriteGoodIcon;

@interface TBFavoriteGoodModel : TBJSONModel
{
    _Bool _duplicatedItem;
    _Bool _marked;
    NSString *_similarItemUrl;
    NSString *_categoryId;
    NSString *_numId;
    NSString *_ownerId;
    NSString *_title;
    NSString *_img;
    NSString *_collecttime;
    NSString *_hitShelvesDate;
    NSString *_price;
    NSString *_promotionPrice;
    NSString *_collectPrice;
    NSString *_minPrice;
    NSString *_maxPrice;
    NSArray<TBFavorGoodPriceTrendModel> *_priceTrendList;
    NSString *_shopUrl;
    unsigned long long _saleType;
    NSString *_saleValue;
    TBFavoriteGoodListModel *_similarGoodList;
    long long _originFrom;
    NSString *_maskText;
    NSString *_maskForegroundColor;
    NSString *_maskBackgroundColor;
    NSArray<TBFavoriteGoodIcon> *_upIcons;
}

@property(nonatomic, getter=isMarked) _Bool marked; // @synthesize marked=_marked;
@property(nonatomic) _Bool duplicatedItem; // @synthesize duplicatedItem=_duplicatedItem;
@property(retain, nonatomic) NSArray<TBFavoriteGoodIcon> *upIcons; // @synthesize upIcons=_upIcons;
@property(retain, nonatomic) NSString *maskBackgroundColor; // @synthesize maskBackgroundColor=_maskBackgroundColor;
@property(retain, nonatomic) NSString *maskForegroundColor; // @synthesize maskForegroundColor=_maskForegroundColor;
@property(retain, nonatomic) NSString *maskText; // @synthesize maskText=_maskText;
@property(nonatomic) long long originFrom; // @synthesize originFrom=_originFrom;
@property(retain, nonatomic) TBFavoriteGoodListModel *similarGoodList; // @synthesize similarGoodList=_similarGoodList;
@property(retain, nonatomic) NSString *saleValue; // @synthesize saleValue=_saleValue;
@property(nonatomic) unsigned long long saleType; // @synthesize saleType=_saleType;
@property(retain, nonatomic) NSString *shopUrl; // @synthesize shopUrl=_shopUrl;
@property(retain, nonatomic) NSArray<TBFavorGoodPriceTrendModel> *priceTrendList; // @synthesize priceTrendList=_priceTrendList;
@property(retain, nonatomic) NSString *maxPrice; // @synthesize maxPrice=_maxPrice;
@property(retain, nonatomic) NSString *minPrice; // @synthesize minPrice=_minPrice;
@property(retain, nonatomic) NSString *collectPrice; // @synthesize collectPrice=_collectPrice;
@property(retain, nonatomic) NSString *promotionPrice; // @synthesize promotionPrice=_promotionPrice;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *hitShelvesDate; // @synthesize hitShelvesDate=_hitShelvesDate;
@property(retain, nonatomic) NSString *collecttime; // @synthesize collecttime=_collecttime;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
@property(retain, nonatomic) NSString *numId; // @synthesize numId=_numId;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSString *similarItemUrl; // @synthesize similarItemUrl=_similarItemUrl;
- (void).cxx_destruct;
- (_Bool)canEditSelectionState;

@end

