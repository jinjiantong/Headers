//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class HTSVideoPlayURLModel, HTSVideoPlayUserStatsModel, NSArray, NSNumber, NSString;

@interface HTSVideoPlayUserModel : MTLModel <MTLJSONSerializing>
{
    _Bool _birthdayVaild;
    _Bool _blockStatus;
    _Bool _sinaVerified;
    _Bool _canOthersDownloadVideo;
    NSNumber *_userID;
    NSNumber *_shortID;
    NSString *_nickName;
    NSString *_signature;
    NSNumber *_level;
    NSNumber *_birthday;
    NSString *_birthdayDescription;
    NSString *_constellation;
    NSString *_city;
    unsigned long long _followStatus;
    HTSVideoPlayUserStatsModel *_stats;
    NSArray *_topFans;
    HTSVideoPlayURLModel *_avatarLarge;
    HTSVideoPlayURLModel *_avatarThumb;
    HTSVideoPlayURLModel *_avatarMedium;
    NSNumber *_ticketCount;
    NSString *_sinaVerifiedReason;
    NSNumber *_topVipNo;
}

+ (id)topFansJSONTransformer;
+ (id)avatarLargeJSONTransformer;
+ (id)avatarMediumJSONTransformer;
+ (id)avatarThumbJSONTransformer;
+ (id)statsJSONTransformer;
+ (id)followStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) _Bool canOthersDownloadVideo; // @synthesize canOthersDownloadVideo=_canOthersDownloadVideo;
@property(readonly, nonatomic) NSNumber *topVipNo; // @synthesize topVipNo=_topVipNo;
@property(readonly, nonatomic) _Bool sinaVerified; // @synthesize sinaVerified=_sinaVerified;
@property(readonly, nonatomic) NSString *sinaVerifiedReason; // @synthesize sinaVerifiedReason=_sinaVerifiedReason;
@property(readonly, nonatomic) NSNumber *ticketCount; // @synthesize ticketCount=_ticketCount;
@property(readonly, nonatomic) HTSVideoPlayURLModel *avatarMedium; // @synthesize avatarMedium=_avatarMedium;
@property(readonly, nonatomic) HTSVideoPlayURLModel *avatarThumb; // @synthesize avatarThumb=_avatarThumb;
@property(readonly, nonatomic) HTSVideoPlayURLModel *avatarLarge; // @synthesize avatarLarge=_avatarLarge;
@property(readonly, nonatomic) NSArray *topFans; // @synthesize topFans=_topFans;
@property(readonly, nonatomic) HTSVideoPlayUserStatsModel *stats; // @synthesize stats=_stats;
@property(readonly, nonatomic) _Bool blockStatus; // @synthesize blockStatus=_blockStatus;
@property(nonatomic) unsigned long long followStatus; // @synthesize followStatus=_followStatus;
@property(readonly, nonatomic) NSString *city; // @synthesize city=_city;
@property(readonly, nonatomic) NSString *constellation; // @synthesize constellation=_constellation;
@property(readonly, nonatomic) NSString *birthdayDescription; // @synthesize birthdayDescription=_birthdayDescription;
@property(readonly, nonatomic) _Bool birthdayVaild; // @synthesize birthdayVaild=_birthdayVaild;
@property(readonly, nonatomic) NSNumber *birthday; // @synthesize birthday=_birthday;
@property(readonly, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(readonly, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(readonly, nonatomic) NSNumber *shortID; // @synthesize shortID=_shortID;
@property(readonly, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

