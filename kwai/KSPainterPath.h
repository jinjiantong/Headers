//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSPainterBrush;

@interface KSPainterPath : NSObject
{
    struct CGPath *_path;
    KSPainterBrush *_brush;
}

+ (id)painterPathWithBrush:(id)arg1 path:(struct CGPath *)arg2;
@property(retain, nonatomic) KSPainterBrush *brush; // @synthesize brush=_brush;
@property(nonatomic) struct CGPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)dealloc;

@end

