//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class QQInputbarItem, UIImageView, UILabel;

@interface QQInputAccessoryViewCell : UICollectionViewCell
{
    QQInputbarItem *_item;
    UIImageView *_imageView;
    UIImageView *_redPointView;
    UIImageView *_rightCornerView;
    UILabel *_rightCornerLabelView;
    UIImageView *_iconView;
}

@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *rightCornerLabelView; // @synthesize rightCornerLabelView=_rightCornerLabelView;
@property(retain, nonatomic) UIImageView *rightCornerView; // @synthesize rightCornerView=_rightCornerView;
@property(retain, nonatomic) UIImageView *redPointView; // @synthesize redPointView=_redPointView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) QQInputbarItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)refreshSelectedCount;
- (void)hideIconView;
- (void)showIconView;
- (void)hideRedPointView;
- (void)showRedPointView;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

