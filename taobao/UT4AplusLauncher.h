//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UTMCConfigInterfaceUpdate-Protocol.h"

@class NSString;

@interface UT4AplusLauncher : NSObject <UTMCConfigInterfaceUpdate>
{
}

+ (id)sharedInstance;
- (void)updateSysConfigValue:(id)arg1 sysKey:(id)arg2;
- (void)enable;
- (void)launch;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

