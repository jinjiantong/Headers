//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LVClassProtocal-Protocol.h"
#import "LVProtocal-Protocol.h"

@class LuaViewCore, NSString, UIColor, UIFont;

@interface LVCanvas : NSObject <LVProtocal, LVClassProtocal>
{
    int _drawingMode;
    LuaViewCore *_lv_luaviewCore;
    struct _LVUserDataInfo *_lv_userData;
    struct CGContext *_contentRef;
    UIColor *_color;
    double _strokeWidth;
    double _alpha;
    UIFont *_font;
    double _scaleX;
    double _scaleY;
    double _skewX;
    double _skewY;
    struct CGPoint _translate;
}

+ (int)lvClassDefine:(struct lua_State *)arg1 globalName:(id)arg2;
+ (id)createLuaCanvas:(struct lua_State *)arg1 contentRef:(struct CGContext *)arg2;
@property(nonatomic) struct CGPoint translate; // @synthesize translate=_translate;
@property(nonatomic) double skewY; // @synthesize skewY=_skewY;
@property(nonatomic) double skewX; // @synthesize skewX=_skewX;
@property(nonatomic) double scaleY; // @synthesize scaleY=_scaleY;
@property(nonatomic) double scaleX; // @synthesize scaleX=_scaleX;
@property(nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) int drawingMode; // @synthesize drawingMode=_drawingMode;
@property(nonatomic) struct CGContext *contentRef; // @synthesize contentRef=_contentRef;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LuaViewCore *lv_luaviewCore; // @synthesize lv_luaviewCore=_lv_luaviewCore;
- (void).cxx_destruct;
- (void)translate:(double)arg1:(double)arg2;
- (void)scale:(double)arg1:(double)arg2;
@property(nonatomic) struct CGAffineTransform concatCTM;
- (void)skew:(double)arg1:(double)arg2;
- (void)rotate:(double)arg1:(double)arg2:(double)arg3;
- (void)restoreGState;
- (void)saveGState;
- (void)drawImage:(id)arg1:(double)arg2:(double)arg3:(double)arg4:(double)arg5;
- (void)drawArc:(double)arg1:(double)arg2:(double)arg3:(double)arg4:(double)arg5:(double)arg6:(_Bool)arg7;
- (void)clipRect:(double)arg1:(double)arg2:(double)arg3:(double)arg4;
- (void)resetPaint;
- (void)drawText:(id)arg1:(id)arg2:(double)arg3:(double)arg4;
- (void)drawText:(id)arg1:(id)arg2:(struct CGRect)arg3;
- (void)drawEllipse:(double)arg1:(double)arg2:(double)arg3:(double)arg4;
- (void)drawRoundRect:(double)arg1:(double)arg2:(double)arg3:(double)arg4:(double)arg5:(double)arg6;
- (void)drawRect:(double)arg1:(double)arg2:(double)arg3:(double)arg4;
- (void)drawLine:(double)arg1:(double)arg2:(double)arg3:(double)arg4;
- (id)lv_nativeObject;
- (id)init:(struct lua_State *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

