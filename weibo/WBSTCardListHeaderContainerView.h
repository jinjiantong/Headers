//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WBSTCardHeaderBaseView;
@protocol WBSTCardHeaderBaseViewDelegate, WBSTCardHeaderContainerDelegate;

@interface WBSTCardListHeaderContainerView : UIView
{
    long long _finalHeaderStyle;
    id <WBSTCardHeaderBaseViewDelegate> _delegate;
    WBSTCardHeaderBaseView<WBSTCardHeaderContainerDelegate> *_headerView;
}

+ (long long)getFinalHeaderStyleWithOriginalStyle:(long long)arg1;
+ (double)preLoadHeaderHeightWithStyle:(long long)arg1;
@property(retain, nonatomic) WBSTCardHeaderBaseView<WBSTCardHeaderContainerDelegate> *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <WBSTCardHeaderBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long finalHeaderStyle; // @synthesize finalHeaderStyle=_finalHeaderStyle;
- (void).cxx_destruct;
- (double)headerTransitionThreshold:(long long)arg1;
- (void)updateWithHeaderModel:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

