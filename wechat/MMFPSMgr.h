//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFPSMgr : NSObject
{
    _Bool _shouldLogFPS;
    NSMutableArray *_logObjectArray;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *logObjectArray; // @synthesize logObjectArray=_logObjectArray;
@property(nonatomic) _Bool shouldLogFPS; // @synthesize shouldLogFPS=_shouldLogFPS;
- (void).cxx_destruct;
- (id)getFPSLog;
- (void)addFPSLogObject:(id)arg1;
- (void)clearFPSLog;
- (_Bool)isLogFPSData;
- (id)init;

@end
