//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TDBaseModel.h"

@class NSArray, NSString, TDAction, TDAppContext, TDAppProfile, TDDeviceProfile, TDSDKProfile, TDUser;

@interface TDEvent : TDBaseModel
{
    _Bool _emulator;
    TDUser *_user;
    TDDeviceProfile *_device;
    TDAppProfile *_app;
    TDSDKProfile *_sdk;
    NSArray *_networks;
    NSArray *_locations;
    TDAppContext *_appContext;
    long long _ts;
    NSString *_fingerprint;
    TDAction *_action;
    NSString *_version;
}

@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) TDAction *action; // @synthesize action=_action;
@property(nonatomic) _Bool emulator; // @synthesize emulator=_emulator;
@property(retain, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
@property(nonatomic) long long ts; // @synthesize ts=_ts;
@property(retain, nonatomic) TDAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSArray *networks; // @synthesize networks=_networks;
@property(retain, nonatomic) TDSDKProfile *sdk; // @synthesize sdk=_sdk;
@property(retain, nonatomic) TDAppProfile *app; // @synthesize app=_app;
@property(retain, nonatomic) TDDeviceProfile *device; // @synthesize device=_device;
@property(retain, nonatomic) TDUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)archiveToDictionaryInsertAppcontext:(id)arg1;
- (id)archiveToDictionary;

@end
