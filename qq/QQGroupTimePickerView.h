//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UIPickerViewDataSource-Protocol.h>
#import <QQMainProject/UIPickerViewDelegate-Protocol.h>

@class NSArray, NSDate, NSString, UIButton, UILabel, UIPickerView;

@interface QQGroupTimePickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIButton *_sureBtn;
    UIButton *_cancleBtn;
    UILabel *_titleLabel;
    UIPickerView *_pickerView;
    NSArray *_dayArray;
    NSArray *_showDayArray;
    NSArray *_orignalShowDayArray;
    NSArray *_orignalDayArray;
    NSArray *_hourArray;
    NSArray *_minuteArray;
    NSString *_deadLine;
    UIView *_contentView;
    long long _hourStartIndex;
    long long _maxDisplayDays;
    NSArray *_configuhourArray;
    NSArray *_configuMinuteArray;
    NSDate *_defaultDate;
    CDUnknownBlockType _completeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) NSDate *defaultDate; // @synthesize defaultDate=_defaultDate;
@property(retain, nonatomic) NSArray *configuMinuteArray; // @synthesize configuMinuteArray=_configuMinuteArray;
@property(retain, nonatomic) NSArray *configuhourArray; // @synthesize configuhourArray=_configuhourArray;
@property(nonatomic) long long maxDisplayDays; // @synthesize maxDisplayDays=_maxDisplayDays;
@property(nonatomic) long long hourStartIndex; // @synthesize hourStartIndex=_hourStartIndex;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *deadLine; // @synthesize deadLine=_deadLine;
@property(retain, nonatomic) NSArray *minuteArray; // @synthesize minuteArray=_minuteArray;
@property(retain, nonatomic) NSArray *hourArray; // @synthesize hourArray=_hourArray;
@property(retain, nonatomic) NSArray *orignalDayArray; // @synthesize orignalDayArray=_orignalDayArray;
@property(retain, nonatomic) NSArray *orignalShowDayArray; // @synthesize orignalShowDayArray=_orignalShowDayArray;
@property(retain, nonatomic) NSArray *showDayArray; // @synthesize showDayArray=_showDayArray;
@property(retain, nonatomic) NSArray *dayArray; // @synthesize dayArray=_dayArray;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *cancleBtn; // @synthesize cancleBtn=_cancleBtn;
@property(retain, nonatomic) UIButton *sureBtn; // @synthesize sureBtn=_sureBtn;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)append0IfNeed:(id)arg1;
- (id)removeLastChareacter:(id)arg1;
- (id)formatOriArray:(id)arg1;
- (void)cancleBtnClick:(id)arg1;
- (void)sureBtnClick:(id)arg1;
- (id)validMinuteArray;
- (id)validHourArray;
- (id)genShowDayArrayByDayArray:(id)arg1;
- (void)initData;
- (void)showTimePickerViewWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)loadConfiguration:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

