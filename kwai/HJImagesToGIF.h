//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface HJImagesToGIF : NSObject
{
    NSOperationQueue *_makeGifQueue;
}

+ (id)sharedHJImagesToGIF;
@property(retain, nonatomic) NSOperationQueue *makeGifQueue; // @synthesize makeGifQueue=_makeGifQueue;
- (void).cxx_destruct;
- (void)saveGIFToPhotoAlbumFromImages:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)saveGIFFromImages:(id)arg1 toPath:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end
