//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <QQMainProject/TBBizNetworkLogicDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSString, TBDateVideoCollectionModel;

@interface QQStoryMemoryVideoListView : UIScrollView <UIScrollViewDelegate, TBBizNetworkLogicDelegate>
{
    _Bool _hasCamera;
    NSString *_unionID;
    TBDateVideoCollectionModel *_model;
    unsigned long long _seq;
    NSMutableArray *_reusableItems;
    NSMutableArray *_visibleItems;
    NSMutableArray *_videoInfoModels;
}

+ (double)height;
@property(nonatomic) _Bool hasCamera; // @synthesize hasCamera=_hasCamera;
@property(retain, nonatomic) NSMutableArray *videoInfoModels; // @synthesize videoInfoModels=_videoInfoModels;
@property(retain, nonatomic) NSMutableArray *visibleItems; // @synthesize visibleItems=_visibleItems;
@property(retain, nonatomic) NSMutableArray *reusableItems; // @synthesize reusableItems=_reusableItems;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(retain, nonatomic) TBDateVideoCollectionModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
- (void)appendSimpleModels:(id)arg1;
- (void)reloadVideoModels;
- (void)handleSimpleInfoList:(id)arg1;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)loadItems:(struct _NSRange)arg1;
- (id)dequeueReusableItem;
- (void)enqueueReusableItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)clearItems;
- (_Bool)addVideoItemWithVid:(id)arg1;
- (void)addItemWithModels:(id)arg1;
- (void)addCaptureItem;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

