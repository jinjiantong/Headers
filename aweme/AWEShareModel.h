//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSString;

@interface AWEShareModel : AWEBaseApiModel
{
    NSString *_shareUrl;
    AWEURLModel *_shareQRCodeURL;
    AWEURLModel *_shareImageURL;
    NSString *_shareWeiboDesc;
    NSString *_shareTitle;
    NSString *_shareDesc;
    NSString *_manageGoodsURL;
}

+ (id)shareImageURLJSONTransformer;
+ (id)shareQRCodeURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *manageGoodsURL; // @synthesize manageGoodsURL=_manageGoodsURL;
@property(retain, nonatomic) NSString *shareDesc; // @synthesize shareDesc=_shareDesc;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *shareWeiboDesc; // @synthesize shareWeiboDesc=_shareWeiboDesc;
@property(retain, nonatomic) AWEURLModel *shareImageURL; // @synthesize shareImageURL=_shareImageURL;
@property(retain, nonatomic) AWEURLModel *shareQRCodeURL; // @synthesize shareQRCodeURL=_shareQRCodeURL;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
- (void).cxx_destruct;

@end
