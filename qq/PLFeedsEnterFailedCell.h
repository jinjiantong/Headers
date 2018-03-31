//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;
@protocol PLFeedsEnterFailedCellDelegate;

@interface PLFeedsEnterFailedCell : UITableViewCell
{
    UIView *_failedView;
    UIImageView *_failedIcon;
    UILabel *_failedLabel;
    UIImageView *_detailIcon;
    id <PLFeedsEnterFailedCellDelegate> _delegate;
    unsigned long long _failedNumber;
}

@property(nonatomic) unsigned long long failedNumber; // @synthesize failedNumber=_failedNumber;
@property(nonatomic) __weak id <PLFeedsEnterFailedCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *detailIcon; // @synthesize detailIcon=_detailIcon;
@property(retain, nonatomic) UILabel *failedLabel; // @synthesize failedLabel=_failedLabel;
@property(retain, nonatomic) UIImageView *failedIcon; // @synthesize failedIcon=_failedIcon;
@property(retain, nonatomic) UIView *failedView; // @synthesize failedView=_failedView;
- (void).cxx_destruct;
- (void)reportRetransmissionModule:(id)arg1;
- (void)enterFailedPage;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

