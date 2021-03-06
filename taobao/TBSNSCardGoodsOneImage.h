//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSCardView.h"

@class UIImageView, UILabel, UIView;

@interface TBSNSCardGoodsOneImage : TBSNSCardView
{
    UIImageView *_avataBg;
    UIImageView *_avata;
    UILabel *_nameLabel;
    UILabel *_postfeeLabel;
    UILabel *_provcityLabel;
    UILabel *_shopIconLabel;
    UILabel *_shopNameLabel;
    UILabel *_priceIconLabel;
    UILabel *_priceBigLabel;
    UILabel *_priceSmallLabel;
    UILabel *_customCountLabel;
    UIView *_line;
}

+ (struct CGSize)fixedSize;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *customCountLabel; // @synthesize customCountLabel=_customCountLabel;
@property(retain, nonatomic) UILabel *priceSmallLabel; // @synthesize priceSmallLabel=_priceSmallLabel;
@property(retain, nonatomic) UILabel *priceBigLabel; // @synthesize priceBigLabel=_priceBigLabel;
@property(retain, nonatomic) UILabel *priceIconLabel; // @synthesize priceIconLabel=_priceIconLabel;
@property(retain, nonatomic) UILabel *shopNameLabel; // @synthesize shopNameLabel=_shopNameLabel;
@property(retain, nonatomic) UILabel *shopIconLabel; // @synthesize shopIconLabel=_shopIconLabel;
@property(retain, nonatomic) UILabel *provcityLabel; // @synthesize provcityLabel=_provcityLabel;
@property(retain, nonatomic) UILabel *postfeeLabel; // @synthesize postfeeLabel=_postfeeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avata; // @synthesize avata=_avata;
- (void).cxx_destruct;
- (void)reset;
- (void)setShopName:(id)arg1;
- (void)setPrice:(id)arg1 customCount:(id)arg2;
- (void)setPostfee:(id)arg1 provcity:(id)arg2;
- (void)setGoodName:(id)arg1;
- (void)setAvataImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

