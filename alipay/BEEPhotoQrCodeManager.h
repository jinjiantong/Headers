//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@interface BEEPhotoQrCodeManager : NSObject
{
    NSOperationQueue *_scanQrImageQueqe;
    NSMutableDictionary *_qrImageCache;
}

@property(retain, nonatomic) NSMutableDictionary *qrImageCache; // @synthesize qrImageCache=_qrImageCache;
@property(retain, nonatomic) NSOperationQueue *scanQrImageQueqe; // @synthesize scanQrImageQueqe=_scanQrImageQueqe;
- (void).cxx_destruct;
- (id)getQrResultWithKey:(id)arg1;
- (void)setQrResult:(id)arg1 withKey:(id)arg2;
- (void)scanQrImage:(id)arg1 withKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

