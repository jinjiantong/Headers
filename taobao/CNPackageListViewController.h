//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "CNPackageScrollViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CNLogisticService, CNPackageScrollView, NSArray, NSLayoutConstraint, NSNumber, NSString, UIImage, UIImageView, UIPageControl, UIView, UIVisualEffectView;

@interface CNPackageListViewController : TBViewController <UIScrollViewDelegate, CNPackageScrollViewDelegate>
{
    UIView *_mainView;
    CNPackageScrollView *_packageScrollView;
    NSLayoutConstraint *_packageScrollViewTop;
    NSLayoutConstraint *_packageScrollViewBottom;
    UIPageControl *_pageControl;
    UIImageView *_backgroundScreenshotsImageView;
    UIVisualEffectView *_visualEffectView;
    NSArray *_mails;
    CNLogisticService *_service;
    NSArray *_packageCards;
    NSNumber *_currentPage;
    NSNumber *_needAutoAnimated;
    UIImage *_screenshotsImage;
}

+ (_Bool)tbNeedNavibar;
@property(retain, nonatomic) UIImage *screenshotsImage; // @synthesize screenshotsImage=_screenshotsImage;
@property(retain, nonatomic) NSNumber *needAutoAnimated; // @synthesize needAutoAnimated=_needAutoAnimated;
@property(retain, nonatomic) NSNumber *currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSArray *packageCards; // @synthesize packageCards=_packageCards;
@property(retain, nonatomic) CNLogisticService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSArray *mails; // @synthesize mails=_mails;
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(nonatomic) __weak UIImageView *backgroundScreenshotsImageView; // @synthesize backgroundScreenshotsImageView=_backgroundScreenshotsImageView;
@property(nonatomic) __weak UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak NSLayoutConstraint *packageScrollViewBottom; // @synthesize packageScrollViewBottom=_packageScrollViewBottom;
@property(nonatomic) __weak NSLayoutConstraint *packageScrollViewTop; // @synthesize packageScrollViewTop=_packageScrollViewTop;
@property(nonatomic) __weak CNPackageScrollView *packageScrollView; // @synthesize packageScrollView=_packageScrollView;
@property(nonatomic) __weak UIView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadDataByPage:(long long)arg1;
- (struct CGAffineTransform)GetCGAffineTransformRotateAroundPoint:(double)arg1 centerY:(double)arg2 x:(double)arg3 y:(double)arg4 angle:(double)arg5;
- (void)packageScrollView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)rotationTransformByAngle:(double)arg1 rate:(double)arg2 updateView:(id)arg3;
- (_Bool)arcAnimation;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)allPackage:(id)arg1;
- (void)pop:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadCard;
- (void)viewDidLoad;
- (_Bool)forbidbackPanGestureRecognized;
- (long long)tbfestival_defaultStatusBarStyle;
- (_Bool)tbfestival_isFestivalEnable;
- (void)setAutoAnimated:(_Bool)arg1;
- (void)showBackgroundScreenshots:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
