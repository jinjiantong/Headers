//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, TBXSearchService, TBXSearchWeexComponent, UIView;

@interface TBSearchFullFloatLayer : NSObject
{
    NSDictionary *_data;
    UIView *_maskView;
    UIView *_weexContainerView;
    TBXSearchWeexComponent *_weexComponent;
    TBXSearchService *_searchService;
}

@property(retain, nonatomic) TBXSearchService *searchService; // @synthesize searchService=_searchService;
@property(retain, nonatomic) TBXSearchWeexComponent *weexComponent; // @synthesize weexComponent=_weexComponent;
@property(retain, nonatomic) UIView *weexContainerView; // @synthesize weexContainerView=_weexContainerView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)remove;
- (void)loadWeexComponent;
- (void)render;
- (void)configData:(id)arg1 andSearchService:(id)arg2;

@end

