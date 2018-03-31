//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuySelectableCell.h"

@class NSDateFormatter, NSMutableString, TBTradeDatePickerModel;

@interface TBExtBuyDatePickerCell : TBExtBuySelectableCell
{
    _Bool _iSShowPopView;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_dateAndTimeFormatter;
    TBTradeDatePickerModel *_model;
    NSMutableString *_voiceOverStr;
}

@property(nonatomic) _Bool iSShowPopView; // @synthesize iSShowPopView=_iSShowPopView;
@property(retain, nonatomic) NSMutableString *voiceOverStr; // @synthesize voiceOverStr=_voiceOverStr;
@property(nonatomic) __weak TBTradeDatePickerModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSDateFormatter *dateAndTimeFormatter; // @synthesize dateAndTimeFormatter=_dateAndTimeFormatter;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setAccessibilityLabelAndTraits:(id)arg1;
- (void)cellDidSelected;
- (_Bool)accessibilityActivate;
- (void)bindData:(id)arg1;
- (void)initCell;

@end

