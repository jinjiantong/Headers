//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, PLMediaImageInfo, QZCImageView;

@interface PLSVImagePlayerView : UIView
{
    _Bool _isSmallHeight;
    PLMediaImageInfo *_imageInfo;
    NSString *_coverURL;
    QZCImageView *_imageView;
}

@property(retain, nonatomic) QZCImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSString *coverURL; // @synthesize coverURL=_coverURL;
@property(nonatomic) _Bool isSmallHeight; // @synthesize isSmallHeight=_isSmallHeight;
@property(retain, nonatomic) PLMediaImageInfo *imageInfo; // @synthesize imageInfo=_imageInfo;
- (struct CGSize)adjustPlayerSize:(struct CGSize)arg1 isFullScreen:(_Bool)arg2;
- (void)updateImageView:(id)arg1;

@end

