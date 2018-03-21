//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/PLStoryCommentLogicDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, PLMediaDetailCommonInfo, PLStoryCommentLogic, PLStoryCommentModel;
@protocol PLStoryCommentDataMgrDelegate;

@interface PLStoryCommentDataMgr : NSObject <PLStoryCommentLogicDelegate>
{
    int _cmtLoadStatus;
    int _fetchType;
    _Bool _isFirstLoad;
    id <PLStoryCommentDataMgrDelegate> _delegate;
    NSMutableArray *_commentsArry;
    PLMediaDetailCommonInfo *_videoInfo;
    long long _currentPage;
    unsigned long long _commentNum;
    unsigned long long _endFlag;
    PLStoryCommentLogic *_commentLogic;
    PLStoryCommentModel *_localComment;
    NSMutableDictionary *_localAddedCommentID;
    NSMutableDictionary *_localAddedComments;
    NSMutableDictionary *_stickingItems;
    NSMutableDictionary *_localDeletedComments;
}

@property(retain, nonatomic) NSMutableDictionary *localDeletedComments; // @synthesize localDeletedComments=_localDeletedComments;
@property(retain, nonatomic) NSMutableDictionary *stickingItems; // @synthesize stickingItems=_stickingItems;
@property(retain, nonatomic) NSMutableDictionary *localAddedComments; // @synthesize localAddedComments=_localAddedComments;
@property(retain, nonatomic) NSMutableDictionary *localAddedCommentID; // @synthesize localAddedCommentID=_localAddedCommentID;
@property(retain, nonatomic) PLStoryCommentModel *localComment; // @synthesize localComment=_localComment;
@property(retain, nonatomic) PLStoryCommentLogic *commentLogic; // @synthesize commentLogic=_commentLogic;
@property(nonatomic) unsigned long long endFlag; // @synthesize endFlag=_endFlag;
@property(nonatomic) unsigned long long commentNum; // @synthesize commentNum=_commentNum;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) PLMediaDetailCommonInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) NSMutableArray *commentsArry; // @synthesize commentsArry=_commentsArry;
@property(nonatomic) __weak id <PLStoryCommentDataMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyContentChange:(id)arg1 type:(id)arg2;
- (void)handleDelCommentFail:(id)arg1;
- (void)onDelCommentError:(id)arg1 commentID:(id)arg2;
- (void)onDelCommentRsp:(unsigned long long)arg1 commentID:(id)arg2 dataReportSource:(id)arg3;
- (void)delComment:(id)arg1 dataReprotSource:(id)arg2;
- (unsigned long long)posToInsertForNormal:(id)arg1;
- (void)onLoadFailed;
- (void)onCommentError:(id)arg1;
- (void)onAddCommentError:(id)arg1 localID:(id)arg2;
- (void)onGetCommentError:(id)arg1;
- (void)onGetCommentListRsp:(unsigned long long)arg1 comments:(id)arg2 totalNum:(unsigned long long)arg3 endFlag:(unsigned long long)arg4;
- (void)deleteLocalAddedComment:(id)arg1;
- (void)onAddCommentRsp:(unsigned long long)arg1 commentID:(unsigned long long)arg2 localID:(id)arg3;
- (int)getLoadStatus;
- (void)setLoadStatus:(int)arg1;
- (void)updateCommentNumLabel:(unsigned long long)arg1;
- (void)fetchDataForPage:(long long)arg1;
- (void)fetchNextPage;
- (void)refreshData;
- (id)createLocalTempID;
- (id)createSelfComment:(id)arg1 replyUserInfo:(id)arg2;
- (void)insertSendComment;
- (void)sendComment:(id)arg1 replyModel:(id)arg2;
- (void)resetLogic;
- (void)resetCommentData;
- (void)resetProperties;
- (void)resetAllProperties;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
