//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface APMidasCommReportHelper : NSObject
{
    NSMutableDictionary *_dictQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)networkType;
- (void)dequeueRequestName:(id)arg1 reqTag:(unsigned long long)arg2 success:(_Bool)arg3 httpRespCode:(long long)arg4 errorMsg:(id)arg5 action:(id)arg6 resultInfoDict:(id)arg7;
- (void)enqueueRequestName:(id)arg1 reqTag:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end
