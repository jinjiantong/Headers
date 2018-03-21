//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FABCertificatePinner, NSMutableDictionary;

@interface ANSNetworkRetryHandler : NSObject
{
    FABCertificatePinner *_certPinner;
    NSMutableDictionary *_retryTimerMap;
}

@property(readonly, nonatomic) NSMutableDictionary *retryTimerMap; // @synthesize retryTimerMap=_retryTimerMap;
@property(readonly, nonatomic) FABCertificatePinner *certPinner; // @synthesize certPinner=_certPinner;
- (void).cxx_destruct;
- (id)timerForIdentifier:(id)arg1 initialRetryValue:(double)arg2;
- (void)handleCompletedRequest:(id)arg1 withResponse:(id)arg2 forIdentifier:(id)arg3 maxRetries:(unsigned long long)arg4 error:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)handleCompletedRequest:(id)arg1 withResponse:(id)arg2 forIdentifier:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)errorWithCode:(long long)arg1 forIdentifier:(id)arg2 request:(id)arg3 handlerError:(id)arg4;
- (double)retryValueForResponse:(id)arg1;
- (void)handleChallenge:(id)arg1 fromURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)sharedFabricSDK;
- (id)init;

@end
