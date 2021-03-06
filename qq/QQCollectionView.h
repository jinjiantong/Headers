//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSIndexPath, NSMutableArray, NSMutableDictionary, QQCollectionViewLayout;
@protocol QQCollectionViewDataSource, QQCollectionViewDelegate, QQCollectionViewPageControlDelegate;

@interface QQCollectionView : UIScrollView
{
    NSMutableDictionary *_cellClass;
    NSMutableArray *_cells;
    NSMutableArray *_unusedCells;
    id <QQCollectionViewDataSource> _dataSource;
    QQCollectionViewLayout *_layout;
    NSIndexPath *_indexPathForHighlightedItem;
    _Bool _isAnimate;
    int _lineType;
    id <QQCollectionViewDelegate> _dataDelegate;
    int _xo;
    _Bool _isSigleLineNeedInMiddle;
    id <QQCollectionViewPageControlDelegate> _pageControlDelegate;
}

@property(nonatomic) _Bool isSigleLineNeedInMiddle; // @synthesize isSigleLineNeedInMiddle=_isSigleLineNeedInMiddle;
@property(nonatomic) int lineType; // @synthesize lineType=_lineType;
@property(nonatomic) id <QQCollectionViewPageControlDelegate> pageControlDelegate; // @synthesize pageControlDelegate=_pageControlDelegate;
@property(nonatomic) id <QQCollectionViewDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
- (id)cellForItemAtIndexPath:(id)arg1;
- (void)reloadItemsAtIndexPath:(id)arg1;
- (void)deleteItemsAtIndexPath:(id)arg1 withAnimate:(_Bool)arg2;
- (void)insertItemsAtIndexPath:(id)arg1 withAnimate:(_Bool)arg2;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)invalidateLayout;
@property(retain, nonatomic) QQCollectionViewLayout *layout; // @dynamic layout;
- (void)updatePageControlStatus;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)reloadData;
@property(nonatomic) id <QQCollectionViewDataSource> dataSource; // @dynamic dataSource;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)relayoutWithAnimation:(_Bool)arg1 withBounceOffset:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)doSelectItemAtIndexPath:(id)arg1 silent:(_Bool)arg2 animated:(_Bool)arg3;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)makeBounceRect:(struct CGRect)arg1 endRect:(struct CGRect)arg2 offset:(double)arg3;
- (id)indexPathAtPoint:(struct CGPoint)arg1;

@end

