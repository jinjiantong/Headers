//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSPainterView, NSArray, NSMutableArray, UIImage, UIImageView;
@protocol KSOperationImageViewDelegate;

@interface KSOperationImageView : UIView
{
    NSMutableArray *_chartletViews;
    id <KSOperationImageViewDelegate> _delegate;
    UIView *_contentView;
    KSPainterView *_painterView;
    UIImageView *_imageView;
    double _imageScale;
    struct CGSize _imageSize;
}

@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) KSPainterView *painterView; // @synthesize painterView=_painterView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <KSOperationImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapOperationViewAtPoint:(struct CGPoint)arg1;
- (void)endEditChartletViews;
- (void)resetWithImage:(id)arg1 chartlets:(id)arg2 chartletViewDelegate:(id)arg3;
- (void)selectChartletView:(id)arg1;
- (void)removeChartletView:(id)arg1;
- (void)addChartletView:(id)arg1;
@property(readonly, nonatomic) NSArray *chartletViews; // @dynamic chartletViews;
@property(nonatomic) _Bool painterViewEnabled; // @dynamic painterViewEnabled;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
