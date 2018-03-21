//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "STPCodeInternalTextFieldDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSString, STPTheme, UILabel;
@protocol STPSMSCodeTextFieldDelegate;

@interface STPSMSCodeTextField : UIView <UITextFieldDelegate, STPCodeInternalTextFieldDelegate>
{
    id <STPSMSCodeTextFieldDelegate> _delegate;
    STPTheme *_theme;
    UIView *_leftContainerView;
    UILabel *_centerLabel;
    UIView *_rightContainerView;
    NSArray *_textFields;
    NSArray *_separators;
    UIView *_coveringView;
}

@property(nonatomic) __weak UIView *coveringView; // @synthesize coveringView=_coveringView;
@property(retain, nonatomic) NSArray *separators; // @synthesize separators=_separators;
@property(retain, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property(nonatomic) __weak UIView *rightContainerView; // @synthesize rightContainerView=_rightContainerView;
@property(nonatomic) __weak UILabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(nonatomic) __weak UIView *leftContainerView; // @synthesize leftContainerView=_leftContainerView;
@property(retain, nonatomic) STPTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <STPSMSCodeTextFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *code;
- (id)fieldAfter:(id)arg1;
- (id)fieldBefore:(id)arg1;
- (void)internalTextFieldDidBackspaceOnEmpty:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateAppearance;
- (void)shakeAndClear;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
