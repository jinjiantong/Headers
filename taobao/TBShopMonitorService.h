//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, TBShopContext;

@interface TBShopMonitorService : NSObject
{
    TBShopContext *_shopContext;
    NSMutableDictionary *_loadDataMap;
}

@property(retain, nonatomic) NSMutableDictionary *loadDataMap; // @synthesize loadDataMap=_loadDataMap;
@property(nonatomic) __weak TBShopContext *shopContext; // @synthesize shopContext=_shopContext;
- (void).cxx_destruct;
- (void)registerLoadPerformanceMonitor;
- (void)commitLoadPerformance:(id)arg1;
- (void)monitorLoadingPoint:(unsigned long long)arg1;
- (id)initWithContext:(id)arg1;

@end

