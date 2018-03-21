//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AMPProgressButton, UIImageView, UILabel;
@protocol TBIMEmoticonPackAdapter, TBIMEmoticonPackCellDelegate;

@interface TBIMEmoticonPackCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    AMPProgressButton *_statusButton;
    UIImageView *_headImageView;
    UIImageView *_newImageView;
    id <TBIMEmoticonPackAdapter> _packData;
    unsigned long long _status;
    id <TBIMEmoticonPackCellDelegate> _delegate;
}

+ (double)heightForCell;
@property(nonatomic) __weak id <TBIMEmoticonPackCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)statusClick:(id)arg1;
- (void)SetEmoticonPackStatus:(unsigned long long)arg1 progress:(unsigned long long)arg2;
- (void)setEmoticonPackData:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
