//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQPublicAccountMessageCell.h>

@class NSMutableArray, QQAsynUrlImageView, QQAvatarView, UIButton, UIView;

@interface QQShoppingMessageCell : QQPublicAccountMessageCell
{
    QQAvatarView *_myFriendShopUin;
    UIView *_whiteView;
    NSMutableArray *_picViews;
    UIView *_lineView;
    QQAsynUrlImageView *_spreadImgView;
    UIButton *_closeButton;
}

+ (double)getFitCellHightWithModle:(id)arg1;
- (id)getCurrentIndexPathInTable;
- (void)layoutModelResultFromSession:(id)arg1 label:(id)arg2;
- (void)onCloseSuggest:(id)arg1;
- (void)layoutSubviews;
- (void)setC2CData:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

