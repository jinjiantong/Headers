//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCDecorateComponent-Protocol.h"

@class MCTemplateWebComponent, NSDictionary, NSString, TBPLWebLayer;
@protocol MCDecorateComponentEventDelegate;

@interface MCDecoratePoplayerComponent : NSObject <MCDecorateComponent>
{
    _Bool _needShow;
    _Bool _shouldTriggerShowMethod;
    _Bool _hasTriggerShowMethod;
    _Bool _ignoreUTReport;
    int _errorCode;
    id <MCDecorateComponentEventDelegate> _delegate;
    id _ext;
    TBPLWebLayer *_webLayer;
    MCTemplateWebComponent *_innerComponentTemplate;
    NSDictionary *_weexRenderData;
    NSString *_pageName;
    double _enterLoadStartTime;
    double _renderStartTime;
    double _readyCallShowStartTime;
    double _requestScriptCostTime;
    double _requestMtopCostTime;
    double _renderCostTime;
    double _jsCallShowCostTime;
    double _totalCostTime;
    struct CGRect _placeHolderRect;
}

@property(nonatomic) _Bool ignoreUTReport; // @synthesize ignoreUTReport=_ignoreUTReport;
@property(nonatomic) _Bool hasTriggerShowMethod; // @synthesize hasTriggerShowMethod=_hasTriggerShowMethod;
@property(nonatomic) _Bool shouldTriggerShowMethod; // @synthesize shouldTriggerShowMethod=_shouldTriggerShowMethod;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) double totalCostTime; // @synthesize totalCostTime=_totalCostTime;
@property(nonatomic) double jsCallShowCostTime; // @synthesize jsCallShowCostTime=_jsCallShowCostTime;
@property(nonatomic) double renderCostTime; // @synthesize renderCostTime=_renderCostTime;
@property(nonatomic) double requestMtopCostTime; // @synthesize requestMtopCostTime=_requestMtopCostTime;
@property(nonatomic) double requestScriptCostTime; // @synthesize requestScriptCostTime=_requestScriptCostTime;
@property(nonatomic) double readyCallShowStartTime; // @synthesize readyCallShowStartTime=_readyCallShowStartTime;
@property(nonatomic) double renderStartTime; // @synthesize renderStartTime=_renderStartTime;
@property(nonatomic) double enterLoadStartTime; // @synthesize enterLoadStartTime=_enterLoadStartTime;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSDictionary *weexRenderData; // @synthesize weexRenderData=_weexRenderData;
@property(retain, nonatomic) MCTemplateWebComponent *innerComponentTemplate; // @synthesize innerComponentTemplate=_innerComponentTemplate;
@property(retain, nonatomic) TBPLWebLayer *webLayer; // @synthesize webLayer=_webLayer;
@property(nonatomic) struct CGRect placeHolderRect; // @synthesize placeHolderRect=_placeHolderRect;
@property(retain, nonatomic) id ext; // @synthesize ext=_ext;
@property(nonatomic) _Bool needShow; // @synthesize needShow=_needShow;
@property(nonatomic) __weak id <MCDecorateComponentEventDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)renderWeexContent;
- (void)mixWeexRenderData:(id)arg1;
- (void)hideKeyBoard:(id)arg1;
- (id)originalWindowInfo:(id)arg1;
- (id)windowInfo:(id)arg1;
- (id)getInfos:(id)arg1;
- (id)hide:(id)arg1;
- (id)show:(id)arg1;
- (void)destory;
- (void)reportUT;
- (void)componentDidDisappear;
- (void)componentWillDisppear;
- (void)componentDidAppear;
- (void)componentWillAppear;
- (void)componentDidLoad;
- (id)getBunderUrl;
- (void)loadComponent;
- (void)start;
- (id)view;
- (id)componentTemplate;
- (id)initWithComponentTemplate:(id)arg1 withExpressionHandle:(id)arg2 pageName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

