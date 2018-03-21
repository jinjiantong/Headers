//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_UIHttpViewController.h>

#import <QQMainProject/UIDialogTransitionFrameProtocol-Protocol.h>

@class CFT_UIDialogNavigationControllerN, UIView;
@protocol FixedViewProtocol;

@interface CFT_UIBaseDialogViewControllerN : CFT_UIHttpViewController <UIDialogTransitionFrameProtocol>
{
    UIView<FixedViewProtocol> *_fixedView;
    unsigned long long _pushType;
    double _bottomInset;
    CFT_UIDialogNavigationControllerN *_naviController;
}

@property(nonatomic) __weak CFT_UIDialogNavigationControllerN *naviController; // @synthesize naviController=_naviController;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) unsigned long long pushType; // @synthesize pushType=_pushType;
@property(retain, nonatomic) UIView<FixedViewProtocol> *fixedView; // @synthesize fixedView=_fixedView;
- (void).cxx_destruct;
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (_Bool)shouldCloseDialog;
- (void)onDialogWillClose;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showLoadingView;
- (void)setScene:(int)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
