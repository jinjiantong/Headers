//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKWebViewBasePlugin.h"

@class MBKLBSManager;

@interface MBKWebViewEnvInfoPlugin : MBKWebViewBasePlugin
{
    MBKLBSManager *_lbsManger;
}

+ (id)registerForPluginName;
+ (void)load;
@property(retain, nonatomic) MBKLBSManager *lbsManger; // @synthesize lbsManger=_lbsManger;
- (void).cxx_destruct;
- (id)getLocationInfo;
- (id)getUserInfo;
- (id)getPlatformInfo;
- (void)getEnvInfo:(long long)arg1;
- (void)handleJsBridgeWithTargetURL:(id)arg1 jsBridgeRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
