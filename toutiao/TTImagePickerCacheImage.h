//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString, UIImage;

@interface TTImagePickerCacheImage : NSObject
{
    UIImage *_image;
    NSString *_assetID;
    unsigned long long _totalBytes;
    NSDate *_lastCacheDate;
}

@property(readonly, nonatomic) NSDate *lastCacheDate; // @synthesize lastCacheDate=_lastCacheDate;
@property(readonly, nonatomic) unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(readonly, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)refreshCacheAndGetImage;
- (id)initWithImage:(id)arg1 assetID:(id)arg2;

@end

