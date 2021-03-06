//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;
@protocol QQAVFaceGameLookerResultViewDelegate;

@interface QQAVFaceGameLookerResultView : UIView
{
    UIView *_maskView;
    UIImageView *_bgView;
    UIView *_moneyView;
    UIImageView *_num1View;
    UIImageView *_num2View;
    UIImageView *_pointView;
    UIImageView *_num3View;
    UIImageView *_num4View;
    UIImageView *_yuanView;
    UIButton *_closeBtn;
    id <QQAVFaceGameLookerResultViewDelegate> _delegate;
}

@property(nonatomic) id <QQAVFaceGameLookerResultViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onClose;
- (void)setMoney:(id)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1 money:(id)arg2;

@end

