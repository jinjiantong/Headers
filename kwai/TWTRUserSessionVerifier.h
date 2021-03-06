//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol TWTRUserSessionVerifierDelegate;

@interface TWTRUserSessionVerifier : NSObject
{
    _Bool _alreadyStarted;
    id <TWTRUserSessionVerifierDelegate> _delegate;
    double _maxDesiredInterval;
    NSDate *_lastVerifiedTimestamp;
}

@property(nonatomic) _Bool alreadyStarted; // @synthesize alreadyStarted=_alreadyStarted;
@property(retain, nonatomic) NSDate *lastVerifiedTimestamp; // @synthesize lastVerifiedTimestamp=_lastVerifiedTimestamp;
@property(readonly, nonatomic) double maxDesiredInterval; // @synthesize maxDesiredInterval=_maxDesiredInterval;
@property(nonatomic) __weak id <TWTRUserSessionVerifierDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isPastMaxDesiredInterval;
- (void)verifyNowIfNecessary;
- (void)dealloc;
- (void)addHooksForFutureVerifications;
- (void)startVerification;
- (void)startVerificationAfterDelay:(double)arg1;
- (id)initWithDelegate:(id)arg1 maxDesiredInterval:(double)arg2;

@end

