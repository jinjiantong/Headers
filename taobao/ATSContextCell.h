//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ATSBasicCell.h"

@class NSMutableArray;

@interface ATSContextCell : ATSBasicCell
{
    CDUnknownBlockType _selectClickBlock;
    CDUnknownBlockType _shouldCheckedBlock;
    NSMutableArray *_itemViews;
}

+ (double)cellHeight:(id)arg1 styleKitContext:(id)arg2;
+ (id)reuseIdentifier:(id)arg1;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(copy, nonatomic) CDUnknownBlockType shouldCheckedBlock; // @synthesize shouldCheckedBlock=_shouldCheckedBlock;
@property(copy, nonatomic) CDUnknownBlockType selectClickBlock; // @synthesize selectClickBlock=_selectClickBlock;
- (void).cxx_destruct;
- (void)exposeTrack:(id)arg1;
- (void)itemCheck:(long long)arg1;
- (void)itemCheckClicked:(id)arg1;
- (void)itemTaped:(id)arg1;
- (void)bindCellData:(id)arg1;
- (void)bindData:(id)arg1;
- (id)itemView:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

