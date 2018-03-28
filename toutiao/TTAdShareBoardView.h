//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, SSThemedImageView, SSThemedLabel, TTAdShareBoardDataModel, TTImageView;

@interface TTAdShareBoardView : SSThemedView
{
    TTAdShareBoardDataModel *_model;
    TTImageView *_logoView;
    SSThemedLabel *_adLabel;
    SSThemedButton *_deleteButton;
    SSThemedImageView *_deleteImage;
    SSThemedLabel *_bottomLine;
}

@property(retain, nonatomic) SSThemedLabel *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedImageView *deleteImage; // @synthesize deleteImage=_deleteImage;
@property(retain, nonatomic) SSThemedButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) SSThemedLabel *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) TTImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) TTAdShareBoardDataModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)deleteButton:(id)arg1;
- (void)layoutSubviews;
- (void)refreshData;
- (void)setSubViews;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
