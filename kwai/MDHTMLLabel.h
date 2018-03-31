//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSAttributedString, NSDataDetector, NSDictionary, NSMutableArray, NSObject, NSString, NSTextCheckingResult, NSTimer, UIColor;
@protocol MDHTMLLabelDelegate;

@interface MDHTMLLabel : UILabel
{
    NSAttributedString *_htmlAttributedText;
    _Bool _needsFramesetter;
    struct __CTFramesetter *_framesetter;
    struct __CTFramesetter *_highlightFramesetter;
    _Bool _autoDetectUrls;
    NSObject<MDHTMLLabelDelegate> *_delegate;
    NSString *_htmlText;
    NSDictionary *_linkAttributes;
    NSDictionary *_activeLinkAttributes;
    NSDictionary *_inactiveLinkAttributes;
    double _minimumPressDuration;
    double _shadowRadius;
    double _highlightedShadowRadius;
    UIColor *_highlightedShadowColor;
    NSString *_customBoldFontName;
    NSString *_customItalicFontName;
    NSString *_customBoldItalicFontName;
    double _firstLineIndent;
    double _leading;
    double _lineHeightMultiple;
    unsigned long long _verticalAlignment;
    NSString *_truncationTokenString;
    NSDictionary *_truncationTokenStringAttributes;
    NSString *_plainText;
    NSAttributedString *_inactiveAttributedText;
    NSDataDetector *_dataDetector;
    NSMutableArray *_links;
    NSTextCheckingResult *_activeLink;
    NSTimer *_holdGestureTimer;
    NSMutableArray *_styleComponents;
    NSMutableArray *_highlightedStyleComponents;
    struct CGSize _highlightedShadowOffset;
    struct UIEdgeInsets _textInsets;
}

+ (struct CGSize)sizeThatFitsHTMLString:(id)arg1 withFont:(id)arg2 constraints:(struct CGSize)arg3 limitedToNumberOfLines:(unsigned long long)arg4 autoDetectUrls:(_Bool)arg5;
@property(retain, nonatomic) NSMutableArray *highlightedStyleComponents; // @synthesize highlightedStyleComponents=_highlightedStyleComponents;
@property(retain, nonatomic) NSMutableArray *styleComponents; // @synthesize styleComponents=_styleComponents;
@property(retain, nonatomic) NSTimer *holdGestureTimer; // @synthesize holdGestureTimer=_holdGestureTimer;
@property(retain, nonatomic) NSTextCheckingResult *activeLink; // @synthesize activeLink=_activeLink;
@property(retain, nonatomic) NSMutableArray *links; // @synthesize links=_links;
@property(retain, nonatomic) NSDataDetector *dataDetector; // @synthesize dataDetector=_dataDetector;
@property(nonatomic) _Bool needsFramesetter; // @synthesize needsFramesetter=_needsFramesetter;
@property(copy, nonatomic) NSAttributedString *inactiveAttributedText; // @synthesize inactiveAttributedText=_inactiveAttributedText;
@property(copy, nonatomic) NSString *plainText; // @synthesize plainText=_plainText;
@property(nonatomic) _Bool autoDetectUrls; // @synthesize autoDetectUrls=_autoDetectUrls;
@property(retain, nonatomic) NSDictionary *truncationTokenStringAttributes; // @synthesize truncationTokenStringAttributes=_truncationTokenStringAttributes;
@property(retain, nonatomic) NSString *truncationTokenString; // @synthesize truncationTokenString=_truncationTokenString;
@property(nonatomic) unsigned long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(nonatomic) double lineHeightMultiple; // @synthesize lineHeightMultiple=_lineHeightMultiple;
@property(nonatomic) double leading; // @synthesize leading=_leading;
@property(nonatomic) double firstLineIndent; // @synthesize firstLineIndent=_firstLineIndent;
@property(copy, nonatomic) NSString *customBoldItalicFontName; // @synthesize customBoldItalicFontName=_customBoldItalicFontName;
@property(copy, nonatomic) NSString *customItalicFontName; // @synthesize customItalicFontName=_customItalicFontName;
@property(copy, nonatomic) NSString *customBoldFontName; // @synthesize customBoldFontName=_customBoldFontName;
@property(retain, nonatomic) UIColor *highlightedShadowColor; // @synthesize highlightedShadowColor=_highlightedShadowColor;
@property(nonatomic) struct CGSize highlightedShadowOffset; // @synthesize highlightedShadowOffset=_highlightedShadowOffset;
@property(nonatomic) double highlightedShadowRadius; // @synthesize highlightedShadowRadius=_highlightedShadowRadius;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
@property(retain, nonatomic) NSDictionary *inactiveLinkAttributes; // @synthesize inactiveLinkAttributes=_inactiveLinkAttributes;
@property(retain, nonatomic) NSDictionary *activeLinkAttributes; // @synthesize activeLinkAttributes=_activeLinkAttributes;
@property(retain, nonatomic) NSDictionary *linkAttributes; // @synthesize linkAttributes=_linkAttributes;
@property(copy, nonatomic) NSString *htmlText; // @synthesize htmlText=_htmlText;
@property(nonatomic) __weak NSObject<MDHTMLLabelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)boldItalicFontOfSize:(double)arg1;
- (id)italicFontOfSize:(double)arg1;
- (id)boldFontOfSize:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)copy:(id)arg1;
- (void)handleDidHoldTouch:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (id)linkAtCharacterIndex:(long long)arg1;
- (id)detectURLsInText:(id)arg1;
- (void)tintColorDidChange;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (id)textColor;
- (void)setHighlighted:(_Bool)arg1;
- (void)extractStyleFromText:(id)arg1;
- (void)applyUnderlineColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 range:(struct _NSRange)arg3;
- (void)applyStrokeColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 range:(struct _NSRange)arg3;
- (void)applyColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 range:(struct _NSRange)arg3;
- (void)applyBoldItalicStyleToText:(struct __CFAttributedString *)arg1 range:(struct _NSRange)arg2;
- (void)applyBoldStyleToText:(struct __CFAttributedString *)arg1 range:(struct _NSRange)arg2;
- (void)applyFontAttributes:(id)arg1 toText:(struct __CFAttributedString *)arg2 range:(struct _NSRange)arg3;
- (void)applyItalicStyleToText:(struct __CFAttributedString *)arg1 range:(struct _NSRange)arg2;
- (void)applyCenterStyleToText:(struct __CFAttributedString *)arg1 attributes:(id)arg2 range:(struct _NSRange)arg3;
- (void)applyParagraphStyleToText:(struct __CFAttributedString *)arg1 attributes:(id)arg2 range:(struct _NSRange)arg3;
- (id)applyStylesToString:(id)arg1;
- (void)drawFramesetter:(struct __CTFramesetter *)arg1 attributedString:(id)arg2 textRange:(CDStruct_912cb5d2)arg3 inRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)setFramesetter:(struct __CTFramesetter *)arg1;
- (void)setHighlightFramesetter:(struct __CTFramesetter *)arg1;
- (struct __CTFramesetter *)highlightFramesetter;
- (struct __CTFramesetter *)framesetter;
- (void)setNeedsFramesetter;
- (void)setHtmlAttributedText:(id)arg1;
- (id)htmlAttributedText;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

