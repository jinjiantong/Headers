//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQVIPFunctionComicStructureInfo : NSObject
{
}

- (void)getPicWithPreAcquisitionParm:(id)arg1 sectionId:(id)arg2 picInfo:(id)arg3 preAcquisitionParam:(id)arg4 withUserInfo:(id)arg5 isAlreadySuccessDownload:(_Bool)arg6 delegete:(id)arg7;
- (int)getSectionPicInfosBySectionId:(id)arg1 sectionId:(id)arg2 preferLocal:(_Bool)arg3;
- (int)getComcInfoByComicId:(id)arg1 pageInfo:(id)arg2 detailMode:(int)arg3 preferLocal:(_Bool)arg4;
- (int)getComcInfoByComicId:(id)arg1 pageInfo:(id)arg2;
- (int)getSimpleComicSectionInfoByComicId:(id)arg1 sectionId:(id)arg2;
- (void)errGetComcInfo:(id)arg1 pageInfo:(id)arg2 seq:(int)arg3;
- (_Bool)paramCheckComicIdAndSectionId:(id)arg1 sectionId:(id)arg2 tips:(id)arg3;
- (_Bool)paramCheckComicId:(id)arg1 tips:(id)arg2;
- (void)onRecieveNetData:(id)arg1;
- (void)onRecievedQueryComicSectionInfo:(id)arg1;
- (void)onRecievedQueryQuerySectionDetail:(id)arg1;
- (void)onRecievedQueryComicDetailMsg:(id)arg1;
- (id)init;

@end

