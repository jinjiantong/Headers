//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UILabel, UIWebView;

@interface _WBPrivacyAlertContentView : UIView <UIWebViewDelegate>
{
    UIActivityIndicatorView *indicatorView;
    UILabel *indicatorLabel;
    UIWebView *_webView;
}

+ (void)registerWebViewUAWithWebView:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

