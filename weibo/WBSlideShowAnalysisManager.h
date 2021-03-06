//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, WBSlideShowAnalysis;
@protocol OS_dispatch_queue;

@interface WBSlideShowAnalysisManager : NSObject
{
    NSMutableArray *_analysises;
    NSObject<OS_dispatch_queue> *_configuringQueue;
    _Bool _canWriting;
    WBSlideShowAnalysis *_configuringAnalysis;
}

@property(readonly, nonatomic) WBSlideShowAnalysis *configuringAnalysis; // @synthesize configuringAnalysis=_configuringAnalysis;
- (void).cxx_destruct;
- (void)analysises:(CDUnknownBlockType)arg1;
- (void)commit;
- (void)finishAnalysis;
- (void)unlock;
- (void)lock;
- (void)configuringAnalysis:(CDUnknownBlockType)arg1;
- (id)init;

@end

