//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCChatBubble.h"

#import "MCChatExtendAuthViewDelegate-Protocol.h"
#import "MCChatExtendContentLayoutViewDelegate-Protocol.h"
#import "MCChatExtendLeftRightGoodsLayoutViewDelegate-Protocol.h"
#import "MCChatExtendLocalAuthViewDelegate-Protocol.h"
#import "MCChatExtendSimpleViewDelegate-Protocol.h"
#import "MCChatExtendTopBottomLayoutViewDelegate-Protocol.h"
#import "MCChatSharePayViewDelegate-Protocol.h"

@class MCChatExtendAuthView, MCChatExtendContentLayoutView, MCChatExtendLeftRightGoodsLayoutView, MCChatExtendLocalAuthView, MCChatExtendSimpleView, MCChatExtendTopBottomLayoutView, MCChatSharePayView, NSString, UIImageView;

@interface MCChatExtendBubble : MCChatBubble <MCChatExtendAuthViewDelegate, MCChatExtendSimpleViewDelegate, MCChatExtendLocalAuthViewDelegate, MCChatSharePayViewDelegate, MCChatExtendContentLayoutViewDelegate, MCChatExtendLeftRightGoodsLayoutViewDelegate, MCChatExtendTopBottomLayoutViewDelegate>
{
    UIImageView *_backgroundImageView;
    MCChatExtendAuthView *_authView;
    MCChatExtendSimpleView *_simpleView;
    MCChatExtendLocalAuthView *_localAuthView;
    MCChatSharePayView *_sharePayView;
    MCChatExtendLeftRightGoodsLayoutView *_goodsLayoutView;
    MCChatExtendContentLayoutView *_contentLayoutView;
    MCChatExtendTopBottomLayoutView *_topBottomLayoutView;
}

+ (id)convertExtendMessageToShareMessage:(id)arg1;
+ (struct CGSize)bubbleSizeForCellObject:(id)arg1 withContainer:(struct CGSize)arg2;
@property(retain, nonatomic) MCChatExtendTopBottomLayoutView *topBottomLayoutView; // @synthesize topBottomLayoutView=_topBottomLayoutView;
@property(retain, nonatomic) MCChatExtendContentLayoutView *contentLayoutView; // @synthesize contentLayoutView=_contentLayoutView;
@property(retain, nonatomic) MCChatExtendLeftRightGoodsLayoutView *goodsLayoutView; // @synthesize goodsLayoutView=_goodsLayoutView;
@property(retain, nonatomic) MCChatSharePayView *sharePayView; // @synthesize sharePayView=_sharePayView;
@property(retain, nonatomic) MCChatExtendLocalAuthView *localAuthView; // @synthesize localAuthView=_localAuthView;
@property(retain, nonatomic) MCChatExtendSimpleView *simpleView; // @synthesize simpleView=_simpleView;
@property(retain, nonatomic) MCChatExtendAuthView *authView; // @synthesize authView=_authView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (id)imageMaskWithColor:(id)arg1 image:(id)arg2;
- (void)topBottomLayoutViewActionButtonTap:(id)arg1;
- (void)extendLeftRightGoodsLayoutViewRightBtnAction:(id)arg1;
- (void)extendLeftRightGoodsLayoutViewLeftBtnAction:(id)arg1;
- (void)extendLeftRightGoodsLayoutViewTapped:(id)arg1;
- (void)extendContentLayoutViewTapped:(id)arg1;
- (void)localAuthViewActionButtonTap:(id)arg1 authValue:(long long)arg2;
- (void)sharePayViewTapped:(id)arg1;
- (void)simpleViewActionButtonTap:(id)arg1;
- (void)authViewActionButtonTap:(id)arg1;
- (void)recycle;
- (void)updateBubbleWithCellObject:(id)arg1 bubbleHandler:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithBubbleStyle:(long long)arg1 subStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

