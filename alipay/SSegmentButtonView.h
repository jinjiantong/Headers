//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString;
@protocol SSegmentButtonViewDelegate;

@interface SSegmentButtonView : UIView
{
    NSMutableArray *_spliteLines;
    NSMutableArray *_buttons;
    UIView *_rightLine;
    UIView *_topLine;
    UIView *_bottomLine;
    _Bool _topMargin;
    _Bool _hideOnOne;
    NSString *_type;
    unsigned long long _selectedIndex;
    NSString *_selectedKey;
    id <SSegmentButtonViewDelegate> _delegate;
    NSArray *_models;
}

+ (double)heightOfButtonView;
@property(nonatomic) _Bool hideOnOne; // @synthesize hideOnOne=_hideOnOne;
@property(nonatomic) _Bool topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(nonatomic) __weak id <SSegmentButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *selectedKey; // @synthesize selectedKey=_selectedKey;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)buttonDidSelect:(id)arg1;
- (void)layoutSubviews;
- (void)refresh;
- (id)initWithFrame:(struct CGRect)arg1;

@end
