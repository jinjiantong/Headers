//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSArray, NSMutableArray;

@interface YXMyAwardDayTaskLookSonView : UIScrollView
{
    CDUnknownBlockType _awardDayTaskLook_sonTaskBlock;
    NSArray *_allSonViewData;
    double _contentSize_w;
    double _contentSize_h;
    NSMutableArray *_sonAllButtonArray;
    NSArray *_dataArray;
    struct CGSize _awardDayTaskLook_sonBackView_contentSize;
}

@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSMutableArray *sonAllButtonArray; // @synthesize sonAllButtonArray=_sonAllButtonArray;
@property(nonatomic) double contentSize_h; // @synthesize contentSize_h=_contentSize_h;
@property(nonatomic) double contentSize_w; // @synthesize contentSize_w=_contentSize_w;
@property(retain, nonatomic) NSArray *allSonViewData; // @synthesize allSonViewData=_allSonViewData;
@property(copy, nonatomic) CDUnknownBlockType awardDayTaskLook_sonTaskBlock; // @synthesize awardDayTaskLook_sonTaskBlock=_awardDayTaskLook_sonTaskBlock;
@property(nonatomic) struct CGSize awardDayTaskLook_sonBackView_contentSize; // @synthesize awardDayTaskLook_sonBackView_contentSize=_awardDayTaskLook_sonBackView_contentSize;
- (void).cxx_destruct;
- (void)btnDidClick:(id)arg1;
- (void)setupViewWithDataArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withDataArray:(id)arg2;

@end

