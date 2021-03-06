//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, UIImageView, UILabel, WGMessageFrame;
@protocol WGSessionFixedMessageCellDelegate;

@interface WGSessionFixedMessageCell : UITableViewCell
{
    UIImageView *contentImageBackView;
    UILabel *_labelTime;
    UILabel *_labelNum;
    UIButton *_btnHeadImage;
    NSString *_user_avatar_large;
    WGMessageFrame *_messageFrame;
    id <WGSessionFixedMessageCellDelegate> _delegate;
}

@property(nonatomic) id <WGSessionFixedMessageCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WGMessageFrame *messageFrame; // @synthesize messageFrame=_messageFrame;
@property(copy, nonatomic) NSString *user_avatar_large; // @synthesize user_avatar_large=_user_avatar_large;
@property(retain, nonatomic) UIButton *btnHeadImage; // @synthesize btnHeadImage=_btnHeadImage;
@property(retain, nonatomic) UILabel *labelNum; // @synthesize labelNum=_labelNum;
@property(retain, nonatomic) UILabel *labelTime; // @synthesize labelTime=_labelTime;
- (void).cxx_destruct;
- (void)onButtonTapped:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

