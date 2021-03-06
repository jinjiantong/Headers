//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface LPEventCenter : NSObject
{
    struct _opaque_pthread_mutex_t pLock;
    _Bool _isDeleted;
    NSMutableDictionary *_registerEventIDs;
}

@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(retain, nonatomic) NSMutableDictionary *registerEventIDs; // @synthesize registerEventIDs=_registerEventIDs;
- (void).cxx_destruct;
- (void)unregisterSubscriber:(id)arg1 eventID:(long long)arg2;
- (void)unregisterSubscriber:(id)arg1 eventRange:(struct _NSRange)arg2;
- (void)registerSubscriber:(id)arg1 eventID:(long long)arg2;
- (void)registerSubscriber:(id)arg1 eventRange:(struct _NSRange)arg2;
- (void)executeEvent:(id)arg1 subscriber:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)receiveEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

