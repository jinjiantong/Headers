//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class TTVDetailFollowUserRecommendInfoModelUserInfo, TTVDetailFollowUserRecommendInfoModelUserRelation;
@protocol Optional;

@interface TTVDetailFollowUserRecommendInfoModelUser : JSONModel
{
    TTVDetailFollowUserRecommendInfoModelUserRelation<Optional> *_relation;
    TTVDetailFollowUserRecommendInfoModelUserInfo<Optional> *_info;
}

@property(retain, nonatomic) TTVDetailFollowUserRecommendInfoModelUserInfo<Optional> *info; // @synthesize info=_info;
@property(retain, nonatomic) TTVDetailFollowUserRecommendInfoModelUserRelation<Optional> *relation; // @synthesize relation=_relation;
- (void).cxx_destruct;

@end
