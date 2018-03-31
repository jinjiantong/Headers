//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import <QQMainProject/AVFunDrawingMrgDelegate-Protocol.h>
#import <QQMainProject/AVFunExpressionMgrDelegate-Protocol.h>
#import <QQMainProject/MCTempManagerDelegate-Protocol.h>
#import <QQMainProject/UICollectionViewDataSource-Protocol.h>
#import <QQMainProject/UICollectionViewDelegate-Protocol.h>

@class MCGridVideoItem, NSMutableArray, NSString, UIColor, UIImage;
@protocol QQAVFunTempGridDelegate;

@interface QQAVFunTempGridBaseView : UICollectionView <MCTempManagerDelegate, AVFunExpressionMgrDelegate, AVFunDrawingMrgDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isEmptyState;
    int _tempType;
    NSMutableArray *_tempArray;
    NSMutableArray *_downloadArray;
    NSMutableArray *_unVisibleArray;
    id <QQAVFunTempGridDelegate> _gridDelegate;
    MCGridVideoItem *_selectItem;
    MCGridVideoItem *_lastSelectItem;
    NSMutableArray *_unVisibleCells;
    UIColor *_customThemeColor;
    UIImage *_customCoverIcon;
}

@property(retain, nonatomic) UIImage *customCoverIcon; // @synthesize customCoverIcon=_customCoverIcon;
@property(retain, nonatomic) UIColor *customThemeColor; // @synthesize customThemeColor=_customThemeColor;
@property(nonatomic) _Bool isEmptyState; // @synthesize isEmptyState=_isEmptyState;
@property(retain, nonatomic) NSMutableArray *unVisibleCells; // @synthesize unVisibleCells=_unVisibleCells;
@property(retain, nonatomic) MCGridVideoItem *lastSelectItem; // @synthesize lastSelectItem=_lastSelectItem;
@property(retain, nonatomic) MCGridVideoItem *selectItem; // @synthesize selectItem=_selectItem;
@property(nonatomic) int tempType; // @synthesize tempType=_tempType;
@property(nonatomic) id <QQAVFunTempGridDelegate> gridDelegate; // @synthesize gridDelegate=_gridDelegate;
@property(retain, nonatomic) NSMutableArray *unVisibleArray; // @synthesize unVisibleArray=_unVisibleArray;
@property(retain, nonatomic) NSMutableArray *downloadArray; // @synthesize downloadArray=_downloadArray;
@property(retain, nonatomic) NSMutableArray *tempArray; // @synthesize tempArray=_tempArray;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)dealloc;
- (void)onCancelSelectedItem;
- (void)downloadResourceFail:(id)arg1;
- (void)downloadResourceFinish:(id)arg1;
- (void)updateDownloadResource:(id)arg1 progress:(double)arg2;
- (void)setDrawingPathColor:(id)arg1;
- (void)downloadResource:(id)arg1;
- (int)getItemIndexById:(id)arg1;
- (id)getItem:(id)arg1;
- (void)delayEnableGridView;
- (void)selectTmplItem:(id)arg1 temState:(long long)arg2;
- (void)scrollCollectionViewToIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

