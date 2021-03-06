//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UGCCellViewAction-Protocol.h"

@class ExploreOrderedData, FRCommentRepost, NSDictionary, NSString, UGCU13CellLayoutModel, UIView;

@interface CommentRepostHeaderAction : NSObject <UGCCellViewAction>
{
    UGCU13CellLayoutModel *_layoutModel;
    FRCommentRepost *_commentRepost;
    NSDictionary *_trackDic;
    UIView *_detailCellView;
}

@property(nonatomic) __weak UIView *detailCellView; // @synthesize detailCellView=_detailCellView;
@property(retain, nonatomic) NSDictionary *trackDic; // @synthesize trackDic=_trackDic;
@property(retain, nonatomic) FRCommentRepost *commentRepost; // @synthesize commentRepost=_commentRepost;
@property(retain, nonatomic) UGCU13CellLayoutModel *layoutModel; // @synthesize layoutModel=_layoutModel;
- (void).cxx_destruct;
- (id)categoryID;
- (id)logPb;
- (id)categoryName;
- (id)impressionParams;
- (void)trackWithEvent:(id)arg1 extraDic:(id)arg2;
- (void)trackWithEventV3:(id)arg1 extraDictionary:(id)arg2;
- (void)showPhoto:(id)arg1 displayImages:(id)arg2 viewFrames:(id)arg3 index:(unsigned long long)arg4 targetView:(id)arg5;
- (void)linkTap:(id)arg1;
- (void)webpageTouchUpInside;
- (void)followAction:(id)arg1;
- (void)tapUserName;
- (void)tapUserAvatar;
- (void)tapAvatarOrName;
- (void)forwardedItemTouchUp;
- (void)didSelectWithContext:(id)arg1;
- (void)unInterestedAction:(id)arg1;
- (void)forwardAction;
- (void)commentAction;
- (void)diggAction:(id)arg1;
- (void)repostAction;
- (void)trackCellShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) ExploreOrderedData *orderedData;
@property(readonly) Class superclass;

@end

