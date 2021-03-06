//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GtGbdBaseTask.h"

#import "GtGbdLbsClientDelegate-Protocol.h"

@class CLLocation, GtGbdLbsClient, NSString;

@interface GtGbdT11Task : GtGbdBaseTask <GtGbdLbsClientDelegate>
{
    CLLocation *_location;
    GtGbdLbsClient *_lbsClient;
}

@property(retain, nonatomic) GtGbdLbsClient *lbsClient; // @synthesize lbsClient=_lbsClient;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)taskFinishWithResult:(id)arg1;
- (id)buildPostBodyData;
- (void)reportNewLocation:(id)arg1 withError:(id)arg2;
- (void)runTaskInTimer;
- (void)fetchGPSLocation;
- (_Bool)isReportEnable;
- (_Bool)preStartTask;
- (void)destory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

