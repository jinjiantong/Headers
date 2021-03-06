//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary, TBElementsContainerView, TBMultimediaEditComponent, TBMultimediaEditGestureManager, TBMultimediaEditPanel, TBMultimediaVisualEffectsHandler, UIImageView;
@protocol TBMultimediaEditReportDelegate, TBMultimediaEditViewDelegate;

@interface TBMultimediaEditView : UIView
{
    _Bool _isHongBaoView;
    unsigned long long _multimediaType;
    unsigned long long _multimediaSource;
    id <TBMultimediaEditViewDelegate> _delegate;
    UIView *_elementDeleteCover;
    TBMultimediaEditPanel *_panel;
    TBElementsContainerView *_elementsContainerView;
    UIView *_componentsContainerView;
    UIView *_interactivePanelView;
    TBMultimediaEditComponent *_currentEditComponent;
    NSArray *_editComponents;
    TBMultimediaEditGestureManager *_gestureManager;
    TBMultimediaVisualEffectsHandler *_visualEffectHandler;
    id <TBMultimediaEditReportDelegate> _reportDelegate;
    NSMutableDictionary *_configuration;
    UIImageView *_elementDeleteView;
    struct CGRect _editArea;
}

+ (Class)panelClass;
@property(retain, nonatomic) UIImageView *elementDeleteView; // @synthesize elementDeleteView=_elementDeleteView;
@property(nonatomic) _Bool isHongBaoView; // @synthesize isHongBaoView=_isHongBaoView;
@property(retain, nonatomic) NSMutableDictionary *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <TBMultimediaEditReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(nonatomic) struct CGRect editArea; // @synthesize editArea=_editArea;
@property(retain, nonatomic) TBMultimediaVisualEffectsHandler *visualEffectHandler; // @synthesize visualEffectHandler=_visualEffectHandler;
@property(retain, nonatomic) TBMultimediaEditGestureManager *gestureManager; // @synthesize gestureManager=_gestureManager;
@property(retain, nonatomic) NSArray *editComponents; // @synthesize editComponents=_editComponents;
@property(readonly, nonatomic) __weak TBMultimediaEditComponent *currentEditComponent; // @synthesize currentEditComponent=_currentEditComponent;
@property(retain, nonatomic) UIView *interactivePanelView; // @synthesize interactivePanelView=_interactivePanelView;
@property(retain, nonatomic) UIView *componentsContainerView; // @synthesize componentsContainerView=_componentsContainerView;
@property(retain, nonatomic) TBElementsContainerView *elementsContainerView; // @synthesize elementsContainerView=_elementsContainerView;
@property(retain, nonatomic) TBMultimediaEditPanel *panel; // @synthesize panel=_panel;
@property(retain, nonatomic) UIView *elementDeleteCover; // @synthesize elementDeleteCover=_elementDeleteCover;
@property(nonatomic) __weak id <TBMultimediaEditViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long multimediaSource; // @synthesize multimediaSource=_multimediaSource;
@property(nonatomic) unsigned long long multimediaType; // @synthesize multimediaType=_multimediaType;
- (void).cxx_destruct;
- (void)handleGestureRecognizer:(id)arg1;
- (void)reportEvent:(id)arg1 withParam:(id)arg2;
- (void)elementMoveEnded:(id)arg1;
- (void)elementMoving:(id)arg1;
- (void)elementGestureRecognizerDidEnd:(id)arg1 gesture:(id)arg2;
- (void)elementGestureRecognizerWillBegin:(id)arg1 gesture:(id)arg2;
- (id)viewShot:(id)arg1 withRect:(struct CGRect)arg2;
- (id)shotView:(id)arg1;
- (id)imageFromImage:(id)arg1 inRect:(struct CGRect)arg2;
- (id)shotImage;
- (id)editActionResult;
- (_Bool)isTransparentImage:(id)arg1;
- (void)share;
- (id)publishInfoDictionary;
- (void)publish;
- (void)reset;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)remakeAlertWording;
- (_Bool)isNeedShowAlertWhenRemake;
- (void)remake;
- (_Bool)sendInfo:(id)arg1 toComponentID:(id)arg2;
- (void)registerComponents:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)findCorrectTargetViewWithBorder:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)refreshComponentParam;
- (_Bool)switchToComponent:(id)arg1;
- (id)createHongbaoTipsView;
- (void)gestureIgnored:(id)arg1;
- (void)unRegisterNotification;
- (void)registeNotifications;
- (void)dealloc;
- (id)initWithMultimediaType:(unsigned long long)arg1 withInitParam:(id)arg2;
- (id)initWithComponents:(id)arg1 multimediaType:(unsigned long long)arg2 withInitParam:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 components:(id)arg2 multimediaType:(unsigned long long)arg3 withInitParam:(id)arg4;

@end

