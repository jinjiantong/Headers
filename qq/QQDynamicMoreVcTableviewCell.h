//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QQAsynUrlImageView, QQTableCellItem;
@protocol QQDynamicMoreVcTableviewCellDelegate;

@interface QQDynamicMoreVcTableviewCell : UITableViewCell
{
    QQTableCellItem *_cellItem;
    QQAsynUrlImageView *_iconPicImageView;
    id <QQDynamicMoreVcTableviewCellDelegate> _delegate;
    int _xo;
}

- (void)onPluginTurningOn:(id)arg1;
- (void)loadAsynUrlImageView:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)imageWithUIView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 withObj:(id)arg3;

// Remaining properties
@property(nonatomic) QQTableCellItem *cellItem; // @dynamic cellItem;
@property(nonatomic) id <QQDynamicMoreVcTableviewCellDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) QQAsynUrlImageView *iconPicImageView; // @dynamic iconPicImageView;

@end
