//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSlideShowBottomEditViewBase.h"

#import "WBSlideShowBottomPhototsHeaderDelegate-Protocol.h"
#import "WBSlideShowPhotoCollectionViewCellDelegate-Protocol.h"
#import "WBSlideShowReorderableCollectionViewDataSource-Protocol.h"
#import "WBSlideShowReorderableCollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, UILabel, WBSlideShowAssetPickerContextSetting;
@protocol WBSlideShowBottomPhotosEditViewDelegate;

@interface WBSlideShowBottomPhotosEditView : WBSlideShowBottomEditViewBase <WBSlideShowReorderableCollectionViewDataSource, WBSlideShowReorderableCollectionViewDelegateFlowLayout, WBSlideShowPhotoCollectionViewCellDelegate, WBSlideShowBottomPhototsHeaderDelegate>
{
    WBSlideShowAssetPickerContextSetting *_contextSetting;
    UILabel *_tipsLabel;
}

@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak WBSlideShowAssetPickerContextSetting *contextSetting; // @synthesize contextSetting=_contextSetting;
- (void).cxx_destruct;
- (void)slideShowPhotoCellDidPressDeleteButton:(id)arg1;
- (void)collectionView:(id)arg1 layout:(id)arg2 didEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 didBeginDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)slideShowBottomPhototsHeaderDidClick:(id)arg1;
- (id)collectionViewLayout;
- (double)collectionViewBottomMargin;
- (struct CGSize)itemSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WBSlideShowBottomPhotosEditViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

