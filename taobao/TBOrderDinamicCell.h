//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderBasicCell.h"

@class NSMutableDictionary, TBOrderDinamicModel, TDMDinamicItem;

@interface TBOrderDinamicCell : TBOrderBasicCell
{
    NSMutableDictionary *_extraData;
    TBOrderDinamicModel *_model;
    TDMDinamicItem *_viewItem;
}

+ (double)cellHeight:(id)arg1 withWidth:(double)arg2 styleKitContext:(id)arg3 controller:(id)arg4;
@property(retain, nonatomic) TDMDinamicItem *viewItem; // @synthesize viewItem=_viewItem;
@property(retain, nonatomic) TBOrderDinamicModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableDictionary *extraData; // @synthesize extraData=_extraData;
- (void).cxx_destruct;
- (void)bindData:(id)arg1 controller:(id)arg2 styleKitContext:(id)arg3;
- (void)viewLayout;

@end

