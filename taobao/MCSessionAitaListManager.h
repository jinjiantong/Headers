//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MCSessionAitaListManager : NSObject
{
    NSMutableDictionary *_listMap;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)cleanAllData;
- (id)aitaListWithSessionKey:(id)arg1;
- (void)addAitaList:(id)arg1 datas:(id)arg2;
- (id)init;

@end

