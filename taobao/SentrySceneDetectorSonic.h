//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SentrySceneDetectorBase.h"

#import "TMSonicSDKDelegate-Protocol.h"

@class NSString, TMSonicSDK;

@interface SentrySceneDetectorSonic : SentrySceneDetectorBase <TMSonicSDKDelegate>
{
    TMSonicSDK *_sonicInstance;
}

+ (long long)authStatus;
+ (void)initialize;
@property(nonatomic) TMSonicSDK *sonicInstance; // @synthesize sonicInstance=_sonicInstance;
- (void)didTMSonicSDKReceivePayload:(id)arg1 payload:(id)arg2 error:(id)arg3;
- (void)didTMSonicSDKStopListening:(id)arg1 error:(id)arg2;
- (void)didTMSonicSDKStartListening:(id)arg1 error:(id)arg2;
- (void)didTMSonicSDKStopPlaying:(id)arg1 error:(id)arg2;
- (void)didTMSonicSDKStartPlaying:(id)arg1 error:(id)arg2;
- (void)didTMSonicSDKInitilize:(id)arg1 error:(id)arg2;
- (void)startListening;
- (void)pause;
- (void)resume;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

