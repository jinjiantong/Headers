//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/GSBaseRequest.h>

#import <QQMainProject/GSRequestProtocol-Protocol.h>

@class NSArray, NSString;

@interface VideoMatchRequest : GSBaseRequest <GSRequestProtocol>
{
    int _svrType;
    unsigned int _reMatchType;
    unsigned int _getNowAdsReason;
    unsigned int _nearbyAvStatus;
    long long _latitude;
    long long _longitude;
    NSArray *_filterInfoArr;
    NSString *_roomID;
}

@property(copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(nonatomic) unsigned int nearbyAvStatus; // @synthesize nearbyAvStatus=_nearbyAvStatus;
@property(nonatomic) unsigned int getNowAdsReason; // @synthesize getNowAdsReason=_getNowAdsReason;
@property(nonatomic) unsigned int reMatchType; // @synthesize reMatchType=_reMatchType;
@property(retain, nonatomic) NSArray *filterInfoArr; // @synthesize filterInfoArr=_filterInfoArr;
@property(nonatomic) long long longitude; // @synthesize longitude=_longitude;
@property(nonatomic) long long latitude; // @synthesize latitude=_latitude;
@property(nonatomic) int svrType; // @synthesize svrType=_svrType;
- (void)dealloc;
- (id)translateHeaderCode:(unsigned int)arg1;
- (id)parseResponseBodyString:(void *)arg1;
- (void *)getRequestBodyString;
- (unsigned int)serviceType;
- (unsigned int)serviceNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

