//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBImmersiveHeaderWrapViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel;

@interface WBCardListStoryRankHeaderView : UIView <WBImmersiveHeaderWrapViewDelegate>
{
    UIButton *_actionButton;
    UILabel *_contentLabel;
    id _delegate;
    id _object;
}

@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)headData;
- (void)reloadUIElements;
- (double)viewHeightForObject:(id)arg1;
- (void)buttonClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

