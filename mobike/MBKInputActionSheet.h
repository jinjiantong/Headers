//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseTitleActionSheet.h"

#import "UITextFieldDelegate-Protocol.h"

@class MBKTypeOnlyTextField, NSString, UIButton, UILabel, UIView;

@interface MBKInputActionSheet : MBKBaseTitleActionSheet <UITextFieldDelegate>
{
    _Bool isKeyboardManagerEnable;
    _Bool _placeholderTipsHidden;
    long long _maxValue;
    CDUnknownBlockType _inputCompletionBlock;
    UIView *_inputView;
    MBKTypeOnlyTextField *_inputTextField;
    UILabel *_leftMarkLabel;
    UIButton *_confirmButton;
}

@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *leftMarkLabel; // @synthesize leftMarkLabel=_leftMarkLabel;
@property(retain, nonatomic) MBKTypeOnlyTextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(copy, nonatomic) CDUnknownBlockType inputCompletionBlock; // @synthesize inputCompletionBlock=_inputCompletionBlock;
@property(nonatomic, getter=isPlaceholderTipsHidden) _Bool placeholderTipsHidden; // @synthesize placeholderTipsHidden=_placeholderTipsHidden;
@property(nonatomic) long long maxValue; // @synthesize maxValue=_maxValue;
- (void).cxx_destruct;
- (void)dismiss;
- (void)show;
- (void)addMasConstraints;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

