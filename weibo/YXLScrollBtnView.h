//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface YXLScrollBtnView : UIView
{
    CDUnknownBlockType _selectedBlock;
    UIView *_sliderView;
    NSArray *_titles;
    NSMutableArray *_btns;
    long long _selectedIndex;
    long long _comeType;
}

@property(nonatomic) long long comeType; // @synthesize comeType=_comeType;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableArray *btns; // @synthesize btns=_btns;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) UIView *sliderView; // @synthesize sliderView=_sliderView;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
- (void).cxx_destruct;
- (void)updateSliderlineViewWithContentOffset:(struct CGPoint)arg1 WithPagWidth:(double)arg2;
- (void)p_layoutSliderView;
- (void)p_layoutBtns;
- (id)selectedBtn;
- (void)p_createBtns;
- (void)configureView;
- (id)initWithTitles:(id)arg1 type:(long long)arg2;
- (id)init;

@end

