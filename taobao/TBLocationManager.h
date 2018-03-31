//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, TBLocationCoreManager, TBLocationSafeMutableArray;

@interface TBLocationManager : NSObject <UIAlertViewDelegate>
{
    TBLocationSafeMutableArray *coordinateTransferDataArray;
    TBLocationSafeMutableArray *addressTransferDataArray;
    TBLocationSafeMutableArray *poiTransferDataArray;
    TBLocationSafeMutableArray *wifiTransferDataArray;
    TBLocationSafeMutableArray *additionalLocationTransferDataArray;
    int lastLocationAccuracyLevel;
    _Bool locationSwitch;
    TBLocationCoreManager *_locationCoreManager;
    CDUnknownBlockType _aLocationBlock;
}

+ (void)requestAddressByCoordinate:(float)arg1 lat:(float)arg2 BizID:(id)arg3 block:(CDUnknownBlockType)arg4;
+ (int)getCurrentLocationAuthorizationStatus;
+ (_Bool)isLocationServiceEnabled;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareLocationManager;
@property(copy, nonatomic) CDUnknownBlockType aLocationBlock; // @synthesize aLocationBlock=_aLocationBlock;
@property(retain, nonatomic) TBLocationCoreManager *locationCoreManager; // @synthesize locationCoreManager=_locationCoreManager;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getSuitableArrayByOption:(id)arg1;
- (void)removeTransferDataFromSuitableArray:(id)arg1;
- (void)putTransferDataInSuitableArray:(id)arg1;
- (void)adaptLocationOption:(id)arg1;
- (id)createCallbackDict:(id)arg1 error:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)locationCallback:(id)arg1;
- (void)tbLocationFinished:(id)arg1 transferArray:(id)arg2 error:(id)arg3;
- (void)timeoutControl:(id)arg1;
- (void)clLocationUpdated:(id)arg1 error:(id)arg2;
- (void)doLocation:(id)arg1;
- (void)doAdditionalLocation:(id)arg1 innerCode:(long long)arg2 error:(id)arg3;
- (void)doCancleLocation:(id)arg1;
- (void)cancelLocation:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)requestLocation:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)doRequestCityQuickly:(CDUnknownBlockType)arg1;
- (void)requestCityQuickly:(CDUnknownBlockType)arg1;
- (void)doCacheLocation:(id)arg1;
- (id)getCacheLocation:(id)arg1;
- (void)doLocationSwitch:(id)arg1;
- (void)locationSwitch:(int)arg1;
- (void)requestAuthorization;
- (void)appDidEnterBackgroundAction:(id)arg1;
- (void)asynLocationInit;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

