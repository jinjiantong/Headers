//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/UIWebViewDelegate-Protocol.h>
#import <QQMainProject/WKNavigationDelegate-Protocol.h>

@class NSString, UIScrollView, UIView, UIWebView, WKWebView;
@protocol IFAWebViewDelegate;

@interface FAWebView : NSObject <UIWebViewDelegate, WKNavigationDelegate>
{
    UIWebView *uWebView;
    WKWebView *wWebView;
    _Bool _jsEnabled;
    _Bool _scalesPageToFit;
    id <IFAWebViewDelegate> _delegate;
    unsigned long long _dataDetectorTypes;
    NSString *_cerDomain;
}

+ (_Bool)isWkWebView:(_Bool)arg1;
+ (_Bool)supportHttps;
@property(retain, nonatomic) NSString *cerDomain; // @synthesize cerDomain=_cerDomain;
@property(nonatomic) _Bool scalesPageToFit; // @synthesize scalesPageToFit=_scalesPageToFit;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) __weak id <IFAWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)stringByEvaluatingJavaScriptFromString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopLoading;
- (void)loadRequest:(id)arg1;
- (void)loadLocalTxtFile:(id)arg1 trimOneMB:(_Bool)arg2;
- (void)loadLocalFile:(id)arg1;
- (_Bool)jsEnabled;
- (void)setJavaScriptEnabled:(_Bool)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic) UIView *internalWebView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 online:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

