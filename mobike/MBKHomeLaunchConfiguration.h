//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBKJsonModelObject-Protocol.h"

@class MBKDidaConfiguration, NSArray, NSDate, NSString;

@interface MBKHomeLaunchConfiguration : NSObject <MBKJsonModelObject>
{
    NSArray *_tabs;
    unsigned long long _defaultTabIndex;
    MBKDidaConfiguration *_didaConfiguration;
    NSString *_selectedTabId;
    NSString *_cityCode;
    double _latitude;
    double _longitude;
    NSDate *_updateDate;
}

+ (id)jsonKeyToClassNameMap;
+ (id)jsonKeyToPropertyNameMap;
@property(retain, nonatomic) NSDate *updateDate; // @synthesize updateDate=_updateDate;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *selectedTabId; // @synthesize selectedTabId=_selectedTabId;
@property(retain, nonatomic) MBKDidaConfiguration *didaConfiguration; // @synthesize didaConfiguration=_didaConfiguration;
@property(nonatomic) unsigned long long defaultTabIndex; // @synthesize defaultTabIndex=_defaultTabIndex;
@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (long long)indexOfHomeTabType:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool homeTabBarShowDisplay;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

