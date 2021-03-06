//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "EWFilterViewProtocol-Protocol.h"

@class EWMenuItemViewModel, NSString, UIImageView, UILabel;
@protocol EWBaseHeaderViewProtocol, EWFilterViewProtocol;

@interface EWBaseHeaderView : UIView <EWFilterViewProtocol>
{
    id <EWBaseHeaderViewProtocol> _delegate;
    UILabel *_textLabel;
    UIImageView *_foldArrow;
    UIView<EWFilterViewProtocol> *_contentView;
    UIView *_foldArrowView;
    EWMenuItemViewModel *_data;
}

@property(retain, nonatomic) EWMenuItemViewModel *data; // @synthesize data=_data;
@property(retain, nonatomic) UIView *foldArrowView; // @synthesize foldArrowView=_foldArrowView;
@property(retain, nonatomic) UIView<EWFilterViewProtocol> *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *foldArrow; // @synthesize foldArrow=_foldArrow;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak id <EWBaseHeaderViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getData;
- (void)resetStatus;
- (void)resetLabelFrame;
- (void)resetArrowImage;
- (void)reloadData:(id)arg1;
- (void)foldArrowClick;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

