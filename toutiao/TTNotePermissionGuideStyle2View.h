//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTNotePermissonGuideView.h"

@class SSThemedButton;

@interface TTNotePermissionGuideStyle2View : TTNotePermissonGuideView
{
    SSThemedButton *_closeButton;
    SSThemedButton *_openSysSettingButton;
}

@property(retain, nonatomic) SSThemedButton *openSysSettingButton; // @synthesize openSysSettingButton=_openSysSettingButton;
@property(retain, nonatomic) SSThemedButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)actionForDidTapOpenSysSettingButton:(id)arg1;
- (void)actionForDidTapCloseButton:(id)arg1;
- (void)layoutSubviews;
- (void)setupTappedTextButtons;
- (void)setupDismissButtons;

@end

