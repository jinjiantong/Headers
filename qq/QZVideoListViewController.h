//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZPhotoModuleViewController.h>

#import <QQMainProject/QQTabMenuDelegate-Protocol.h>

@class NSMutableArray, NSString, QQTabMenu, UIViewController;

@interface QZVideoListViewController : QZPhotoModuleViewController <QQTabMenuDelegate>
{
    long long _selectedIndex;
    QQTabMenu *_tabMenu;
    NSMutableArray *_childViewControllers;
    NSString *_recommendUrl;
    NSString *_videoListViewUrl;
    _Bool _videoListUseWebView;
    int _xo;
    UIViewController *_selectedViewController;
    UIViewController *_currentVC;
}

@property(nonatomic) _Bool videoListUseWebView; // @synthesize videoListUseWebView=_videoListUseWebView;
@property(retain, nonatomic) NSString *videoListViewUrl; // @synthesize videoListViewUrl=_videoListViewUrl;
@property(retain, nonatomic) NSString *recommendUrl; // @synthesize recommendUrl=_recommendUrl;
@property(retain, nonatomic) QQTabMenu *tabMenu; // @synthesize tabMenu=_tabMenu;
@property(retain, nonatomic) NSMutableArray *childViewControllers; // @synthesize childViewControllers=_childViewControllers;
@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak UIViewController *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
