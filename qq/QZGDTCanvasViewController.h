//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/MQZCommonFeedListViewController.h>

#import <QQMainProject/QZGDTCanvasPageCellDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSString, QZGDTCanvasInfo, QZGDTCanvasTableView, QzoneFeedModel, UIButton, UIImageView, UIView;

@interface QZGDTCanvasViewController : MQZCommonFeedListViewController <UITableViewDelegate, UITableViewDataSource, QZGDTCanvasPageCellDelegate>
{
    QZGDTCanvasInfo *canvasInfo;
    double scrollBeginY;
    long long lastPage;
    NSMutableArray *pagesHeightData;
    UIButton *_exitButton;
    UIButton *_moreButton;
    UIView *_topbar;
    UIImageView *_arrowImgview;
    QzoneFeedModel *_feedModel;
    long long _shareReqID;
    QZGDTCanvasTableView *_tableView;
    struct CGRect _thumbRect;
    _Bool _animated;
    _Bool _statusBarHiddenWhenEnterBackground;
    double _canvasOpenTime;
    double _show_time;
    _Bool _isAudioSessionObtained;
    NSMutableArray *_arrowAnimationData;
}

- (void)shareDidAction:(id)arg1;
- (void)showShareMenu:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)leftButtonClick:(id)arg1;
- (void)playVideoInCurrentCellNeedKeepMute:(_Bool)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)viewDidAppear:(_Bool)arg1;
- (void)releaseAudioDevice;
- (_Bool)requestAudioDevice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
