//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSPhoneCodeViewController.h"

@class KSBindModel, KSUserInfoSettingCell, NSString, UIButton, UILabel;

@interface KSBindPhoneVerifyViewController : KSPhoneCodeViewController
{
    _Bool _dismissAutomatically;
    _Bool _enableAccountProtection;
    _Bool _isPrivacyMode;
    CDUnknownBlockType _onBindSuccess;
    CDUnknownBlockType _onUserCanceled;
    UILabel *_passwordHintLabel;
    KSUserInfoSettingCell *_passwordCell;
    NSString *_headerText;
    UIButton *_privacyButton;
    KSBindModel *_bindModel;
    NSString *_bindSource;
}

@property(nonatomic) _Bool isPrivacyMode; // @synthesize isPrivacyMode=_isPrivacyMode;
@property(retain, nonatomic) NSString *bindSource; // @synthesize bindSource=_bindSource;
@property(retain, nonatomic) KSBindModel *bindModel; // @synthesize bindModel=_bindModel;
@property(retain, nonatomic) UIButton *privacyButton; // @synthesize privacyButton=_privacyButton;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(retain, nonatomic) KSUserInfoSettingCell *passwordCell; // @synthesize passwordCell=_passwordCell;
@property(nonatomic) _Bool enableAccountProtection; // @synthesize enableAccountProtection=_enableAccountProtection;
@property(retain, nonatomic) UILabel *passwordHintLabel; // @synthesize passwordHintLabel=_passwordHintLabel;
@property(copy, nonatomic) CDUnknownBlockType onUserCanceled; // @synthesize onUserCanceled=_onUserCanceled;
@property(copy, nonatomic) CDUnknownBlockType onBindSuccess; // @synthesize onBindSuccess=_onBindSuccess;
@property(nonatomic) _Bool dismissAutomatically; // @synthesize dismissAutomatically=_dismissAutomatically;
- (void).cxx_destruct;
- (id)ksuShowMetaData;
- (id)pageURL;
- (int)verifyCodeType;
- (id)setUpCells;
- (void)didTapDoneButton:(id)arg1;
- (void)setUpFooter:(id)arg1;
- (void)setUpHeader:(id)arg1;
- (void)didChangeCellText:(id)arg1;
- (void)didTapBackNagigationButton:(id)arg1;
- (void)_tryToBindPhone;
- (void)_validatePasswordWithContinuation:(CDUnknownBlockType)arg1;
- (void)_backupIfNeeded;
- (void)_updateBindPhoneNumber;
- (void)_updateBindPointIfNeeded;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithHeaderText:(id)arg1 bindSource:(id)arg2;
- (id)initWithHeaderText:(id)arg1 bindSource:(id)arg2 enableAccountProtection:(_Bool)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

