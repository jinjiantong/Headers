//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary;

@interface AssetView : UIView
{
    NSDictionary *data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onLayout;
- (void)configData;
- (void)releaseUI;
- (void)initUI;

@end
