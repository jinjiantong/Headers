//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MSSDKRiskScanner : NSObject
{
}

+ (unsigned long long)harassmentStatusFix:(unsigned long long)arg1 ByMSInstallationStatus:(unsigned long long)arg2;
+ (unsigned long long)checkMomeyShieldInstallationStatus;
+ (unsigned long long)checkMoneyShieldInstallStatus;
+ (void)launchMoneyShieldResultPageWithSrcAppName:(id)arg1 backUrl:(id)arg2;
+ (id)buildParamsString:(id)arg1;
+ (id)urlEncoding:(id)arg1;
+ (void)launchMoneyShield;
+ (_Bool)getLastScanResult:(unsigned long long *)arg1 ctuRisk:(_Bool *)arg2 riskInfo:(id *)arg3;
+ (void)scanRiskForUserAccount:(id)arg1 userId:(id)arg2 timeout:(double)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)scanRiskNoCacheForUserAccount:(id)arg1 userId:(id)arg2 timeout:(double)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)registerWindWaneHandler;

@end
