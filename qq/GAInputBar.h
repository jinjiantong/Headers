//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZEmojiTextView.h>

#import <QQMainProject/QQBaseFacePanelDelegate-Protocol.h>
#import <QQMainProject/QQMultiImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/QZDeletablePhotoViewDelegate-Protocol.h>
#import <QQMainProject/QZFontListViewDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class MQZMoodEditInputAccessoryView, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QQMultiImagePickerController, QZBubbleBoardContainerView, QZFacePanelController, QZFontBoardContainerView, QZSparkleWordView, QzoneCommSparkleWord, QzoneCommentBubble, UIButton, UIColor, UIControl, UIImageView, UILabel, UIView, UIViewController, UIVisualEffectView;
@protocol GAInputBarDelegate;

@interface GAInputBar : QZEmojiTextView <QQMultiImagePickerControllerDelegate, QZDeletablePhotoViewDelegate, QQBaseFacePanelDelegate, QZFontListViewDelegate, UIAlertViewDelegate>
{
    long long _inputState;
    NSMutableDictionary *_allStateItems;
    NSDictionary *_keyboardInfo;
    struct _NSRange _selectedRange;
    struct CGPoint _pointOfScreenBottom;
    _Bool _isOutSizeScreen;
    NSMutableDictionary *_atDict;
    NSString *_draftKey;
    _Bool _isSending;
    _Bool _isReplyToPrivate;
    id <GAInputBarDelegate> _delegate;
    _Bool _supportBulletCurtain;
    _Bool _supportLiveBubble;
    long long _liveBubbleHeight;
    QZFacePanelController *_facePanelController;
    UIButton *_atFriendBtn;
    UIButton *_emotionBtn;
    UIButton *_keyboardBtn;
    UIButton *_picCommentBtn;
    UIImageView *_textBg;
    UIImageView *_bg;
    UIVisualEffectView *_backBlurView;
    UIColor *_textDefalutColor;
    _Bool _isPreLoadEmoji;
    _Bool _needLayout;
    _Bool _isPrivate;
    _Bool _ifShowQQEmoji;
    _Bool _ifShowCustomTab;
    _Bool _isBulletCurtain;
    _Bool _isBubbleCurtain;
    _Bool _isNoNeedAtBtn;
    _Bool _showDiyFont;
    _Bool _notGetFontList;
    _Bool _aotushowFontList;
    _Bool _notGetBubbleList;
    _Bool _aotushowBubbleBoard;
    _Bool _showCommentBubble;
    _Bool _shouldKeepResponderWhenReturn;
    _Bool _shouldContinuePlay;
    _Bool _showAlert;
    NSString *_bulletPlaceholder;
    NSMutableArray *_selectedPicArrays;
    long long _reportScene;
    UIControl *_maskPanel;
    QQMultiImagePickerController *_picker;
    UIViewController *_ownerViewController;
    UIView *_fontBoardView;
    QZFontBoardContainerView *_fontBoardContainer;
    UIImageView *_fontButtonRedDot;
    UIView *_bubbleBoardView;
    QZBubbleBoardContainerView *_bubbleBoardContainer;
    UIImageView *_bubbleButtonRedDot;
    QzoneCommSparkleWord *_sparkleword;
    QZSparkleWordView *_sparkleWordView;
    UILabel *_placeholder;
    QzoneCommentBubble *_commentBubble;
    MQZMoodEditInputAccessoryView *_customInputAccessoryView;
    CDUnknownBlockType _bubbleBlock;
}

@property(nonatomic) _Bool showAlert; // @synthesize showAlert=_showAlert;
@property(nonatomic) _Bool shouldContinuePlay; // @synthesize shouldContinuePlay=_shouldContinuePlay;
@property(copy, nonatomic) CDUnknownBlockType bubbleBlock; // @synthesize bubbleBlock=_bubbleBlock;
@property(readonly, nonatomic) MQZMoodEditInputAccessoryView *customInputAccessoryView; // @synthesize customInputAccessoryView=_customInputAccessoryView;
@property(retain, nonatomic) QzoneCommentBubble *commentBubble; // @synthesize commentBubble=_commentBubble;
@property(retain, nonatomic) UILabel *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) QZSparkleWordView *sparkleWordView; // @synthesize sparkleWordView=_sparkleWordView;
@property(retain, nonatomic) QzoneCommSparkleWord *sparkleword; // @synthesize sparkleword=_sparkleword;
@property(nonatomic) _Bool shouldKeepResponderWhenReturn; // @synthesize shouldKeepResponderWhenReturn=_shouldKeepResponderWhenReturn;
@property(retain, nonatomic) UIImageView *bubbleButtonRedDot; // @synthesize bubbleButtonRedDot=_bubbleButtonRedDot;
@property(retain, nonatomic) QZBubbleBoardContainerView *bubbleBoardContainer; // @synthesize bubbleBoardContainer=_bubbleBoardContainer;
@property(retain, nonatomic) UIView *bubbleBoardView; // @synthesize bubbleBoardView=_bubbleBoardView;
@property(nonatomic) _Bool showCommentBubble; // @synthesize showCommentBubble=_showCommentBubble;
@property(nonatomic) _Bool aotushowBubbleBoard; // @synthesize aotushowBubbleBoard=_aotushowBubbleBoard;
@property(nonatomic) _Bool notGetBubbleList; // @synthesize notGetBubbleList=_notGetBubbleList;
@property(retain, nonatomic) UIImageView *fontButtonRedDot; // @synthesize fontButtonRedDot=_fontButtonRedDot;
@property(retain, nonatomic) QZFontBoardContainerView *fontBoardContainer; // @synthesize fontBoardContainer=_fontBoardContainer;
@property(retain, nonatomic) UIView *fontBoardView; // @synthesize fontBoardView=_fontBoardView;
@property(nonatomic) _Bool aotushowFontList; // @synthesize aotushowFontList=_aotushowFontList;
@property(nonatomic) _Bool notGetFontList; // @synthesize notGetFontList=_notGetFontList;
@property(nonatomic) _Bool showDiyFont; // @synthesize showDiyFont=_showDiyFont;
@property(nonatomic) __weak UIViewController *ownerViewController; // @synthesize ownerViewController=_ownerViewController;
@property(retain, nonatomic) QQMultiImagePickerController *picker; // @synthesize picker=_picker;
@property(nonatomic) _Bool isNoNeedAtBtn; // @synthesize isNoNeedAtBtn=_isNoNeedAtBtn;
@property(retain, nonatomic) UIControl *maskPanel; // @synthesize maskPanel=_maskPanel;
@property(nonatomic) long long reportScene; // @synthesize reportScene=_reportScene;
@property(retain, nonatomic) NSMutableArray *selectedPicArrays; // @synthesize selectedPicArrays=_selectedPicArrays;
@property(retain, nonatomic) NSString *bulletPlaceholder; // @synthesize bulletPlaceholder=_bulletPlaceholder;
@property(nonatomic) _Bool isBubbleCurtain; // @synthesize isBubbleCurtain=_isBubbleCurtain;
@property(nonatomic) _Bool isBulletCurtain; // @synthesize isBulletCurtain=_isBulletCurtain;
@property(nonatomic) _Bool ifShowCustomTab; // @synthesize ifShowCustomTab=_ifShowCustomTab;
@property(nonatomic) _Bool ifShowQQEmoji; // @synthesize ifShowQQEmoji=_ifShowQQEmoji;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(retain, nonatomic) NSMutableDictionary *atDict; // @synthesize atDict=_atDict;
@property(retain, nonatomic) NSString *draftKey; // @synthesize draftKey=_draftKey;
@property(nonatomic) _Bool needLayout; // @synthesize needLayout=_needLayout;
@property(readonly, nonatomic) _Bool isOutSizeScreen; // @synthesize isOutSizeScreen=_isOutSizeScreen;
@property(nonatomic) __weak id <GAInputBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long inputState; // @synthesize inputState=_inputState;
- (void).cxx_destruct;
- (long long)inputBarTheme;
- (id)accessoryView;
- (void)setGAInputBarTheme:(long long)arg1;
- (id)appRootViewController;
- (id)inputBarEncodedString;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (void)fontListView:(id)arg1 openPayVC:(id)arg2 hasQual:(_Bool)arg3;
- (void)fontListViewDidSelected:(id)arg1 withTap:(_Bool)arg2;
- (id)diyFont;
- (void)updateRedTimeForKey:(id)arg1;
- (_Bool)redDotHiddenForKey:(id)arg1;
- (void)showFontRedDot;
- (long long)getBubbleList;
- (void)loadBubbleList;
- (void)loadFontList;
- (long long)getFontList;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateSparklewordDisplay;
- (void)textChange;
- (void)setEditingPlaceholder:(id)arg1;
- (void)createBubbleBoard;
- (void)showBubbleBoard;
- (void)createFontBoard;
- (void)showFontBoard;
- (void)sendGifViewWithParam:(id)arg1;
- (void)sendFace;
- (void)removeBubbleBoard;
- (void)removeFontBoard;
- (void)removeEmotionBoard;
- (void)showEmotionBoard;
- (void)preLoadEmojiImage;
- (_Bool)isKeyboardChangeFrame:(_Bool *)arg1;
- (void)onKeyboardWillHideNotify:(id)arg1;
- (void)onKeyboardWillShowNotify:(id)arg1;
- (void)removeKeyboardObserver;
- (void)addKeyboardObserver;
- (void)setAtDict:(id)arg1 nicks:(id)arg2;
- (void)reportData:(id)arg1;
- (void)openYellowVip;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickBtn:(id)arg1;
- (void)clickMaskPanel:(id)arg1;
- (_Bool)isMaskPanelAdded;
- (void)removeMaskPanel;
- (void)addMaskPanel;
- (void)draftBoxFinishEditing;
- (void)draftBoxEndEditing;
- (void)draftBoxUpdateEditing;
- (void)draftBoxBeginEditing;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)updateInputState:(long long)arg1;
- (void)resetInputBar;
- (void)deactiveInputBar;
- (void)activeInputBar:(_Bool)arg1;
- (void)reportFontBoardShow;
- (void)reportInputBarCommentDataClick:(long long)arg1;
- (void)reportInputBarCommentDataShow;
- (void)hideItemsForState:(long long)arg1;
- (struct CGRect)frameAtRightIndex:(unsigned long long)arg1;
- (void)addRightItem:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3 frame:(struct CGRect)arg4;
- (void)addRightItem:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (struct CGRect)frameAtLeftIndex:(unsigned long long)arg1;
- (void)textViewDidChange:(id)arg1;
- (id)textView;
- (void)doWhenViewWillDisappear;
- (void)doWhenViewDidAppear;
- (void)doWhenViewWillAppear;
- (void)createBgView;
- (void)reloadAppearance;
- (void)isBubbleOn:(_Bool)arg1;
- (void)isBulletCurtainOn:(_Bool)arg1;
- (void)layoutFrame;
- (void)layoutSubviews;
- (void)dealloc;
- (void)showInView:(id)arg1 isOutSizeScreen:(_Bool)arg2;
- (void)updateLayoutShowPrivateIcon:(_Bool)arg1;
- (void)updateLayoutShowPrivateText:(_Bool)arg1;
- (void)updateLayoutShowAtBtn:(_Bool)arg1 emotionBtn:(_Bool)arg2 showDiyFont:(_Bool)arg3 pictureCom:(_Bool)arg4 private:(_Bool)arg5 isReply:(_Bool)arg6;
- (void)updateLayoutShowAtBtn:(_Bool)arg1 emotionBtn:(_Bool)arg2 pictureCom:(_Bool)arg3 private:(_Bool)arg4 isReply:(_Bool)arg5 andAppid:(long long)arg6;
- (_Bool)needPackUpButton;
- (void)updateLayoutShowAtBtn:(_Bool)arg1 emotionBtn:(_Bool)arg2 showDiyFont:(_Bool)arg3 pictureCom:(_Bool)arg4;
- (void)updateLayoutShowAtBtn:(_Bool)arg1 emotionBtn:(_Bool)arg2;
- (void)updateLayoutShowPrivate:(_Bool)arg1 isReply:(_Bool)arg2 showPicComment:(_Bool)arg3 andAppid:(long long)arg4;
- (void)updateLayoutShowPrivate:(_Bool)arg1 isReply:(_Bool)arg2 andAppid:(long long)arg3;
- (void)updateLayoutShowPrivate:(_Bool)arg1 isReply:(_Bool)arg2 showPicComment:(_Bool)arg3;
- (void)updateLayoutShowPrivate:(_Bool)arg1 isReply:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)inputAccessoryViewDidPressButton:(id)arg1;
- (void)showPackUpkeyboardButton;
- (id)initWithFrame:(struct CGRect)arg1 defaultStyle:(_Bool)arg2 supportBulletCurtain:(_Bool)arg3 supportLiveBubble:(_Bool)arg4 liveBubbleHeight:(long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1 defaultStyle:(_Bool)arg2 supportBulletCurtain:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 defaultStyle:(_Bool)arg2;
- (void)hidePicCommentBg;
- (void)resetPicCommentView;
- (void)activePicCommentView;
- (void)changePicCommentViewOrigin:(struct CGPoint)arg1;
- (void)onClickDeleteAsset:(id)arg1;
- (void)layoutPicView:(id)arg1;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)clickPicComment;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

