//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface ALBBLoginMonitorUtil : NSObject
{
    NSDictionary *_loginMonitorDic;
    NSDictionary *_resetpwdMonitorDic;
    NSDictionary *_findpwdMonitorDic;
    NSDictionary *_registerMonitorDic;
    NSDictionary *_authMonitorDic;
    NSDictionary *_ssoMonitorDic;
    NSDictionary *_modifyphoneMonitorDic;
    NSDictionary *_bindphoneMonitorDic;
    NSDictionary *_otherMonitorDic;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *otherMonitorDic; // @synthesize otherMonitorDic=_otherMonitorDic;
@property(retain, nonatomic) NSDictionary *bindphoneMonitorDic; // @synthesize bindphoneMonitorDic=_bindphoneMonitorDic;
@property(retain, nonatomic) NSDictionary *modifyphoneMonitorDic; // @synthesize modifyphoneMonitorDic=_modifyphoneMonitorDic;
@property(retain, nonatomic) NSDictionary *ssoMonitorDic; // @synthesize ssoMonitorDic=_ssoMonitorDic;
@property(retain, nonatomic) NSDictionary *authMonitorDic; // @synthesize authMonitorDic=_authMonitorDic;
@property(retain, nonatomic) NSDictionary *registerMonitorDic; // @synthesize registerMonitorDic=_registerMonitorDic;
@property(retain, nonatomic) NSDictionary *findpwdMonitorDic; // @synthesize findpwdMonitorDic=_findpwdMonitorDic;
@property(retain, nonatomic) NSDictionary *resetpwdMonitorDic; // @synthesize resetpwdMonitorDic=_resetpwdMonitorDic;
@property(retain, nonatomic) NSDictionary *loginMonitorDic; // @synthesize loginMonitorDic=_loginMonitorDic;
- (void).cxx_destruct;
- (void)initDictories;

@end

