//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEPOIInfoModel, NSArray;

@interface AWEPOIDetailResponse : AWEBaseApiModel
{
    AWEPOIInfoModel *_poiInfo;
    NSArray *_userList;
    unsigned long long _firstEnterType;
    long long _isShowCampusRank;
}

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long isShowCampusRank; // @synthesize isShowCampusRank=_isShowCampusRank;
@property(nonatomic) unsigned long long firstEnterType; // @synthesize firstEnterType=_firstEnterType;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(retain, nonatomic) AWEPOIInfoModel *poiInfo; // @synthesize poiInfo=_poiInfo;
- (void).cxx_destruct;

@end

