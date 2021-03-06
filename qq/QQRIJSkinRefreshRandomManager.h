//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQRIJSkinRefreshBaseManager.h>

@class UIActivityIndicatorView, UIImageView;

@interface QQRIJSkinRefreshRandomManager : QQRIJSkinRefreshBaseManager
{
    UIImageView *_imageView;
    UIActivityIndicatorView *_activity;
}

- (void)playSoundIfNeed:(double)arg1;
- (int)getRandomNumber:(int)arg1 to:(int)arg2;
- (id)getRandomImage;
- (void)refreshImageView;
- (void)onPullRefreshing:(int)arg1;
- (void)onPullRefreshComplete;
- (void)onPullRefreshIsLoading;
- (double)getPullRefreshAreaHeight;
- (void)dealloc;
- (id)init;

@end

