//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TTIMMsgFrequencyControl : NSObject
{
    NSMutableDictionary *_dict;
}

@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
- (void).cxx_destruct;
- (id)stringWithCMD:(int)arg1;
- (void)clear;
- (void)dictWithInitData;
- (void)updateWithSilenceDuration:(long long)arg1;
- (void)updateWithCmd:(int)arg1 silenceDuration:(long long)arg2;
- (void)checkMsgItem:(id)arg1;
- (_Bool)isMsgNeedSilence:(int)arg1;
- (id)init;

@end

