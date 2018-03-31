//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, UIScrollView, XSearchService;
@protocol XSearchSDKChildBaseViewControllerDelegate;

@interface XSearchSDKChildBaseViewController : UIViewController
{
    _Bool _isTabSearch;
    _Bool _coordinativeScrollIsSubOfVcView;
    _Bool _statusBarPlaceHolderViewHidden;
    id <XSearchSDKChildBaseViewControllerDelegate> _delegate;
    XSearchService *_searchService;
    UIScrollView *_childScrollView;
    NSDictionary *_bizData;
    double _coordinativeScrollCurrentViewTop;
    double _coordinativeScrollSearchBarTop;
    double _coordinativeScrollBorderValueY;
    double _coordinativeScrollCurrentOffsetY;
    double _coordinativeScrollPreCurrentOffsetY;
    NSDictionary *_coordinativeScrollScrollViewStatusDict;
}

@property(nonatomic) _Bool statusBarPlaceHolderViewHidden; // @synthesize statusBarPlaceHolderViewHidden=_statusBarPlaceHolderViewHidden;
@property(retain, nonatomic) NSDictionary *coordinativeScrollScrollViewStatusDict; // @synthesize coordinativeScrollScrollViewStatusDict=_coordinativeScrollScrollViewStatusDict;
@property(nonatomic) double coordinativeScrollPreCurrentOffsetY; // @synthesize coordinativeScrollPreCurrentOffsetY=_coordinativeScrollPreCurrentOffsetY;
@property(nonatomic) double coordinativeScrollCurrentOffsetY; // @synthesize coordinativeScrollCurrentOffsetY=_coordinativeScrollCurrentOffsetY;
@property(nonatomic) double coordinativeScrollBorderValueY; // @synthesize coordinativeScrollBorderValueY=_coordinativeScrollBorderValueY;
@property(nonatomic) _Bool coordinativeScrollIsSubOfVcView; // @synthesize coordinativeScrollIsSubOfVcView=_coordinativeScrollIsSubOfVcView;
@property(nonatomic) double coordinativeScrollSearchBarTop; // @synthesize coordinativeScrollSearchBarTop=_coordinativeScrollSearchBarTop;
@property(nonatomic) double coordinativeScrollCurrentViewTop; // @synthesize coordinativeScrollCurrentViewTop=_coordinativeScrollCurrentViewTop;
@property(nonatomic) _Bool isTabSearch; // @synthesize isTabSearch=_isTabSearch;
@property(retain, nonatomic) NSDictionary *bizData; // @synthesize bizData=_bizData;
@property(retain, nonatomic) UIScrollView *childScrollView; // @synthesize childScrollView=_childScrollView;
@property(retain, nonatomic) XSearchService *searchService; // @synthesize searchService=_searchService;
@property(nonatomic) __weak id <XSearchSDKChildBaseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)listHeaderViewHeight;
- (void)findScrollViewsInView:(id)arg1;
- (void)findScroll;
- (id)getScrollView;
- (id)getStickyHeaderView;
- (void)setComponentsTop:(double)arg1;
- (void)loadFailed:(id)arg1;
- (void)tabSearch;
- (void)filterSearch;
- (void)reloadDataAfterLayoutHeader;
- (void)reloadData;
- (void)didHidden;
- (void)didShow;
- (id)initWithService:(id)arg1 Delegate:(id)arg2;

@end

