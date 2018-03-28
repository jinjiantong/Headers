//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString, TTShareModel;

@interface TTVFeedCellMoreActionModel : NSObject
{
    _Bool _hasVideo;
    NSNumber *_adID;
    NSString *_avatarUrl;
    NSNumber *_userRepined;
    NSNumber *_buryCount;
    NSNumber *_commentCount;
    NSNumber *_diggCount;
    NSNumber *_userDigg;
    NSNumber *_userBury;
    NSString *_userId;
    NSString *_groupId;
    NSString *_itemId;
    long long _groupFlags;
    NSNumber *_isSubscribe;
    NSString *_logExtra;
    TTShareModel *_shareModel;
    NSString *_videoSubjectID;
    NSNumber *_aggrType;
    long long _refer;
    NSString *_videoSource;
    NSArray *_commoditys;
    NSArray *_filterWords;
}

+ (id)modelWithArticle:(id)arg1;
@property(nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(retain, nonatomic) NSArray *filterWords; // @synthesize filterWords=_filterWords;
@property(copy, nonatomic) NSArray *commoditys; // @synthesize commoditys=_commoditys;
@property(copy, nonatomic) NSString *videoSource; // @synthesize videoSource=_videoSource;
@property(nonatomic) long long refer; // @synthesize refer=_refer;
@property(retain, nonatomic) NSNumber *aggrType; // @synthesize aggrType=_aggrType;
@property(copy, nonatomic) NSString *videoSubjectID; // @synthesize videoSubjectID=_videoSubjectID;
@property(retain, nonatomic) TTShareModel *shareModel; // @synthesize shareModel=_shareModel;
@property(retain, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(retain, nonatomic) NSNumber *isSubscribe; // @synthesize isSubscribe=_isSubscribe;
@property(nonatomic) long long groupFlags; // @synthesize groupFlags=_groupFlags;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSNumber *userBury; // @synthesize userBury=_userBury;
@property(retain, nonatomic) NSNumber *userDigg; // @synthesize userDigg=_userDigg;
@property(retain, nonatomic) NSNumber *diggCount; // @synthesize diggCount=_diggCount;
@property(retain, nonatomic) NSNumber *commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSNumber *buryCount; // @synthesize buryCount=_buryCount;
@property(retain, nonatomic) NSNumber *userRepined; // @synthesize userRepined=_userRepined;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSNumber *adID; // @synthesize adID=_adID;
- (void).cxx_destruct;

@end
