//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LFCNewsfeedBriefInfo.h"

@class NSArray, NSString;

@interface LFCNewsfeedDetailInfo : LFCNewsfeedBriefInfo
{
    int _rewardNum;
    NSString *_totalRewards;
    NSArray *_rewardsInLC;
    NSArray *_praiseList;
    NSArray *_commentList;
}

+ (Class)commentListElementClass;
+ (Class)praiseListElementClass;
+ (Class)rewardsInLCElementClass;
@property(retain, nonatomic) NSArray *commentList; // @synthesize commentList=_commentList;
@property(retain, nonatomic) NSArray *praiseList; // @synthesize praiseList=_praiseList;
@property(retain, nonatomic) NSArray *rewardsInLC; // @synthesize rewardsInLC=_rewardsInLC;
@property(retain, nonatomic) NSString *totalRewards; // @synthesize totalRewards=_totalRewards;
@property(nonatomic) int rewardNum; // @synthesize rewardNum=_rewardNum;
- (void).cxx_destruct;

@end
