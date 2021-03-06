//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDataDetector, NSParagraphStyle, NSString, STLinkObject, UIColor, UIFont;
@protocol STLinkLabelDelegate;

@interface STLinkLabel : UIView
{
    struct __CTFrame *_frame;
    _Bool _touchEffective;
    struct CGPoint _lineOrigins;
    struct CGRect _boundingBox;
    struct CGSize _suggestionSize;
    _Bool _completelyDisplay;
    _Bool _autoHyperlink;
    _Bool _continueTouchEvent;
    _Bool _highlighted;
    id <STLinkLabelDelegate> _delegate;
    NSString *_text;
    UIFont *_font;
    long long _textAlignment;
    long long _lineBreakMode;
    long long _numberOfLines;
    UIColor *_textColor;
    UIColor *_linkColor;
    UIColor *_linkBackgroundColor;
    UIColor *_highlightedTextColor;
    UIColor *_highlightedLinkColor;
    UIColor *_highlightedLinkBackgroundColor;
    long long _baselineAdjustment;
    unsigned long long _textCheckingTypes;
    double _verticalTouchAreaFactor;
    double _lineSpacing;
    NSParagraphStyle *_paragraphStyle;
    NSDataDetector *_dataDetector;
    NSArray *_linkObjects;
    STLinkObject *_selectedLinkObject;
    NSString *_displayText;
}

+ (struct CGSize)sizeWithText:(id)arg1 textCheckingTypes:(unsigned long long)arg2 font:(id)arg3 constrainedToSize:(struct CGSize)arg4 lineSpacing:(double)arg5 paragraphStyle:(id)arg6;
+ (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2 constrainedToSize:(struct CGSize)arg3 lineSpacing:(double)arg4 paragraphStyle:(id)arg5;
+ (id)displayTextWithTextCheckingType:(unsigned long long)arg1 text:(id)arg2;
+ (id)paragraphStyleWithFont:(id)arg1 lineSpacing:(double)arg2;
@property(retain, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(retain, nonatomic) STLinkObject *selectedLinkObject; // @synthesize selectedLinkObject=_selectedLinkObject;
@property(retain, nonatomic) NSArray *linkObjects; // @synthesize linkObjects=_linkObjects;
@property(retain, nonatomic) NSDataDetector *dataDetector; // @synthesize dataDetector=_dataDetector;
@property(retain, nonatomic) NSParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double verticalTouchAreaFactor; // @synthesize verticalTouchAreaFactor=_verticalTouchAreaFactor;
@property(nonatomic) unsigned long long textCheckingTypes; // @synthesize textCheckingTypes=_textCheckingTypes;
@property(nonatomic) long long baselineAdjustment; // @synthesize baselineAdjustment=_baselineAdjustment;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool continueTouchEvent; // @synthesize continueTouchEvent=_continueTouchEvent;
@property(retain, nonatomic) UIColor *highlightedLinkBackgroundColor; // @synthesize highlightedLinkBackgroundColor=_highlightedLinkBackgroundColor;
@property(retain, nonatomic) UIColor *highlightedLinkColor; // @synthesize highlightedLinkColor=_highlightedLinkColor;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *linkBackgroundColor; // @synthesize linkBackgroundColor=_linkBackgroundColor;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <STLinkLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool autoHyperlink; // @synthesize autoHyperlink=_autoHyperlink;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (_Bool)hasLinkObjectAtPoint:(struct CGPoint)arg1;
- (_Bool)pointInLineWithLocation:(struct CGPoint)arg1 lineOrigin:(struct CGPoint)arg2;
- (double)touchAreaOffset;
- (void)endTouches;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)enumerateRunsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateLinesUsingBlock:(CDUnknownBlockType)arg1;
- (void)drawBackgroundColor:(id)arg1 withLinkObject:(id)arg2 inContext:(struct CGContext *)arg3 path:(struct CGPath *)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (id)_linkObjectsInString:(id)arg1 subrange:(struct _NSRange)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

