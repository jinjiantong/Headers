//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTVAdActionButtonCommandProtocol-Protocol.h"

@class NSString, TTVFeedCellAction, TTVFeedItem;

@interface TTVAdActionButtonCommand : NSObject <TTVAdActionButtonCommandProtocol>
{
    TTVFeedItem *_feedItem;
    NSString *_categoryId;
    unsigned long long _refer;
    TTVFeedCellAction *_cellAction;
}

@property(retain, nonatomic) TTVFeedCellAction *cellAction; // @synthesize cellAction=_cellAction;
@property(nonatomic) unsigned long long refer; // @synthesize refer=_refer;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) TTVFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (void)trackerWithEvent:(id)arg1 label:(id)arg2 clickTrackUrl:(_Bool)arg3;
- (void)trackerWithEvent:(id)arg1 label:(id)arg2;
- (id)videoFeed;
- (void)playerControlLogoTappedAction;
- (void)playerControlFinishAdAction;
- (void)sendClickTrackUrlList;
- (void)executeAction;
- (id)article;
- (id)adInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool showAlert;
@property(readonly) Class superclass;

@end

