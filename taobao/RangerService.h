//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RangerServiceProtocol-Protocol.h"

@class NSString;

@interface RangerService : NSObject <RangerServiceProtocol>
{
}

+ (id)intercepterUrlStringByRewriteFromURL:(id)arg1;
- (void)rangerServiceDownloadContentForWeexUrl:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)sendSynchronousRequest:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)rangerServiceRedirectForWindvaneUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

