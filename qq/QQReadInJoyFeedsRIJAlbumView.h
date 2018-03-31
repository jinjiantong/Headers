//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, ReadInJoyChannelArticle, UIImageView, UILabel;

@interface QQReadInJoyFeedsRIJAlbumView : UIView
{
    ReadInJoyChannelArticle *_feedsModel;
    NSMutableArray *_arrayForAlbumImageView;
    NSMutableArray *_arrayForGestures;
    UIView *_viewForTotalNum;
    UIImageView *_imageForTotalNum;
    UILabel *_labelForTotalNum;
    long long _presentNum;
    unsigned long long _style;
    double _leftRightMargin;
    double _middleMargin;
}

+ (double)viewHeight:(id)arg1;
@property(nonatomic) double middleMargin; // @synthesize middleMargin=_middleMargin;
@property(nonatomic) double leftRightMargin; // @synthesize leftRightMargin=_leftRightMargin;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) long long presentNum; // @synthesize presentNum=_presentNum;
@property(retain, nonatomic) UILabel *labelForTotalNum; // @synthesize labelForTotalNum=_labelForTotalNum;
@property(retain, nonatomic) UIImageView *imageForTotalNum; // @synthesize imageForTotalNum=_imageForTotalNum;
@property(retain, nonatomic) UIView *viewForTotalNum; // @synthesize viewForTotalNum=_viewForTotalNum;
@property(retain, nonatomic) NSMutableArray *arrayForGestures; // @synthesize arrayForGestures=_arrayForGestures;
@property(retain, nonatomic) NSMutableArray *arrayForAlbumImageView; // @synthesize arrayForAlbumImageView=_arrayForAlbumImageView;
@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)imgClick:(id)arg1;
- (void)initViews;
- (id)init;

@end
