//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <QQMainProject/QQViewControllerAnimatedTransitioningDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>
#import <QQMainProject/UINavigationControllerDelegate-Protocol.h>

@class MQZSliptoCamaraManager, NSArray, NSMutableArray, NSMutableDictionary, NSString, QQNavigationControllerOperation, UIImage, UIImageView, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition, UIView;

@interface QQNavigationController : UINavigationController <QQViewControllerAnimatedTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _isPopViewController;
    _Bool _isPopToRootViewController;
    _Bool _isSupportRightDragToGoBack;
    _Bool _isRootNavigationController;
    double _popGuestureRespondWidth;
    NSMutableArray *_controllersToPop;
    NSArray *_rightBarButtonItems;
    _Bool _isTransitioning;
    _Bool _isPanning;
    _Bool _isInTransitionAnimation;
    int _xo;
    UIPanGestureRecognizer *_gestureRecognizer;
    UIImageView *_leftShadowMask;
    UIView *_blackMask;
    UIView *_backgroundView;
    UIImage *_lastScreenShot;
    _Bool _isMoving;
    _Bool _isStartedTransitionAnimation;
    double _offsetX;
    struct CGPoint _startTouch;
    struct CGPoint _startLocation;
    struct CGPoint _lastMove;
    double _startTouchTime;
    NSMutableArray *_otherGestureRecognizers;
    UIPercentDrivenInteractiveTransition *_interactivePopTransition;
    long long _ftsCurrOperation;
    unsigned long long _futureOrientationMask;
    MQZSliptoCamaraManager *_slipToCamaraManager;
    _Bool _shouldHidesActionSheetOrAlertView;
    _Bool _isSupportSlipPush;
    NSString *_viewControllerName;
}

+ (id)newWithRootViewController:(id)arg1 supportRightDragBack:(_Bool)arg2;
+ (id)newWithRootViewController:(id)arg1;
+ (id)newWithRootViewController:(id)arg1 shouldHidesActionSheetOrAlertView:(_Bool)arg2;
+ (id)topNavigationController;
@property(retain, nonatomic) MQZSliptoCamaraManager *slipToCamaraManager; // @synthesize slipToCamaraManager=_slipToCamaraManager;
@property(retain) NSString *viewControllerName; // @synthesize viewControllerName=_viewControllerName;
@property(nonatomic) _Bool isSupportSlipPush; // @synthesize isSupportSlipPush=_isSupportSlipPush;
@property(nonatomic) _Bool shouldHidesActionSheetOrAlertView; // @synthesize shouldHidesActionSheetOrAlertView=_shouldHidesActionSheetOrAlertView;
@property(nonatomic) double popGuestureRespondWidth; // @synthesize popGuestureRespondWidth=_popGuestureRespondWidth;
@property(nonatomic) _Bool isInTransitionAnimation; // @synthesize isInTransitionAnimation=_isInTransitionAnimation;
@property(nonatomic) _Bool isPanning; // @synthesize isPanning=_isPanning;
@property(nonatomic) _Bool isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(nonatomic) _Bool isRootNavigationController; // @synthesize isRootNavigationController=_isRootNavigationController;
@property(readonly, nonatomic) _Bool isSupportRightDragToGoBack; // @synthesize isSupportRightDragToGoBack=_isSupportRightDragToGoBack;
- (void)nfHandleVCTransition:(id)arg1 forOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)ftsHandleNavigationContr:(id)arg1 forOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)ftsHandleNavigationContr:(id)arg1 willShowViewController:(id)arg2;
- (void)handleQQThemeChangedNotification:(id)arg1;
- (void)updateGestureEnability:(_Bool)arg1;
- (void)stopGesture;
- (void)cancelDragBack;
- (void)doDragBackViewController;
- (void)animationDidFinished;
- (void)animationDidStart;
- (void)animationTransitionDidEnd:(_Bool)arg1;
- (void)animationTransitionWillStart;
- (void)setIsSupportRightDragToGoBack:(_Bool)arg1;
- (_Bool)issupportInterruputRightDragToGoBack;
- (void)panGestureTouchesCancelled:(struct CGPoint)arg1;
- (void)panGestureTouchesEnded:(struct CGPoint)arg1;
- (void)panGestureTouchesMoved:(struct CGPoint)arg1;
- (void)panGestureTouchesBegan:(struct CGPoint)arg1;
- (struct CGRect)regionForTopViewControllerSupportingRightDragToGoBack;
- (_Bool)isTopViewControllerSupportRightDragToGoBack;
- (void)handlePanGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)isViewSupportRightDragToGoBack:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)QQApplicationWillEnterForeground:(id)arg1;
- (_Bool)closed;
- (id)findViewContrlloer:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)setGesturePriority:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)updateOrientationSupportFromViewController:(id)arg1;
- (void)didPopViewControllers;
- (void)willPopViewControllers:(id)arg1;
- (void)willPopToRootViewController:(id)arg1;
- (void)willPopViewController:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)rotateBeforeNavigationOperationIfNeeded;
- (void)hideActionSheetOrAlertView;
- (void)hideActionSheetOrAlertViewInView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (void)viewDidLoad;
@property(readonly, nonatomic, getter=isAnimating) _Bool isAnimating;
- (id)printfViewControllerName;
- (void)setViewControllers:(id)arg1;
- (_Bool)showViewControllerName;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithShouldHidesActionSheetOrAlertView:(_Bool)arg1 futureOrientationMask:(unsigned long long)arg2;
- (void)removeLastViewTagAndReportIfNeed;
- (void)removeViewTagsReverseInRange:(struct _NSRange)arg1;
- (void)pushViewTagForController:(id)arg1;
- (void)endTransaction;
- (void)beginTransaction;
@property(nonatomic) float minimumSystemVersion; // @dynamic minimumSystemVersion;
@property(nonatomic) _Bool inTransaction; // @dynamic inTransaction;
@property(retain, nonatomic) QQNavigationControllerOperation *previousOperation; // @dynamic previousOperation;
@property(copy, nonatomic) NSString *previousTopViewControllerHash; // @dynamic previousTopViewControllerHash;
@property(nonatomic) _Bool didCallViewDidAppear; // @dynamic didCallViewDidAppear;
@property(nonatomic) _Bool inProgress; // @dynamic inProgress;
@property(nonatomic) _Bool waiting; // @dynamic waiting;
@property(nonatomic) _Bool transitioning; // @dynamic transitioning;
- (void)processWhenNavigationControllerInVisible;
- (void)superSetViewControllers:(id)arg1 inQueue:(_Bool)arg2;
- (void)superPushViewController:(id)arg1 inQueue:(_Bool)arg2;
- (id)superPopViewControllerAnimated:(id)arg1;
- (id)superPopToViewController:(id)arg1;
- (id)superPopToRootViewControllerAnimated:(id)arg1;
- (float)delayTime;
- (_Bool)isDuplicateOperation:(id)arg1;
- (id)runOperation:(id)arg1 inQueue:(_Bool)arg2;
- (void)_runNextOperation;
- (void)runNextOperation;
- (void)addOperation:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)ex_setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1;
- (id)ex_popViewControllerAnimated:(_Bool)arg1;
- (id)ex_popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)ex_popToRootViewControllerAnimated:(_Bool)arg1;
- (_Bool)runPushOperationDirectly:(id)arg1;
- (void)ex_pushViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)isOverIOS11;
- (void)_performNextOperation;
- (void)didShowViewController:(id)arg1;
- (void)willShowViewController:(id)arg1;
- (void)newViewControllerDidAppear:(id)arg1;
- (void)ex_dealloc;
- (void)ex_viewDidLoad;
@property(readonly, nonatomic, getter=operationQueue) NSMutableArray *operationQueue; // @dynamic operationQueue;
- (void)setOperationQueue:(id)arg1;
- (void)printCallStack:(id)arg1;
- (void)clearNavigationBarOperationCache;
- (void)addNavigationBarOperationCache:(id)arg1;
@property(retain, nonatomic) NSMutableArray *cachedNavigationBarOperationKeys; // @dynamic cachedNavigationBarOperationKeys;
@property(retain, nonatomic) NSMutableDictionary *cachedNavigationBarOperations; // @dynamic cachedNavigationBarOperations;
- (void)endTransaction;
- (void)beginTransaction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

