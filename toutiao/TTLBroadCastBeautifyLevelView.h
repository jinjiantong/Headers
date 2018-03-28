//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol TTLBroadCastBeautifyLevelViewDelegate;

@interface TTLBroadCastBeautifyLevelView : UIView
{
    id <TTLBroadCastBeautifyLevelViewDelegate> _delegate;
    long long _initialLevel;
    NSMutableArray *_buttonArray;
    UIView *_buttonBackgroundView;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *buttonBackgroundView; // @synthesize buttonBackgroundView=_buttonBackgroundView;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(nonatomic) long long initialLevel; // @synthesize initialLevel=_initialLevel;
@property(nonatomic) __weak id <TTLBroadCastBeautifyLevelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)levelButtonDidClicked:(id)arg1;
- (void)dismissBeautifyLevelView;
- (void)showBeautifyLevelViewInView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
