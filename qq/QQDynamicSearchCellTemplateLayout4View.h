//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQDynamicSearchCellTemplateBaseView.h>

@class QQDynamicSearchCellTemplateLeftImageView, UILabel;

@interface QQDynamicSearchCellTemplateLayout4View : QQDynamicSearchCellTemplateBaseView
{
    double _contentViewHeight;
    QQDynamicSearchCellTemplateLeftImageView *_leftImageView;
    UILabel *_headLine;
    UILabel *_middleLine;
    UILabel *_footLine;
}

- (double)calHeightForCell;
- (void)resetContentViewFrame;
- (double)calContentViewWidth;
- (double)calContentViewHeight;
- (void)layoutViewsWithResult:(id)arg1;
- (void)layoutContentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

