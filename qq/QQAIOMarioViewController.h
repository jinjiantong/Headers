//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQFaceKeyBoardDelegate-Protocol.h>

@class NSOperationQueue, NSString, QQAIOMarioPanelView;

@interface QQAIOMarioViewController : NSObject <QQFaceKeyBoardDelegate>
{
    QQAIOMarioPanelView *_keyboard;
    NSOperationQueue *_queue;
    _Bool _isShow;
    unsigned long long _maxCount;
    struct CGRect _qqtextfieldFrame;
}

@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) struct CGRect qqtextfieldFrame; // @synthesize qqtextfieldFrame=_qqtextfieldFrame;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (void)cellDidTapped:(id)arg1 onKeyBoard:(id)arg2;
- (void)shouldLoadMarioEmoji:(_Bool)arg1;
- (void)cancelAllOperations;
- (void)addOperationTaskToQueue:(id)arg1;
- (void)removePanel;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hidePanel;
- (void)cancelDelayHidePanel;
- (void)delayHidePanel;
- (void)showPanel;
- (_Bool)attachMainView:(id)arg1;
- (void)setKeyboardDelegate:(id)arg1;
- (void)loadFace;
- (void)setMarioPanelOriginY:(double)arg1;
- (void)keyboardWasHidden:(id)arg1;
- (void)dealloc;
- (void)reloadWithEmojis:(id)arg1 textfieldFrame:(struct CGRect)arg2;
- (id)initWithEmojis:(id)arg1 textfieldFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

