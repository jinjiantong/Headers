//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString;

@interface MunionP4P : NSObject
{
    NSOperationQueue *_queue;
    NSString *_aliTrackId;
    NSString *_local;
}

+ (void)setLocalInfo:(id)arg1;
+ (id)getAliTrackID;
+ (id)clickAndBlock:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)click:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (id)getLocalInfo;
- (void)setLocalInfo:(id)arg1;
- (id)getAliTrackID;
- (void)setAliTrackID:(id)arg1;
- (void)addToQueue:(id)arg1;
- (void)endUserTrackLogs:(id)arg1 redirecturl:(id)arg2;
- (void)beforeUserTrackLogs:(id)arg1;
- (id)initMuionP4P;

@end

