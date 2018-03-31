//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QzoneFeedCell.h>

#import <QQMainProject/QZContainerBaseScrollViewDelegate-Protocol.h>
#import <QQMainProject/QZContainerBaseScrollViewScrollDelegate-Protocol.h>
#import <QQMainProject/QZFeedCellDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSString, QZContainerBaseScrollView, QZContainerCellModel, QzoneFeedLayoutView, QzoneFeedModel, UIPageControl;

@interface QZoneGroupFeedCell : QzoneFeedCell <QZContainerBaseScrollViewDelegate, QZContainerBaseScrollViewScrollDelegate, UIScrollViewDelegate, QZFeedCellDelegate>
{
    unsigned long long _currentClickPage;
    QzoneFeedModel *_mainFeedModel;
    double _feedCellAlpha;
    QZContainerBaseScrollView *_baseScrollView;
    QzoneFeedLayoutView *_mainContentInfoView;
    QzoneFeedLayoutView *_recommActionInfoView;
    QzoneFeedLayoutView *_commentContentInfoView;
    QzoneFeedLayoutView *_specialCareRemindFootInfoView;
    QzoneFeedLayoutView *_multiAdvTypeFootInfoView;
    UIPageControl *_advFullScreenPageCtr;
    NSMutableArray *_visibleCellModels;
    QZContainerCellModel *_currentCellModel;
    long long _type;
}

+ (double)widthWithFeedModel:(id)arg1;
+ (double)heightWithFeedModel:(id)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setUpContentInfoViewBackgroundColor:(id)arg1 feedModel:(id)arg2;
- (id)getCellMainContentInfoView:(id)arg1 index:(long long)arg2 withFrame:(struct CGRect)arg3;
- (void)didMoveToWindow;
- (id)getCurrentVideoView;
- (void)videoPlayRightCalc:(_Bool)arg1;
- (void)updateVisibleCellModels;
- (id)getVisibleVideoViews;
- (id)getVideoView:(id)arg1;
- (void)groupFeedVisitReport:(id)arg1;
- (void)cancelAllGroupFeedReportExceptIndexSet:(id)arg1;
- (void)clickToPage:(long long)arg1;
- (void)moveToPage:(long long)arg1;
- (long long)shouldMoveToNextPage:(long long)arg1;
- (double)getPageWidthWithIndex:(unsigned long long)arg1;
- (void)setContainerViewCurrentPage:(unsigned long long)arg1;
- (_Bool)needResponseAction:(unsigned long long)arg1;
- (void)refreshSpecialCellInfo:(id)arg1 withParam:(id)arg2;
- (void)onFeedCell:(id)arg1 action:(unsigned long long)arg2 param:(id)arg3 feedModel:(id)arg4;
- (void)setIndex:(long long)arg1;
- (void)cellExposure;
- (void)willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)containerBaseScrollViewDidEndDragging;
- (void)containerBaseScrollViewWillBeginDragging;
- (void)pageExposure:(unsigned long long)arg1;
- (void)checkAutoPlayViewEvent:(long long)arg1 params:(id)arg2;
- (void)containerViewDidEndDraggingWithPage:(long long)arg1 oldPage:(long long)arg2 decelerate:(_Bool)arg3;
- (id)getFeedModel:(unsigned long long)arg1;
- (id)feedModel;
- (id)getlayoutInfoViewAtPage:(unsigned long long)arg1;
- (id)currentLayoutInfoView;
- (void)setFeedModel:(id)arg1;
- (id)layoutModelInfoWithIndex:(unsigned long long)arg1;
- (void)refreshContent:(id)arg1;
- (void)refreshComment;
- (void)refreshLike:(id)arg1;
- (long long)videoPlayScene;
- (void)willDisplayGroupFeedCell;
- (void)prepareForReuse;
- (void)layoutFeedView;
- (void)setBackgroundAlpha:(double)arg1;
- (struct CGRect)frameForCollectionView;
- (void)layoutSubviews;
- (void)initLayoutViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 isForPluto:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

