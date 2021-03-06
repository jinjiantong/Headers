//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString, TBBannerShareInfoModel, TBQQUserInfoModel;

@interface TBFeedBannerModel : QQModel
{
    unsigned int _date;
    NSString *_feedID;
    TBQQUserInfoModel *_user;
    NSString *_blur;
    NSString *_schema;
    NSString *_content;
    NSString *_coverUrl;
    double _width;
    double _height;
    TBBannerShareInfoModel *_shareInfo;
    unsigned long long _recommendID;
    NSString *_titleWording;
}

+ (id)createWithPBData:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSString *titleWording; // @synthesize titleWording=_titleWording;
@property(nonatomic) unsigned long long recommendID; // @synthesize recommendID=_recommendID;
@property(retain, nonatomic) TBBannerShareInfoModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString *blur; // @synthesize blur=_blur;
@property(retain, nonatomic) TBQQUserInfoModel *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) unsigned int date; // @synthesize date=_date;
- (void)dealloc;
- (void)removeFakeFeedVideoInfo;

@end

