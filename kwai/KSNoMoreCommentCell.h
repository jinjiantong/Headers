//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "KSFeedCommentComponentCell-Protocol.h"

@class NSString, UIImageView, UILabel, UIView;

@interface KSNoMoreCommentCell : UITableViewCell <KSFeedCommentComponentCell>
{
    _Bool _isSimpleStyle;
    UILabel *_messageLabel;
    UIImageView *_faceView;
    id _viewModel;
    UIView *_horizontalLine;
}

+ (double)heightWithViewModel:(id)arg1;
@property(nonatomic) _Bool isSimpleStyle; // @synthesize isSimpleStyle=_isSimpleStyle;
@property(readonly, nonatomic) UIView *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImageView *faceView; // @synthesize faceView=_faceView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
- (void)applyAttributeConfiguration:(id)arg1;
- (void)bindViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

