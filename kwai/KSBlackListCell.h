//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CAAnimationlessLayer, KSBlackedUser, NSLayoutConstraint, UIButton, UIImageView, UILabel;
@protocol KSBlackListCellDelegate;

@interface KSBlackListCell : UITableViewCell
{
    _Bool _isAddMode;
    _Bool _fullLineStyle;
    id <KSBlackListCellDelegate> _delegate;
    UIImageView *_avatarView;
    UIImageView *_vIcon;
    UILabel *_nameLabel;
    UIButton *_addOrDelButton;
    NSLayoutConstraint *_nameLabelCenterYLayoutConstraint;
    NSLayoutConstraint *_nameLabelTopLayoutConstraint;
    CAAnimationlessLayer *_line;
    UIButton *_otherButton;
    UILabel *_operationLabel;
    UILabel *_timeLabel;
    KSBlackedUser *_user;
}

+ (double)cellHeightWithUser:(id)arg1;
@property(nonatomic) _Bool fullLineStyle; // @synthesize fullLineStyle=_fullLineStyle;
@property(nonatomic) _Bool isAddMode; // @synthesize isAddMode=_isAddMode;
@property(retain, nonatomic) KSBlackedUser *user; // @synthesize user=_user;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *operationLabel; // @synthesize operationLabel=_operationLabel;
@property(nonatomic) __weak UIButton *otherButton; // @synthesize otherButton=_otherButton;
@property(retain, nonatomic) CAAnimationlessLayer *line; // @synthesize line=_line;
@property(retain, nonatomic) NSLayoutConstraint *nameLabelTopLayoutConstraint; // @synthesize nameLabelTopLayoutConstraint=_nameLabelTopLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *nameLabelCenterYLayoutConstraint; // @synthesize nameLabelCenterYLayoutConstraint=_nameLabelCenterYLayoutConstraint;
@property(nonatomic) __weak UIButton *addOrDelButton; // @synthesize addOrDelButton=_addOrDelButton;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *vIcon; // @synthesize vIcon=_vIcon;
@property(nonatomic) __weak UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak id <KSBlackListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didTapAddOrDelButton:(id)arg1;
- (void)updateAddOrDelButton;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)userInfo;
- (void)drawWithUser:(id)arg1 fullLineStyle:(_Bool)arg2;
- (void)awakeFromNib;

@end

