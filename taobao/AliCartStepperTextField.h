//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class CAShapeLayer, UIColor;

@interface AliCartStepperTextField : UITextField
{
    UIColor *_customBorderColor;
    CAShapeLayer *_upLayer;
    CAShapeLayer *_dwonLayer;
}

@property(retain, nonatomic) CAShapeLayer *dwonLayer; // @synthesize dwonLayer=_dwonLayer;
@property(retain, nonatomic) CAShapeLayer *upLayer; // @synthesize upLayer=_upLayer;
@property(retain, nonatomic) UIColor *customBorderColor; // @synthesize customBorderColor=_customBorderColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

