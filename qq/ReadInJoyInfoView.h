//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ReadInJoyChannelArticle, UILabel;

@interface ReadInJoyInfoView : UIView
{
    UILabel *footerLabel;
    UILabel *sourceLabel;
    ReadInJoyChannelArticle *_feedsModel;
    UILabel *_appOpenLabel;
}

@property(retain, nonatomic) UILabel *appOpenLabel; // @synthesize appOpenLabel=_appOpenLabel;
@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (void)dealloc;
- (void)updateAppInstallState;
- (void)feedbackTapped;
- (void)layoutForNormalFeeds;
- (void)layoutForSocialFeeds;
- (void)layoutSubviewsExt;
- (void)layoutSubviews;
- (id)init;

@end

