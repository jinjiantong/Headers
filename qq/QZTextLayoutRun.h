//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, QZTextAttachment, QZTextLayoutLine;

@interface QZTextLayoutRun : NSObject
{
    QZTextLayoutLine *_layoutLine;
    NSDictionary *_attributes;
    QZTextAttachment *_attachment;
    struct _NSRange _runRange;
    struct QZTextRect _textRect;
}

@property(nonatomic) __weak QZTextAttachment *attachment; // @synthesize attachment=_attachment;
@property(nonatomic) __weak NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) struct _NSRange runRange; // @synthesize runRange=_runRange;
@property(nonatomic) struct QZTextRect textRect; // @synthesize textRect=_textRect;
@property(nonatomic) __weak QZTextLayoutLine *layoutLine; // @synthesize layoutLine=_layoutLine;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2 style:(id)arg3;
- (void)drawInContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;

@end

