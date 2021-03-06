//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALCCoverBaseView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class ALCZmScoreBreaksDownPB, NSArray, NSString, UIPageControl, UIScrollView, UITapGestureRecognizer;

@interface ALCRadarHelpBox : ALCCoverBaseView <UIScrollViewDelegate>
{
    UIPageControl *homePageControl;
    ALCZmScoreBreaksDownPB *_scoreResult;
    NSArray *_scoreBreaksDown;
    UIScrollView *_contentScrollView;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) NSArray *scoreBreaksDown; // @synthesize scoreBreaksDown=_scoreBreaksDown;
@property(retain, nonatomic) ALCZmScoreBreaksDownPB *scoreResult; // @synthesize scoreResult=_scoreResult;
- (void).cxx_destruct;
- (void)close;
- (void)scrollViewDidScroll:(id)arg1;
- (void)changeCurrentPage:(id)arg1;
- (void)tapHandler:(id)arg1;
- (void)addPageControlToContainer:(id)arg1;
- (void)addContentToScrollView:(id)arg1;
- (id)createContainerView;
- (void)showAtIndex:(long long)arg1;
- (id)initWithParent:(id)arg1;
- (id)initWithParent:(id)arg1 scoreResult:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

