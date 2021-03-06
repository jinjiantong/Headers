//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UILabel, UIView;

@interface MUKTitleSideNoteCell : UITableViewCell
{
    _Bool _lastCell;
    NSString *_noteStr;
    NSString *_titleStr;
    UILabel *_titleLabel;
    UILabel *_noteLabel;
    UIView *_separateLine;
    NSLayoutConstraint *_noteWidthConstrant;
}

+ (struct CGSize)sizeForNoteView:(id)arg1;
@property(retain, nonatomic) NSLayoutConstraint *noteWidthConstrant; // @synthesize noteWidthConstrant=_noteWidthConstrant;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UILabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(copy, nonatomic) NSString *noteStr; // @synthesize noteStr=_noteStr;
@property(nonatomic, getter=islastCell) _Bool lastCell; // @synthesize lastCell=_lastCell;
- (void).cxx_destruct;
- (void)relayoutNote;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)layoutSeparateLine;
- (void)layoutNote;
- (void)layoutTitle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

