//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPChatBaseController.h"

#import "APCInputToolsViewDelegate-Protocol.h"
#import "BEEPhotoPickerDelegate-Protocol.h"

@class APCInputToolsView, NSArray, NSString, PPChatMenu, PPChatMenuItem, PPChatPublicAccount, UIButton, UIControl;

@interface PPChatMenuController : PPChatBaseController <APCInputToolsViewDelegate, BEEPhotoPickerDelegate>
{
    _Bool _enabled;
    _Bool _isExternalMode;
    _Bool _needKeyboardButton;
    _Bool _showInputToolbar;
    int _clickedItemType;
    int _chatStatus;
    int _newChatStatus;
    UIButton *_keyboardButton;
    NSArray *_menuItems;
    PPChatMenuItem *_clickedItem;
    PPChatMenu *_visibleSubMenu;
    long long _menuScreenW;
    long long _inputKeyboardW;
    NSString *_merchantId;
    PPChatPublicAccount *_publicAccount;
    PPChatMenu *_baseMenu;
    UIControl *_bgView;
    APCInputToolsView *_inputToolsView;
    NSString *_publicId;
    NSArray *_thirdPartyAccountMenus;
}

+ (void)setLastClickedMenuName:(id)arg1;
+ (id)lastClickedMenuName;
@property(nonatomic) int newChatStatus; // @synthesize newChatStatus=_newChatStatus;
@property(nonatomic) int chatStatus; // @synthesize chatStatus=_chatStatus;
@property(retain, nonatomic) NSArray *thirdPartyAccountMenus; // @synthesize thirdPartyAccountMenus=_thirdPartyAccountMenus;
@property(nonatomic) _Bool showInputToolbar; // @synthesize showInputToolbar=_showInputToolbar;
@property(nonatomic) _Bool needKeyboardButton; // @synthesize needKeyboardButton=_needKeyboardButton;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(retain, nonatomic) APCInputToolsView *inputToolsView; // @synthesize inputToolsView=_inputToolsView;
@property(retain, nonatomic) UIControl *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) PPChatMenu *baseMenu; // @synthesize baseMenu=_baseMenu;
@property(retain, nonatomic) PPChatPublicAccount *publicAccount; // @synthesize publicAccount=_publicAccount;
@property(retain, nonatomic) NSString *merchantId; // @synthesize merchantId=_merchantId;
@property(nonatomic) _Bool isExternalMode; // @synthesize isExternalMode=_isExternalMode;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long inputKeyboardW; // @synthesize inputKeyboardW=_inputKeyboardW;
@property(nonatomic) long long menuScreenW; // @synthesize menuScreenW=_menuScreenW;
@property(retain, nonatomic) PPChatMenu *visibleSubMenu; // @synthesize visibleSubMenu=_visibleSubMenu;
@property(nonatomic) int clickedItemType; // @synthesize clickedItemType=_clickedItemType;
@property(retain, nonatomic) PPChatMenuItem *clickedItem; // @synthesize clickedItem=_clickedItem;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(readonly, nonatomic) UIButton *keyboardButton; // @synthesize keyboardButton=_keyboardButton;
- (void).cxx_destruct;
- (void)closeKeyboard:(_Bool)arg1;
- (void)selectedImage:(id)arg1;
- (void)photoPickerController:(id)arg1 didFinishPickingAssets:(id)arg2 theOriginal:(_Bool)arg3;
- (void)photoPickerController:(id)arg1 didFinishPickingAssetData:(id)arg2;
- (void)inputBoxFrameChanged;
- (void)inputBoxHideAnimatedEnd;
- (void)inputBoxHideAnimatedBegin;
- (void)inputBoxShowAnimatedEnd;
- (void)inputBoxShowAnimatedBegin;
- (void)toolBarButtonAction:(long long)arg1;
- (void)textMsgSendBtnClick:(id)arg1;
- (void)changeToolBarAction:(id)arg1 hasDoAnimate:(_Bool)arg2;
- (void)inputToolsViewFrameChange:(id)arg1;
- (void)sendTextMessage:(id)arg1;
- (void)menuTextColorClear;
- (void)InputBox2Menu;
- (void)menu2InputBox;
- (void)hideKeyBoardAction;
- (void)addKeyboardNotification;
- (void)removeKeyboardNotification;
- (void)loadInputView;
- (void)loadBgView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)hideVisibleSubMenu:(CDUnknownBlockType)arg1;
- (_Bool)menuItems:(id)arg1 looksLike:(id)arg2;
@property(readonly, nonatomic) double baseHeight;
- (void)reloadItems;
- (void)clearMenuUI;
- (void)changeToMenuBarAdjust;
- (void)gotoPPChatWithActionType:(id)arg1 actionParam:(id)arg2;
- (void)handleExternalMenuClick;
- (void)processExternalMenuActionType:(id)arg1 actionParam:(id)arg2;
- (void)onMenuClick;
- (void)addKeyboardButtonIfNeed;
- (void)menuControlBarHidden:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeKeyboardButton;
- (void)addKeyboardButton;
- (void)keyBoardAction:(id)arg1;
- (void)updateMenu;
- (void)loadMenu;
- (void)showChatMode;
- (void)showWithPublicId:(id)arg1;
- (void)action:(int)arg1 withControllerParam:(id)arg2;
- (void)showWithControllerParam:(id)arg1;
- (void)layoutWithFrame:(struct CGRect)arg1;
- (double)heightOfView;
- (void)controlClear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)sendActionsForControlEvents:(unsigned long long)arg1;
- (void)showSubMenu:(id)arg1;
- (void)hideVisibleSubMenu;
- (void)hideVisibleSubMenuAnimate:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
