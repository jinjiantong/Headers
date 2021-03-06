//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WBTextEditorViewDelegate-Protocol.h"

@class NSString, UIButton, WBComposeTextElementView, WBSwitchButton;

@interface WBRetweetSenderView : UIView <UITextFieldDelegate, UIGestureRecognizerDelegate, WBTextEditorViewDelegate>
{
    WBComposeTextElementView *_inputField;
    WBSwitchButton *_emoticonButton;
    UIButton *_senderButton;
    double _newHeight;
    double _oldHeight;
    CDStruct_26f2e3a7 _layout;
}

@property(nonatomic) double oldHeight; // @synthesize oldHeight=_oldHeight;
@property(nonatomic) double newHeight; // @synthesize newHeight=_newHeight;
@property(nonatomic) CDStruct_26f2e3a7 layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIButton *senderButton; // @synthesize senderButton=_senderButton;
@property(retain, nonatomic) WBSwitchButton *emoticonButton; // @synthesize emoticonButton=_emoticonButton;
@property(retain, nonatomic) WBComposeTextElementView *inputField; // @synthesize inputField=_inputField;
- (void).cxx_destruct;
- (void)dealloc;
- (id)emoticonBtn;
- (_Bool)isDefaultSkin;
- (void)didPressedButton:(id)arg1;
- (void)textEditorView:(id)arg1 contentSizeDidUpdate:(struct CGSize)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)senderButtonTapped:(id)arg1;
- (void)changeFirstResponder;
- (void)resetSenderButtonStatus;
- (void)updateSenderButtonStatus;
- (void)emotionToggle:(id)arg1;
- (void)layoutSubviews;
- (id)imageWithColor:(id)arg1;
- (void)loadSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

