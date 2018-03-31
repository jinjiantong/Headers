//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RNSView.h"

#import "RNSScrollViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString;
@protocol RNSTubViewDelegate;

@interface RNSTubView : RNSView <UIScrollViewDelegate, RNSScrollViewDelegate>
{
    id <RNSTubViewDelegate> _tubViewDelegate;
}

@property(nonatomic) __weak id <RNSTubViewDelegate> tubViewDelegate; // @synthesize tubViewDelegate=_tubViewDelegate;
- (void).cxx_destruct;
- (void)rns_scrollViewWillBeginDragging:(id)arg1;
- (void)rns_scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)rns_scrollViewDidEndDecelerating:(id)arg1;
- (void)rns_scrollViewDidScroll:(id)arg1;
- (void)resizeSubviewsFrame;
- (void)configSubviewsProxy;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

