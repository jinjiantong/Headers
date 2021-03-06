//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILabel;

@interface TBDetailRoundButton : UIButton
{
    UILabel *_topTextLabel;
    UILabel *_bottomTextLabel;
    CDUnknownBlockType _pressHandler;
}

@property(copy, nonatomic) CDUnknownBlockType pressHandler; // @synthesize pressHandler=_pressHandler;
@property(retain, nonatomic) UILabel *bottomTextLabel; // @synthesize bottomTextLabel=_bottomTextLabel;
@property(retain, nonatomic) UILabel *topTextLabel; // @synthesize topTextLabel=_topTextLabel;
- (void).cxx_destruct;
- (void)buttonDidPress:(id)arg1;
- (void)layoutSubviews;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

