//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PackageRepository : NSObject
{
}

+ (id)sharedInstance;
- (void)requestPkg:(id)arg1 finishedCb:(CDUnknownBlockType)arg2 failedCb:(CDUnknownBlockType)arg3;
- (void)requestRemoteDepPkg:(id)arg1 pkg:(id)arg2 reqCb:(CDUnknownBlockType)arg3;
- (void)requestRemoteDepPkgs:(id)arg1 reqCb:(CDUnknownBlockType)arg2;
- (id)tryToGetFromAvfsCache:(id)arg1;
- (id)tryToGetFromZcache:(id)arg1 info:(id)arg2;
- (void)getPackagesWithPkg:(id)arg1 reqCb:(CDUnknownBlockType)arg2;
- (void)getPackagesWithConfig:(id)arg1 withPageName:(id)arg2 reqCb:(CDUnknownBlockType)arg3;

@end

