//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface SSAttributeLabelModel : NSObject
{
    int _textUnderLineStyle;
    UIColor *_textColor;
    NSString *_linkURLString;
    struct _NSRange _attributeRange;
}

@property(nonatomic) struct _NSRange attributeRange; // @synthesize attributeRange=_attributeRange;
@property(retain, nonatomic) NSString *linkURLString; // @synthesize linkURLString=_linkURLString;
@property(nonatomic) int textUnderLineStyle; // @synthesize textUnderLineStyle=_textUnderLineStyle;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

