//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQView.h>

@class SpriteMultiImageView, UIButton, UIImageView;
@protocol SpritePreviewCloseDelegate;

@interface SpritePreviewView : QQView
{
    SpriteMultiImageView *_spriteMultiView;
    UIImageView *_contentView;
    UIButton *_closeBtn;
    id <SpritePreviewCloseDelegate> _spriteCloseDelegate;
}

+ (id)customLineWithWidth:(double)arg1;
@property(nonatomic) id <SpritePreviewCloseDelegate> spriteCloseDelegate; // @synthesize spriteCloseDelegate=_spriteCloseDelegate;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SpriteMultiImageView *spriteMultiView; // @synthesize spriteMultiView=_spriteMultiView;
- (void)onCloseClick:(id)arg1;
- (void)animationDidLoad;
- (void)initAvatarViewWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (_Bool)needCloseButton;
- (void)baseUIInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

