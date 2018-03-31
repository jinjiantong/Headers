//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchMainViewComponent.h"

#import "TBSearchLabelButtonMixedDelegate-Protocol.h"

@class NSString, TBSearchLabelButtonMixedComponent, TBSearchLabelButtonMixedViewModel, TBSearchRelatedRecommendModel, TBXSearchRelatedRecommendModel, UILabel, UIView;

@interface TBXSearchRelatedRecommendComponent : TBXSearchMainViewComponent <TBSearchLabelButtonMixedDelegate>
{
    TBSearchRelatedRecommendModel *_realmodel;
    UILabel *_titleLabel;
    UIView *_titleLineLeftView;
    UIView *_titleLineRightView;
    TBSearchLabelButtonMixedViewModel *_mixedUIViewModel;
    TBSearchLabelButtonMixedComponent *_mixedUIComponent;
}

+ (double)heightOfComponentWithModel:(id)arg1;
+ (double)thisHeightWithModel:(id)arg1 SearchService:(id)arg2;
@property(retain, nonatomic) TBSearchLabelButtonMixedComponent *mixedUIComponent; // @synthesize mixedUIComponent=_mixedUIComponent;
@property(retain, nonatomic) TBSearchLabelButtonMixedViewModel *mixedUIViewModel; // @synthesize mixedUIViewModel=_mixedUIViewModel;
@property(retain, nonatomic) UIView *titleLineRightView; // @synthesize titleLineRightView=_titleLineRightView;
@property(retain, nonatomic) UIView *titleLineLeftView; // @synthesize titleLineLeftView=_titleLineLeftView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TBSearchRelatedRecommendModel *realmodel; // @synthesize realmodel=_realmodel;
- (void).cxx_destruct;
- (void)buttonClickedInIndex:(long long)arg1;
- (void)dataLoaded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) TBXSearchRelatedRecommendModel *model; // @dynamic model;
@property(readonly) Class superclass;

@end

