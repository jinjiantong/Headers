//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTAlphaThemedButton.h"

@class ExploreOrderedData, TTTouchContext;
@protocol TTAdFeedModel;

@interface ExploreActionButton : TTAlphaThemedButton
{
    id <TTAdFeedModel> _adModel;
    ExploreOrderedData *_actionModel;
    TTTouchContext *_lastTouchContext;
}

@property(retain, nonatomic) TTTouchContext *lastTouchContext; // @synthesize lastTouchContext=_lastTouchContext;
@property(retain, nonatomic) ExploreOrderedData *actionModel; // @synthesize actionModel=_actionModel;
@property(retain, nonatomic) id <TTAdFeedModel> adModel; // @synthesize adModel=_adModel;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setIconImageNameForVideoAdCell:(id)arg1;
- (void)refreshForceCreativeIcon;
- (void)refreshCreativeIcon;
- (_Bool)hsaOpenUrl;
- (void)actionButtonClicked:(id)arg1 context:(id)arg2;
- (void)actionButtonClicked:(id)arg1 showAlert:(_Bool)arg2;
- (void)setIconImageNamed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
