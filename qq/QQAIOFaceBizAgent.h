//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOBaseBizAgent.h>

#import <QQMainProject/QQFaceKeyBoardDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class NSDate, NSString, NSTimer, QQAIOCell, QQFaceAssociatePanelController, QQFaceEditMaskView, UIPinchGestureRecognizer, UIView;

@interface QQAIOFaceBizAgent : QQAIOBaseBizAgent <QQFaceKeyBoardDelegate, UIAlertViewDelegate, UIGestureRecognizerDelegate>
{
    UIPinchGestureRecognizer *_pinchRecognizer;
    NSTimer *_stickerDetailTimer;
    UIView *_stickerCellHighlightView;
    struct CGRect _stickingCellRect;
    NSDate *_lastStickFailTime;
    NSString *_stickerOpEntry;
    QQFaceAssociatePanelController *_emojiAssociate;
    _Bool _isEmojiAssociateSticking;
    QQFaceEditMaskView *_editMaskView;
    QQAIOCell *_stickingCell;
}

+ (_Bool)isLimitEmojiStickerPerfomance;
+ (id)getEmojiStickersInChatVC:(id)arg1 jump:(_Bool)arg2;
+ (void)showEmojiStickersWhenLongPressEnd:(id)arg1;
+ (void)hideEmojiStickersWhenLongPress:(id)arg1;
+ (id)getEmojiStickKeyByStickerInfo:(id)arg1 isGroup:(_Bool)arg2;
+ (id)getEmojiStickKeyByMsgModel:(id)arg1;
+ (_Bool)isCellCanShowSticker:(id)arg1;
+ (_Bool)isCellSupportSticker:(id)arg1;
+ (_Bool)isSupportEmojiSticker:(id)arg1;
+ (id)getDoubleTapedStickerList;
+ (void)setDoubleTapedStickerList:(id)arg1;
+ (double)cellHeightWithEmojiStickerOnAioModel:(id)arg1 chatVC:(id)arg2;
+ (double)getOffsetYByStickerList:(id)arg1 forCell:(id)arg2;
+ (struct CGSize)limitCustomStickerSize:(struct CGSize)arg1;
+ (void)drawEmojiStickerOnCell:(id)arg1;
@property(nonatomic) _Bool isEmojiAssociateSticking; // @synthesize isEmojiAssociateSticking=_isEmojiAssociateSticking;
@property(retain, nonatomic) QQFaceAssociatePanelController *emojiAssociate; // @synthesize emojiAssociate=_emojiAssociate;
@property(retain, nonatomic) QQAIOCell *stickingCell; // @synthesize stickingCell=_stickingCell;
@property(retain, nonatomic) QQFaceEditMaskView *editMaskView; // @synthesize editMaskView=_editMaskView;
- (void).cxx_destruct;
- (void)setDiversion:(id)arg1 withEmojiInfo:(id)arg2 fromFaceTabID:(long long)arg3;
- (void)updateEmojiAssociateFrame;
- (void)dismissEmojiAssociate;
- (void)clearCellHightLight:(id)arg1;
- (void)presentEmojiAssociateIfNeededWithInputText:(id)arg1;
- (void)emojiAssociateKeywords;
- (void)deferEmojiAssociateKeywords;
- (void)openSmallFaceDetailWithPackageId:(unsigned long long)arg1 emojiID:(id)arg2 allSmallFace:(id)arg3;
- (void)openMarketFaceDetailWithChatCellModel:(id)arg1;
- (void)openPackageDetailView:(id)arg1;
- (void)stopAioAllGifPlay;
- (void)playMagicFace:(id)arg1;
- (void)playMagicFace:(id)arg1 HistoryInfo:(id)arg2;
- (void)faceSelfDraged:(id)arg1 emojiStickerInfo:(id)arg2;
- (void)sendMarketFaceMsg:(id)arg1;
- (void)setFaceInfo:(id)arg1 fromEmojiInfo:(id)arg2;
- (_Bool)isSupporttedEmojiType:(_Bool)arg1 emojiInfo:(id)arg2 emojiHistoryInfo:(id)arg3;
- (void)reportCustomFaceSend:(id)arg1;
- (void)cellDidTapped:(id)arg1 onKeyBoard:(id)arg2;
- (id)convertWithEmojiInfo:(id)arg1;
- (void)cellStopAtPoint:(id)arg1 data:(id)arg2 view:(id)arg3;
- (void)cellMoveToPoint:(id)arg1 view:(id)arg2;
- (id)initWithChatViewController:(id)arg1;
- (void)dealloc;
- (void)onEmojiStickerSendFail:(id)arg1;
- (void)onPinchInChatVC:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)recallEmojiSticker:(id)arg1;
- (void)onEmojiStickerDoubleTaped:(id)arg1;
- (void)onEmojiStickMoveToBounds:(id)arg1;
- (void)onEmojiStickClickBackground;
- (void)sendIOSEmoji:(id)arg1 emojiStickerInfo:(id)arg2;
- (void)sendQQEmoji:(id)arg1 emojiStickerInfo:(id)arg2;
- (void)sendMarketSmallEmoji:(id)arg1 emojiStickerInfo:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showSVIPFailAlart;
- (void)onEmojiStickFinish;
- (void)onEmojiStickCancel;
- (void)clearEmojiPasterView:(_Bool)arg1;
- (void)clearEmojiPasterView;
- (void)shakeEmojiStickerWhenFail;
- (void)cellStopAtPoint:(id)arg1 data:(id)arg2 view:(id)arg3;
- (void)stickerViewMove:(id)arg1 touchPoint:(struct CGPoint)arg2 centerPoint:(struct CGPoint)arg3;
- (void)cellMoveToPoint:(id)arg1 view:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
