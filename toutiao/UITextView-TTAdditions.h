//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor, UIFont;

@interface UITextView (TTAdditions)
- (void)syncTextAlignmentWithPlaceHoler;
- (void)syncFontWithPlaceHolderFont;
- (void)showOrHidePlaceHolderTextView;
- (void)setIsCustomPlaceHolderFont:(_Bool)arg1;
- (void)setPlaceHolderTextView:(id)arg1;
@property(nonatomic) struct UIEdgeInsets placeHolderEdgeInsets;
@property(retain, nonatomic) UIFont *placeHolderFont;
@property(retain, nonatomic) UIColor *placeHolderColor;
@property(retain, nonatomic) NSString *placeHolder;
- (_Bool)isCustomPlaceHolderFont;
- (id)placeHolderTextView;
@end

