//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UIWindow;

@interface MUKPopViewContainer : UIView
{
    UIView *_contentView;
    UIImageView *_stackImageView;
    UIImage *_stackImage;
    UIWindow *_popWindow;
    UIView *_maskLayer;
}

@property(retain, nonatomic) UIView *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIWindow *popWindow; // @synthesize popWindow=_popWindow;
@property(retain, nonatomic) UIImage *stackImage; // @synthesize stackImage=_stackImage;
@property(retain, nonatomic) UIImageView *stackImageView; // @synthesize stackImageView=_stackImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)closeExpandCompletion:(CDUnknownBlockType)arg1;
- (void)closeAsOriginalCompletion:(CDUnknownBlockType)arg1;
- (void)showWithStackView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
