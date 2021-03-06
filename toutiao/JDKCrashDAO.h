//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class JDKCrashDatabase;

@interface JDKCrashDAO : NSObject
{
    JDKCrashDatabase *_db;
    CDUnknownBlockType _finishBlock;
}

- (void).cxx_destruct;
- (void)updateCrashInfoFinished:(id)arg1;
- (void)updateCrashInfoWithParams:(id)arg1;
- (void)sendCrashInfoWithCrashModels:(id)arg1 didFinish:(CDUnknownBlockType)arg2;
- (id)crashModels;
- (_Bool)deletaByCriteria:(id)arg1;
- (void)saveCrashInfo:(id)arg1;
- (id)initWithCacheDirectory:(id)arg1;

@end

