//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ACDSRPCCostInfo, NSArray, NSNumber, NSString;

@interface ACDSRPCRequest : NSObject
{
    _Bool _needLoginBox;
    NSString *_action;
    NSString *_group;
    unsigned long long _retryCnt;
    NSArray *_paramValues;
    NSNumber *_schemaVersion;
    unsigned long long _codeType;
    ACDSRPCCostInfo *_costInfo;
    CDUnknownBlockType _callback;
    long long _timeGap;
}

@property(nonatomic) long long timeGap; // @synthesize timeGap=_timeGap;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) ACDSRPCCostInfo *costInfo; // @synthesize costInfo=_costInfo;
@property(nonatomic) unsigned long long codeType; // @synthesize codeType=_codeType;
@property(retain, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(retain, nonatomic) NSArray *paramValues; // @synthesize paramValues=_paramValues;
@property(nonatomic) unsigned long long retryCnt; // @synthesize retryCnt=_retryCnt;
@property(nonatomic) _Bool needLoginBox; // @synthesize needLoginBox=_needLoginBox;
@property(copy, nonatomic) NSString *group; // @synthesize group=_group;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;

@end

