//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXLogProtocol-Protocol.h"

@class NSString, TLogBiz;

@interface WXLogHandler : NSObject <WXLogProtocol>
{
    TLogBiz *_tlog;
}

- (void).cxx_destruct;
- (_Bool)isDebugMode;
- (void)log:(long long)arg1 message:(id)arg2;
- (unsigned long long)logLevel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

