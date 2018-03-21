//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AMPBodyObject-Protocol.h"

@class AMPMessageContext, NSString;

@interface AMPBodyNotifySync : NSObject <AMPBodyObject>
{
    long long _bizId;
    long long _userId;
    long long _syncId;
    long long _time;
    long long _packTargetId;
    AMPMessageContext *_messageContext;
}

@property(retain, nonatomic) AMPMessageContext *messageContext; // @synthesize messageContext=_messageContext;
@property(nonatomic) long long packTargetId; // @synthesize packTargetId=_packTargetId;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) long long syncId; // @synthesize syncId=_syncId;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long bizId; // @synthesize bizId=_bizId;
- (void).cxx_destruct;
- (void)parseFromData:(id)arg1;
- (void)parseFromDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
