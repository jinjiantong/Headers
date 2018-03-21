//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWELivePressureCreatorApiProtocol-Protocol.h"

@class NSArray, NSNumber, NSString;
@protocol AWELivePressureCreatorCallbackProtocol, OS_dispatch_queue, OS_dispatch_source;

@interface AWELivePressureMessageCreator : NSObject <AWELivePressureCreatorApiProtocol>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSObject<OS_dispatch_source> *_timer;
    id <AWELivePressureCreatorCallbackProtocol> _delegate;
    NSNumber *_roomID;
    NSArray *_contentArray;
}

@property(retain, nonatomic) NSArray *contentArray; // @synthesize contentArray=_contentArray;
@property(retain, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
@property(nonatomic) __weak id <AWELivePressureCreatorCallbackProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)mockMessageDict;
- (void)_processCreating;
- (void)stopCreator;
- (void)startCreator;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 roomID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
