//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSNumber;

@interface AWEGoodsListResponseModel : AWEBaseApiModel
{
    NSNumber *_maxDisplayCount;
    NSArray *_goodsList;
}

+ (id)goodsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *goodsList; // @synthesize goodsList=_goodsList;
@property(retain, nonatomic) NSNumber *maxDisplayCount; // @synthesize maxDisplayCount=_maxDisplayCount;
- (void).cxx_destruct;

@end

