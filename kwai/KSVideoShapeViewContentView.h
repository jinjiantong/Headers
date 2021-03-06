//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSVideoShapeInstance, NSString, UIImageView, UITextView;

@interface KSVideoShapeViewContentView : UIView
{
    _Bool _needsLayoutContent;
    KSVideoShapeInstance *_shapeStorage;
    UITextView *_textView;
    UIImageView *_imageView;
    struct CGRect _contentBounds;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
@property(retain, nonatomic) KSVideoShapeInstance *shapeStorage; // @synthesize shapeStorage=_shapeStorage;
- (void).cxx_destruct;
- (void)layoutContentIfNeeded;
- (void)setNeedsLayoutContent;
- (id)font;
- (void)setFont:(id)arg1;
- (void)setScale:(double)arg1;
@property(retain, nonatomic) NSString *text; // @dynamic text;
- (void)layoutSubviews;
- (id)initWithShapeInstance:(id)arg1;
- (void)dealloc;

@end

