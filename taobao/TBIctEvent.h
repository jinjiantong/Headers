//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBIctEventProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface TBIctEvent : NSObject <TBIctEventProtocol>
{
    unsigned long long _eventId;
    NSDictionary *_params;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) unsigned long long eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (id)initEventWithEventId:(unsigned long long)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
