//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;

@interface FLStyle : NSObject
{
    _Bool _hidden;
    _Bool _isEndOFLine;
    _Bool _isFirstOFLine;
    _Bool _isAutoHeight;
    _Bool _isAutoWidth;
    UIView *_view;
    long long _position;
    long long _display;
    double _width;
    double _height;
    double _maxWidth;
    double _maxHeight;
    double _top;
    double _bottom;
    double _left;
    double _right;
    double _x;
    double _y;
    double _centerX;
    double _centerY;
    double _marginTop;
    double _marginBottom;
    double _marginLeft;
    double _marginRight;
    double _paddingTop;
    double _paddingBottom;
    double _paddingLeft;
    double _paddingRight;
    long long _contentHorizontalAlign;
    struct CGSize _size;
    struct LTCorner _LTCorner;
    struct RTCorner _RTCorner;
    struct LBCorner _LBCorner;
    struct RBCorner _RBCorner;
    struct CGPoint _center;
    struct UIEdgeInsets _margin;
    struct UIEdgeInsets _padding;
}

@property(readonly, nonatomic) _Bool isAutoWidth; // @synthesize isAutoWidth=_isAutoWidth;
@property(readonly, nonatomic) _Bool isAutoHeight; // @synthesize isAutoHeight=_isAutoHeight;
@property(nonatomic) _Bool isFirstOFLine; // @synthesize isFirstOFLine=_isFirstOFLine;
@property(nonatomic) _Bool isEndOFLine; // @synthesize isEndOFLine=_isEndOFLine;
@property(nonatomic) long long contentHorizontalAlign; // @synthesize contentHorizontalAlign=_contentHorizontalAlign;
@property(nonatomic) double paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) double paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) double paddingTop; // @synthesize paddingTop=_paddingTop;
@property(nonatomic) double marginRight; // @synthesize marginRight=_marginRight;
@property(nonatomic) double marginLeft; // @synthesize marginLeft=_marginLeft;
@property(nonatomic) double marginBottom; // @synthesize marginBottom=_marginBottom;
@property(nonatomic) double marginTop; // @synthesize marginTop=_marginTop;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(readonly, nonatomic) double y; // @synthesize y=_y;
@property(readonly, nonatomic) double x; // @synthesize x=_x;
@property(nonatomic) double right; // @synthesize right=_right;
@property(nonatomic) double left; // @synthesize left=_left;
@property(nonatomic) double bottom; // @synthesize bottom=_bottom;
@property(nonatomic) double top; // @synthesize top=_top;
@property(nonatomic) struct RBCorner RBCorner; // @synthesize RBCorner=_RBCorner;
@property(nonatomic) struct LBCorner LBCorner; // @synthesize LBCorner=_LBCorner;
@property(nonatomic) struct RTCorner RTCorner; // @synthesize RTCorner=_RTCorner;
@property(nonatomic) struct LTCorner LTCorner; // @synthesize LTCorner=_LTCorner;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) long long display; // @synthesize display=_display;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (double)getBelongRowMaxWidth;
- (void)reflowSubviewOriginWhichISAbsolute;
- (_Bool)reflowHeightWhenAuto;
- (_Bool)reflowWidthWhenAuto;
- (struct FLSizeIsChange)reflowSizeWhenAuto;
- (void)reflowWhenHeightChange;
- (void)reflowWhenWidthChange;
- (void)reflowWhenMarginChange:(long long)arg1;
- (void)reflowWhenHiddenChange;
- (void)layoutWithSize:(struct CGSize)arg1;
- (void)layoutWithHeight:(double)arg1;
- (void)layoutWithWidth:(double)arg1;
- (void)layoutWithOrigin:(struct CGPoint)arg1;
- (void)layoutWithLeft:(double)arg1;
- (void)layoutWithTop:(double)arg1;
- (void)layoutSize;
- (void)layoutOriginWhenAbsolute;
- (double)reCountHeight;
- (double)reCountWidth;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
- (void)resetYOffsets;
- (void)resetXOffsets;
- (void)resetOffsets;
- (id)initWithView:(id)arg1;

@end

