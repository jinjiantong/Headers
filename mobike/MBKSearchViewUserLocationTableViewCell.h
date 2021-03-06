//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor, UIImageView, UILabel;

@interface MBKSearchViewUserLocationTableViewCell : UITableViewCell
{
    UIColor *_normarlColor;
    UIColor *_highlightedColor;
    UILabel *_titleLabel;
    UIImageView *_headImage;
    UILabel *_addreddLabel;
}

@property(retain, nonatomic) UILabel *addreddLabel; // @synthesize addreddLabel=_addreddLabel;
@property(retain, nonatomic) UIImageView *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(retain, nonatomic) UIColor *normarlColor; // @synthesize normarlColor=_normarlColor;
- (void).cxx_destruct;
- (void)buildUI;
- (id)init;

@end

