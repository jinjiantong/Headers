//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MQZoneHomepageHeadButton;
@protocol MQZoneHomepageHeaderTitleViewDelegate;

@interface MQZoneHomepageHeadTitleView : UIView
{
    MQZoneHomepageHeadButton *_buttons[5];
    id <MQZoneHomepageHeaderTitleViewDelegate> _delegate;
    long long _uin;
}

@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(nonatomic) __weak id <MQZoneHomepageHeaderTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)visitorBadgeWidthWithNumber:(unsigned long long)arg1;
- (void)adjustVisitorCountFrame:(id)arg1 number:(unsigned long long)arg2;
- (void)adjustNaviDeco:(id)arg1;
- (void)headNumbers:(id)arg1;
- (void)visitorCountAnimation:(unsigned long long)arg1;
- (void)clickButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 uin:(long long)arg2;

@end

