//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface AWSLandscapeHeaderView : UIView
{
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_amountLabel;
    UILabel *_timeLabel;
    UIView *_backView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateStockName:(id)arg1 price:(id)arg2 priceStatus:(unsigned long long)arg3 amount:(id)arg4 time:(id)arg5;
- (void)createSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

