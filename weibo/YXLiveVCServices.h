//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface YXLiveVCServices : NSObject
{
}

+ (void)getAdSignModelWithSCID:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)defriendShowedPanelModel:(id)arg1 andLiveModel:(id)arg2 andVCType:(unsigned long long)arg3 withCompeletion:(CDUnknownBlockType)arg4;
+ (void)fieldControllerWithModel:(id)arg1 atLiveSCID:(id)arg2 andType:(long long)arg3 setActionCompeletionHandler:(CDUnknownBlockType)arg4;
+ (void)checkFansGroupExistWithPerformerID:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
+ (void)joinFansGroupWithPerformID:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
+ (void)getUserInfoWithModel:(id)arg1 andAnchorID:(id)arg2 liveID:(id)arg3 msgFrom:(long long)arg4 isCache:(_Bool)arg5 withResponseObject:(CDUnknownBlockType)arg6 failureResponseObject:(CDUnknownBlockType)arg7;
+ (void)getUserInfoWithUserID:(id)arg1 andAnchorID:(id)arg2 liveID:(id)arg3 msgFrom:(long long)arg4 withResponseObject:(CDUnknownBlockType)arg5 failureResponseObject:(CDUnknownBlockType)arg6;
+ (double)getMoreInfoPanelHeightWithDesc:(id)arg1 hasFollowBtn:(_Bool)arg2 hasBottomBtn:(_Bool)arg3;
+ (double)judgeDescHeightBy:(id)arg1;

@end

