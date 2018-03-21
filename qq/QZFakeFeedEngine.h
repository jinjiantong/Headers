//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBaseEngine.h>

@interface QZFakeFeedEngine : QZBaseEngine
{
}

+ (id)instance;
- (void)removeFeedWithClientKey:(id)arg1 notify:(_Bool)arg2;
- (void)addFeed:(id)arg1 withClientKey:(id)arg2;
- (_Bool)fakeUploadPhotosWithFeed:(id)arg1 withClientKey:(id)arg2 withFeedLevel:(long long)arg3;
- (_Bool)fakeUploadPhotos:(id)arg1 video:(id)arg2 pictureCount:(long long)arg3 albumId:(id)arg4 albumName:(id)arg5 desc:(id)arg6 withClientKey:(id)arg7 gpsInfo:(id)arg8 lbsAddress:(id)arg9 shootModel:(id)arg10 albumRight:(long long)arg11 albumAnonymity:(long long)arg12 individualAlbum:(long long)arg13 isShareAlbum:(_Bool)arg14 coverUrl:(id)arg15 extendInfo:(id)arg16;
- (_Bool)fakeWriteMoodWithFeed:(id)arg1 withClientKey:(id)arg2 requestID:(long long)arg3;
- (_Bool)fakeWriteMoodWithContent:(id)arg1 hasMoreContent:(unsigned long long)arg2 photos:(id)arg3 photoCount:(long long)arg4 video:(id)arg5 movieAlbum:(id)arg6 withClientKey:(id)arg7 lbsModel:(id)arg8 shootModel:(id)arg9 lbsAddress:(id)arg10 ugcRight:(unsigned long long)arg11 extendInfo:(id)arg12 otherInfo:(id)arg13;
- (void)genFakeFont:(id)arg1 feedModel:(id)arg2;
- (void)genFakeFrdList:(id)arg1;
- (id)genFakeLike;
- (id)genFakeReplyWithContent:(id)arg1 target:(id)arg2 extendInfo:(id)arg3;
- (id)genFakeCommmentWithContent:(id)arg1 commentId:(id)arg2 photoModel:(id)arg3 photoFrom:(long long)arg4 picCommentList:(id)arg5 extendInfo:(id)arg6;
- (id)genFakeCommmentWithContent:(id)arg1 commentId:(id)arg2 photoModel:(id)arg3 photoFrom:(long long)arg4 extendInfo:(id)arg5;
- (id)genFakeCommmentWithContent:(id)arg1 commentId:(id)arg2 photoModel:(id)arg3;
- (id)genFakeCommmentWithContent:(id)arg1 commentId:(id)arg2 photoModel:(id)arg3 extendInfo:(id)arg4;
- (id)genFakeCommmentWithContent:(id)arg1 commentId:(id)arg2 picCommentList:(id)arg3 extendInfo:(id)arg4;
- (id)genClientKey;
- (void)updateUploadPhotosForFeed:(id)arg1 albumId:(id)arg2 albumName:(id)arg3 pictureList:(id)arg4 pictureCount:(long long)arg5 video:(id)arg6 desc:(id)arg7 clientKey:(id)arg8 gpsInfo:(id)arg9 lbsAddress:(id)arg10 shootModel:(id)arg11 albumRight:(long long)arg12 albumAnonymity:(long long)arg13 individualAlbum:(long long)arg14 isShareAlbum:(_Bool)arg15 coverUrl:(id)arg16 extendInfo:(id)arg17;
- (id)generateFakeFeedsDeco;
- (id)generateFakeFeedCellUser;
- (_Bool)generateFakeRedBonusFeedWithKey:(id)arg1;
- (void)updateMoodDataForFeed:(id)arg1 content:(id)arg2 hasMoreContent:(_Bool)arg3 pictureList:(id)arg4 pictureCount:(long long)arg5 video:(id)arg6 clientKey:(id)arg7 lbsModel:(id)arg8 shootModel:(id)arg9 lbsAddress:(id)arg10 ugcRight:(unsigned long long)arg11 extendInfo:(id)arg12 otherInfo:(id)arg13;
- (id)extractBottomRecomm:(id)arg1;

@end
