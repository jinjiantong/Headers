//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface aluGateWay : NSObject
{
    NSString *_rsaKey;
    NSString *_rsaTimeStamp;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)getDictWithPbArr:(id)arg1;
- (id)getPbArrayWithDic:(id)arg1;
- (id)monitorForViewDidLoad:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)supplementDoublePwds:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getH5URLAync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getMedPackURLAync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)reportDeviceLocationPb:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)reportDeviceLocation:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)loginVerifySms:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)loginRequireSms:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)getRSAKeyAync:(CDUnknownBlockType)arg1;
- (id)registerAccount:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)getCountryCode:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)bindTaobaoAccount:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)bindAlipayAccount:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)loginAsync:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)rsaKeySync;
- (id)rsaKeyQuery;
- (void)rsaKeyAsync:(CDUnknownBlockType)arg1;
- (id)buildDeviceInfoReportRequest:(id)arg1;
- (id)buildGateWayRequest:(id)arg1;
- (id)init;

@end
