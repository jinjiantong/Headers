//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface DIVADisplayPicOperationManager : NSObject
{
    NSOperationQueue *_operationQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (id)downloadWithUrl:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)downloadWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

