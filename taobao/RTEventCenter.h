//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, RTREventTracker;

@interface RTEventCenter : NSObject
{
    NSMutableDictionary *_eventsMap;
    RTREventTracker *_eventTraker;
}

+ (id)defaultCenter;
@property(retain, nonatomic) RTREventTracker *eventTraker; // @synthesize eventTraker=_eventTraker;
@property(retain, nonatomic) NSMutableDictionary *eventsMap; // @synthesize eventsMap=_eventsMap;
- (void).cxx_destruct;
- (id)description;
- (void)event:(id)arg1 happenedForUpdateGroup:(id)arg2;
- (void)reset;
- (void)removeEventsForUpdateGroup:(id)arg1;
- (id)eventsForUpdateGroup:(id)arg1;

@end

