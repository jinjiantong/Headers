//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSString, UIColor;

@interface QZHollowLayer : CALayer
{
    NSString *_text;
    UIColor *_circleColor;
}

@property(retain, nonatomic) UIColor *circleColor; // @synthesize circleColor=_circleColor;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (double)optimumFontSizeForFont:(id)arg1 inRect:(struct CGRect)arg2 withText:(id)arg3;
- (void)drawSubtractedText:(id)arg1 inRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)dealloc;

@end
