//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_UIBaseBindCardViewController.h>

#import <QQMainProject/BankTypeSelectViewDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UICheckBoxDelegate-Protocol.h>
#import <QQMainProject/UIExpirationDatePickerDelegate-Protocol.h>
#import <QQMainProject/UIPickerViewDataSource-Protocol.h>
#import <QQMainProject/UIPickerViewDelegate-Protocol.h>

@class CFT_CardBINInfo, CFT_UICellBtnView, CFT_UICheckBox, CFT_UIFormatField, CFT_UIGroupStyleView, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIDatePicker, UIView;

@interface CFT_UIBindCardViewController : CFT_UIBaseBindCardViewController <UIPickerViewDataSource, UIPickerViewDelegate, UICheckBoxDelegate, UIAlertViewDelegate, UIExpirationDatePickerDelegate, BankTypeSelectViewDelegate>
{
    NSString *preSelectBankType;
    UIDatePicker *_userIdVpPicker;
    int _need_fill;
    NSString *_alertLeftBtnText;
    NSString *_alertRightBtnText;
    _Bool _isRcontinue_Lexit;
    double _bankInfoYOffset;
    _Bool _prefillUserInfo;
    _Bool _canIDCardVerify;
    _Bool _istruename;
    _Bool _hasShowBindAlert;
    _Bool _isLegalBankNum;
    _Bool _notTextChange;
    _Bool _bBindBankCard;
    int _presentType;
    int _viewType;
    int _layout;
    int _inputRet;
    long long _amount;
    NSString *_queryType;
    NSString *_grapHbTips;
    CFT_UIFormatField *_bankCodeField;
    CFT_UIFormatField *_nameField;
    CFT_UIFormatField *_userIdField;
    CFT_UIFormatField *_userIdTypePicker;
    CFT_UIFormatField *_cvvField;
    CFT_UIFormatField *_userIdVPField;
    CFT_UIFormatField *_validatePicker;
    CFT_UICheckBox *_checkBox;
    CFT_UICellBtnView *_bankSelectCell;
    NSMutableArray *_boxes;
    NSMutableArray *_tmpboxes;
    double _totalheight;
    UIButton *_protocolBtn;
    UIButton *_tipBtn;
    CFT_UIGroupStyleView *_bankInfoBox;
    CFT_UIGroupStyleView *_valiadInfoBox;
    CFT_UIGroupStyleView *_detailInfoBox;
    UIView *_protocolBox;
    UIView *_tipInfoBox;
    UIView *_nextFooterView;
    NSMutableArray *_cardBinArray;
    NSMutableDictionary *_bankIdentityDic;
    NSMutableDictionary *_creditCardNameDic;
    NSString *_defaultBankid;
    NSMutableArray *_bankArray;
    NSMutableArray *_bindedCardArray;
    CFT_CardBINInfo *_selectedBin;
    NSDictionary *_selectedBank;
    NSString *_cacheBIN;
    NSString *_headTitle;
    NSString *_quitMsg;
    NSString *_userName;
    NSString *_userId;
    NSString *_userIdType;
    NSString *_cardBinFlag;
    NSMutableArray *_creditcards_type;
    NSString *_userType;
    NSString *_functionTag;
}

@property(retain, nonatomic) NSString *functionTag; // @synthesize functionTag=_functionTag;
@property(nonatomic) _Bool bBindBankCard; // @synthesize bBindBankCard=_bBindBankCard;
@property(nonatomic) _Bool notTextChange; // @synthesize notTextChange=_notTextChange;
@property(copy, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(nonatomic) _Bool isLegalBankNum; // @synthesize isLegalBankNum=_isLegalBankNum;
@property(retain, nonatomic) NSMutableArray *creditcards_type; // @synthesize creditcards_type=_creditcards_type;
@property(retain, nonatomic) NSString *cardBinFlag; // @synthesize cardBinFlag=_cardBinFlag;
@property(nonatomic) _Bool hasShowBindAlert; // @synthesize hasShowBindAlert=_hasShowBindAlert;
@property(retain, nonatomic) NSString *userIdType; // @synthesize userIdType=_userIdType;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool istruename; // @synthesize istruename=_istruename;
@property(retain, nonatomic) NSString *quitMsg; // @synthesize quitMsg=_quitMsg;
@property(copy, nonatomic) NSString *headTitle; // @synthesize headTitle=_headTitle;
@property(nonatomic) int inputRet; // @synthesize inputRet=_inputRet;
@property(copy, nonatomic) NSString *cacheBIN; // @synthesize cacheBIN=_cacheBIN;
@property(retain, nonatomic) NSDictionary *selectedBank; // @synthesize selectedBank=_selectedBank;
@property(retain, nonatomic) CFT_CardBINInfo *selectedBin; // @synthesize selectedBin=_selectedBin;
@property(nonatomic) int layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSMutableArray *bindedCardArray; // @synthesize bindedCardArray=_bindedCardArray;
@property(retain, nonatomic) NSMutableArray *bankArray; // @synthesize bankArray=_bankArray;
@property(retain, nonatomic) NSString *defaultBankid; // @synthesize defaultBankid=_defaultBankid;
@property(retain, nonatomic) NSMutableDictionary *creditCardNameDic; // @synthesize creditCardNameDic=_creditCardNameDic;
@property(retain, nonatomic) NSMutableDictionary *bankIdentityDic; // @synthesize bankIdentityDic=_bankIdentityDic;
@property(retain, nonatomic) NSMutableArray *cardBinArray; // @synthesize cardBinArray=_cardBinArray;
@property(retain, nonatomic) UIView *nextFooterView; // @synthesize nextFooterView=_nextFooterView;
@property(retain, nonatomic) UIView *tipInfoBox; // @synthesize tipInfoBox=_tipInfoBox;
@property(retain, nonatomic) UIView *protocolBox; // @synthesize protocolBox=_protocolBox;
@property(retain, nonatomic) CFT_UIGroupStyleView *detailInfoBox; // @synthesize detailInfoBox=_detailInfoBox;
@property(retain, nonatomic) CFT_UIGroupStyleView *valiadInfoBox; // @synthesize valiadInfoBox=_valiadInfoBox;
@property(retain, nonatomic) CFT_UIGroupStyleView *bankInfoBox; // @synthesize bankInfoBox=_bankInfoBox;
@property(retain, nonatomic) UIButton *tipBtn; // @synthesize tipBtn=_tipBtn;
@property(retain, nonatomic) UIButton *protocolBtn; // @synthesize protocolBtn=_protocolBtn;
@property(nonatomic) double totalheight; // @synthesize totalheight=_totalheight;
@property(retain, nonatomic) NSMutableArray *tmpboxes; // @synthesize tmpboxes=_tmpboxes;
@property(retain, nonatomic) NSMutableArray *boxes; // @synthesize boxes=_boxes;
@property(retain, nonatomic) CFT_UICellBtnView *bankSelectCell; // @synthesize bankSelectCell=_bankSelectCell;
@property(retain, nonatomic) CFT_UICheckBox *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) CFT_UIFormatField *validatePicker; // @synthesize validatePicker=_validatePicker;
@property(retain, nonatomic) CFT_UIFormatField *userIdVPField; // @synthesize userIdVPField=_userIdVPField;
@property(retain, nonatomic) CFT_UIFormatField *cvvField; // @synthesize cvvField=_cvvField;
@property(retain, nonatomic) CFT_UIFormatField *userIdTypePicker; // @synthesize userIdTypePicker=_userIdTypePicker;
@property(retain, nonatomic) CFT_UIFormatField *userIdField; // @synthesize userIdField=_userIdField;
@property(retain, nonatomic) CFT_UIFormatField *nameField; // @synthesize nameField=_nameField;
@property(retain, nonatomic) CFT_UIFormatField *bankCodeField; // @synthesize bankCodeField=_bankCodeField;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) NSString *grapHbTips; // @synthesize grapHbTips=_grapHbTips;
@property(retain, nonatomic) NSString *queryType; // @synthesize queryType=_queryType;
@property(nonatomic) _Bool canIDCardVerify; // @synthesize canIDCardVerify=_canIDCardVerify;
@property(nonatomic) int presentType; // @synthesize presentType=_presentType;
@property(nonatomic) _Bool prefillUserInfo; // @synthesize prefillUserInfo=_prefillUserInfo;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
- (void)onQQWalletImageDownloadFinishNotify:(id)arg1;
- (void)checkBoxStateChanged:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)expirationDatePicker:(id)arg1 didSelectMonth:(unsigned long long)arg2 inYear:(unsigned long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)setUerIdTypeAndKeyBoard:(id)arg1;
- (void)resignResponder;
- (void)resetIdPicker;
- (void)recaculateLayout;
- (void)resetDetailInfoBox;
- (void)updateDetailInfoState;
- (void)resetInputRet;
- (unsigned long long)bankInfoFlag;
- (void)resetTipBtn:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (void)changeFirstResponder:(id)arg1;
- (void)changeLayout:(int)arg1 forceRefresh:(_Bool)arg2;
- (void)bankTypeDidSelect:(id)arg1;
- (void)findPswGuide:(id)arg1;
- (void)popPayPact:(id)arg1;
- (void)selectBank:(id)arg1;
- (void)nextStep;
- (void)resignTextField;
- (void)idCardVerifyBtnClick;
- (void)onRightButtonClick:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (unsigned long long)getCreditTypeIndex:(id)arg1;
- (void)getCardBinInfo;
- (void)wal_query_cardbin_conf;
- (void)wal_bank_query;
- (void)bank_cache_conf;
- (long long)binarySearchBIN:(id)arg1 arrayCount:(unsigned long long)arg2 toFind:(long long)arg3;
- (int)handleInput:(id)arg1;
- (void)handleResponsiveTextChanged;
- (void)dealloc;
- (void)bankCodeBecomeFirstResponder;
- (void)queryUserInfo;
- (id)dateToString:(id)arg1;
- (void)datePickerValueChanged:(id)arg1;
- (void)selectDateFinish;
- (void)initUserIdVPFieldAndMobileField;
- (void)initUserIdField:(unsigned long long)arg1;
- (void)onValidateComplish;
- (void)initSubViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithType:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

