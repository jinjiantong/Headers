//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSString, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol QQVIPFunctionComicScrollActionDelegate;

@interface QQVIPFunctionComicScrollView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    id <QQVIPFunctionComicScrollActionDelegate> _actionDelegate;
    int _xo;
    UITapGestureRecognizer *_doubleTap;
    UITapGestureRecognizer *_singleTap;
    UISwipeGestureRecognizer *upswiperecognizer;
    UISwipeGestureRecognizer *downswiperecognizer;
    UISwipeGestureRecognizer *leftswiperecognizer;
    UISwipeGestureRecognizer *rightswiperecognizer;
    _Bool _notPostEnableNoti;
}

@property(nonatomic) _Bool notPostEnableNoti; // @synthesize notPostEnableNoti=_notPostEnableNoti;
- (void).cxx_destruct;
- (_Bool)isScrollAtBottom;
- (_Bool)isScrollAtTop;
- (_Bool)isScrollAtRight;
- (_Bool)isScrollAtLeft;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)enableAction:(_Bool)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)removeSwipeGestureRecognizer;
- (void)addSwipeGestureRecognizer;
- (void)handleSingleTap:(id)arg1;
- (void)handleSwipe:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setZoomScale:(double)arg1 animated:(_Bool)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <QQVIPFunctionComicScrollActionDelegate> actionDelegate; // @dynamic actionDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
