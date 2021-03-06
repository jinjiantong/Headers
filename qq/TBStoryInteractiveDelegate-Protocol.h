//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSString, TBStoryVideoCommentInfo;
@protocol TBStoryCommentFaceTextViewDelegate;

@protocol TBStoryInteractiveDelegate <NSObject>
- (void)shouldShowMoreTagsWithFeedID:(NSString *)arg1;

@optional
- (void)shouldShowVideoSelectorWithFeedID:(NSString *)arg1;
- (void)didFoldTipsTap;
- (void)shouldLoadFansInteractive:(NSString *)arg1;
- (void)didKeyBoardHideWithFeedID:(NSString *)arg1 relativeY:(double)arg2;
- (void)didKeyBoardInputWithFeedID:(NSString *)arg1 boardHeight:(double)arg2;
- (void)didKeyBoardShowWithFeedID:(NSString *)arg1 relativeY:(double)arg2 boardHeight:(double)arg3;
- (void)shouldShowKeyBoardWithDelegate:(id <TBStoryCommentFaceTextViewDelegate>)arg1 commentInfo:(TBStoryVideoCommentInfo *)arg2;
- (void)shouldReloadData:(NSString *)arg1;
@end

