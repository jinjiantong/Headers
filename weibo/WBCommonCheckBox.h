//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView, UILabel;

@interface WBCommonCheckBox : UIButton
{
    _Bool isClicked;
    NSString *checkBoxValue;
    UIImageView *_checkBoxImageBox;
    UILabel *_checkBoxLabel;
    double _extendY;
}

@property(nonatomic) double extendY; // @synthesize extendY=_extendY;
@property(retain, nonatomic) UILabel *checkBoxLabel; // @synthesize checkBoxLabel=_checkBoxLabel;
@property(retain, nonatomic) UIImageView *checkBoxImageBox; // @synthesize checkBoxImageBox=_checkBoxImageBox;
@property(retain, nonatomic) NSString *checkBoxValue; // @synthesize checkBoxValue;
@property(nonatomic) _Bool isClicked; // @synthesize isClicked;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (long long)viewHeight;
- (void)resetSubViewState;
- (id)initWithFrame:(struct CGRect)arg1;

@end

