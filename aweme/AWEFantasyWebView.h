//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESUIWebView.h"

#import "TTFWebViewProtocol-Protocol.h"

@class JSContext, NSString, UIView;
@protocol UIWebViewDelegate;

@interface AWEFantasyWebView : IESUIWebView <TTFWebViewProtocol>
{
}

@property(readonly, nonatomic) JSContext *jsContext;
@property(readonly, nonatomic) UIView *realView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <UIWebViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
