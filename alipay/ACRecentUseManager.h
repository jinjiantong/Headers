//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APThreadPool, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ACRecentUseManager : NSObject
{
    _Bool _isUpdatingTinyApp;
    NSMutableArray *_recentUseAppIds;
    NSMutableDictionary *_appsRefreshDate;
    APThreadPool *_loginThreadPool;
    NSObject<OS_dispatch_queue> *_queueRecentUseApps;
    NSObject<OS_dispatch_queue> *_queueAppsRefreshDate;
}

+ (id)shared;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queueAppsRefreshDate; // @synthesize queueAppsRefreshDate=_queueAppsRefreshDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queueRecentUseApps; // @synthesize queueRecentUseApps=_queueRecentUseApps;
@property(retain, nonatomic) APThreadPool *loginThreadPool; // @synthesize loginThreadPool=_loginThreadPool;
@property(nonatomic) _Bool isUpdatingTinyApp; // @synthesize isUpdatingTinyApp=_isUpdatingTinyApp;
@property(retain, nonatomic) NSMutableDictionary *appsRefreshDate; // @synthesize appsRefreshDate=_appsRefreshDate;
@property(retain, nonatomic) NSMutableArray *recentUseAppIds; // @synthesize recentUseAppIds=_recentUseAppIds;
- (void).cxx_destruct;
- (void)handleUpdateTinyApp:(id)arg1;
- (void)updateAppsRefreshDate:(id)arg1;
- (_Bool)configOpened;
- (_Bool)isExpired:(id)arg1;
- (void)updateTinyApp:(id)arg1;
- (void)resumeRecentUseAppIds;
- (void)resetAppsRefreshDate;
- (void)removeItemWithAppId:(id)arg1;
- (id)recentUsedTinyApps;
- (id)recentUseAppsWithCount:(unsigned long long)arg1;
- (void)processStartingApp:(id)arg1;
- (void)dealloc;
- (id)initInPrivate;
- (id)init;

@end
