//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface KOLoginTypeSelectorCellBgView : UIView
{
    UIColor *_bgColor;
    long long _cellPosition;
    UIColor *_separatorColor;
    double _separatorLeftPadding;
    double _separatorRightPadding;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setSeparatorPropertyWithColor:(id)arg1 leftPadding:(double)arg2 rightPadding:(double)arg3;
- (void)setBgColor:(id)arg1;
- (id)initWithCellPosition:(long long)arg1 bgColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

