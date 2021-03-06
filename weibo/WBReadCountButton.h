//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBButton.h"

@class UIImageView, UILabel;

@interface WBReadCountButton : WBButton
{
    UILabel *countLabel;
    UILabel *promptLabel;
    UIImageView *tagImageView;
    double _borderWidth;
    double _borderCorner;
}

@property(nonatomic) double borderCorner; // @synthesize borderCorner=_borderCorner;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel;
- (void).cxx_destruct;
- (_Bool)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 asynchronously:(_Bool)arg3 userInfo:(id)arg4;
- (id)currentDrawingUserInfo;
- (void)setEnabled:(_Bool)arg1;
- (void)showEnterpriseVipUI:(_Bool)arg1;
- (void)resetLabelFrame;
- (void)reloadUIElements;
- (void)showSpreadTag:(_Bool)arg1;
- (void)refreshWithCount:(long long)arg1 touchEnabled:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

