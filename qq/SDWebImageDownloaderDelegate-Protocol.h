//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSError, SDWebImageDownloader, UIImage;

@protocol SDWebImageDownloaderDelegate <NSObject>

@optional
- (void)imageDownloader:(SDWebImageDownloader *)arg1 didFailWithError:(NSError *)arg2;
- (void)imageDownloader:(SDWebImageDownloader *)arg1 didFinishWithImage:(UIImage *)arg2;
- (void)imageDownloader:(SDWebImageDownloader *)arg1 didUpdatePartialImage:(UIImage *)arg2;
- (void)imageDownloaderDidFinish:(SDWebImageDownloader *)arg1;
@end

