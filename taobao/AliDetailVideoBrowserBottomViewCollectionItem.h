//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailVideoBrowserBottomViewItem.h"

@interface AliDetailVideoBrowserBottomViewCollectionItem : AliDetailVideoBrowserBottomViewItem
{
    _Bool _isAddUpdateCollectionState;
}

@property(nonatomic) _Bool isAddUpdateCollectionState; // @synthesize isAddUpdateCollectionState=_isAddUpdateCollectionState;
- (void)coreUpdateCollectionStatus:(_Bool)arg1;
- (void)updateCollectionStatus:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)addUpdateCollectionStateNotification;
- (void)updateUI;
- (void)dealloc;

@end

