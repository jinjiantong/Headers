//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface QLineView : UIView
{
    UIColor *_lineColor;
    unsigned long long _drawMode;
}

@property(nonatomic) unsigned long long drawMode; // @synthesize drawMode=_drawMode;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
