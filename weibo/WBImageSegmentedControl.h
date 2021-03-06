//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISegmentedControl.h>

#import "WBSkinning-Protocol.h"

@class NSArray, NSMutableIndexSet, NSString, UIImageView;
@protocol WBImageSegmentedControlDelegate;

@interface WBImageSegmentedControl : UISegmentedControl <WBSkinning>
{
    unsigned long long contentType;
    UIImageView *imgSelected;
    int selectedIndex;
    id <WBImageSegmentedControlDelegate> delegate;
    NSArray *itemImages;
    double _buttonWidth;
    double _sliderWidth;
    NSMutableIndexSet *_imageOnlyIndexes;
}

@property(retain, nonatomic) NSMutableIndexSet *imageOnlyIndexes; // @synthesize imageOnlyIndexes=_imageOnlyIndexes;
@property(nonatomic) __weak id <WBImageSegmentedControlDelegate> delegate; // @synthesize delegate;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex;
- (void).cxx_destruct;
- (void)setBadgeDisplayImageOnlyWhenHasBadge:(_Bool)arg1 forIndex:(long long)arg2;
- (void)dealloc;
@property(nonatomic) double sliderWidth; // @synthesize sliderWidth=_sliderWidth;
@property(nonatomic) double buttonWidth; // @synthesize buttonWidth=_buttonWidth;
- (void)setBadgeTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)selectItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)onSegmentChanged:(id)arg1;
- (void)pressedButtonAtIndex:(long long)arg1 animatedChange:(_Bool)arg2;
- (void)updateViewWithCurrentIndexAnimated:(_Bool)arg1;
- (id)initWithItems:(id)arg1 contentType:(unsigned long long)arg2;
- (id)initWithItems:(id)arg1;
- (void)reloadUIElements;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

