//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBCUIUtility : NSObject
{
}

+ (id)screenshotsOfView:(id)arg1;
+ (id)gradientColorFromColor:(id)arg1 toColor:(id)arg2 size:(struct CGSize)arg3;
+ (id)gradientLayerFromColor:(id)arg1 toColor:(id)arg2 size:(struct CGSize)arg3 direction:(long long)arg4;
+ (id)gradientLayerFromColor:(id)arg1 toColor:(id)arg2 size:(struct CGSize)arg3;
+ (id)gradientImageFromColor:(id)arg1 toColor:(id)arg2 size:(struct CGSize)arg3;
+ (void)removeMaskViewFroView:(id)arg1;
+ (id)addMaskViewForView:(id)arg1;
+ (void)hiddenProgessHUBInView:(id)arg1;
+ (void)showProgressHUDInView:(id)arg1 text:(id)arg2 autoHideAfter:(float)arg3;
+ (id)imageWithIconfontName:(id)arg1 font:(double)arg2 color:(id)arg3;
+ (id)drawImageFromView:(id)arg1;
+ (id)drawPureColorImage:(id)arg1;
+ (id)defaultPlaceholderImage;
+ (id)drawShadowLineWithFrame:(struct CGRect)arg1 colorOne:(id)arg2 colorTwo:(id)arg3;
+ (id)drawShadowLineWithFrame:(struct CGRect)arg1;
+ (id)drawLineWithFrame:(struct CGRect)arg1 color:(id)arg2;
+ (id)drawLineWithFrame:(struct CGRect)arg1;
+ (id)drawLineWithSize:(struct CGSize)arg1 color:(id)arg2;
+ (id)drawLineWithSize:(struct CGSize)arg1;

@end

