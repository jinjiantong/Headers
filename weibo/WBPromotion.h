//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, WBMonitorURLInfo;

@interface WBPromotion : NSObject
{
    _Bool _supportViewMonitor;
    int _direct_send;
    NSArray *_monitorUrls;
    WBMonitorURLInfo *_monitorURLInfo;
    long long _pvtype;
    NSString *_monitor_mask;
    NSString *_mark;
    NSDictionary *_promotionDic;
}

+ (id)objectWithDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *promotionDic; // @synthesize promotionDic=_promotionDic;
@property(readonly, nonatomic) NSString *mark; // @synthesize mark=_mark;
@property(readonly, nonatomic) _Bool supportViewMonitor; // @synthesize supportViewMonitor=_supportViewMonitor;
@property(readonly, nonatomic) int direct_send; // @synthesize direct_send=_direct_send;
@property(readonly, nonatomic) NSString *monitor_mask; // @synthesize monitor_mask=_monitor_mask;
@property(readonly, nonatomic) long long pvtype; // @synthesize pvtype=_pvtype;
@property(readonly, nonatomic) WBMonitorURLInfo *monitorURLInfo; // @synthesize monitorURLInfo=_monitorURLInfo;
@property(readonly, nonatomic) NSArray *monitorUrls; // @synthesize monitorUrls=_monitorUrls;
- (void).cxx_destruct;
- (_Bool)verificationModelSupportViewabilityMonitor;
- (id)sendUrlLogs;
- (id)jsonDic;
- (id)initWithDictionary:(id)arg1;

@end

