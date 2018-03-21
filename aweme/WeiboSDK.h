//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WeiboSDK : NSObject
{
}

+ (id)queryDictionaryOfURLQuery:(id)arg1 usingEncoding:(unsigned long long)arg2;
+ (id)serializeURLString:(id)arg1 withParams:(id)arg2;
+ (id)queryValueWithName:(id)arg1 urlString:(id)arg2;
+ (_Bool)unregisterApp;
+ (_Bool)registerApp:(id)arg1;
+ (_Bool)registerAppWithAppKey:(id)arg1;
+ (void)firstStart;
+ (_Bool)registerAppWithApp:(id)arg1;
+ (id)callbackSchemePrefix;
+ (id)registedAppsPasteboardName;
+ (id)wbsdk_platform;
+ (_Bool)isEmptyOrWhitespace:(id)arg1;
+ (id)getWeiboSDKUA;
+ (_Bool)sendResponse:(id)arg1;
+ (_Bool)sendRequest:(id)arg1;
+ (_Bool)openAppWithTransferObject:(id)arg1;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (void)directlySendResponseToCurrentApp:(id)arg1;
+ (void)didReceiveUnSupportedResponse:(id)arg1;
+ (void)didReceiveUnSupportedRequest:(id)arg1;
+ (id)getWeiboAid;
+ (id)getSDKVersion;
+ (id)getWeiboAppInstallUrl;
+ (_Bool)openWeiboApp;
+ (_Bool)isCanShareInWeiboAPP;
+ (_Bool)isCanSSOInWeiboApp;
+ (_Bool)isCanSSOAndShareInWeiboApp;
+ (_Bool)isWeiboAppInstalled;
+ (void)linkToProfile;
+ (void)linkToTimeLine;
+ (void)linkToSearch:(id)arg1;
+ (void)commentToWeibo:(id)arg1;
+ (void)shareToWeibo:(id)arg1;
+ (void)linkToArticle:(id)arg1;
+ (void)linkToSingleBlog:(id)arg1 blogID:(id)arg2;
+ (void)linkToUser:(id)arg1;
+ (void)logOutWithToken:(id)arg1 delegate:(id)arg2 withTag:(id)arg3;
+ (void)enableDebugMode:(_Bool)arg1;
+ (id)hashKey;
+ (id)requestUserInfoCache;
+ (id)activityViewController;
+ (void)forceUploadRecords;
+ (void)internalEvent:(id)arg1 withStartTime:(id)arg2;
+ (void)event:(id)arg1 onPageView:(id)arg2 withUserInfo:(id)arg3;
+ (void)event:(id)arg1;
+ (void)endLogEvent:(id)arg1 onPageView:(id)arg2 withUserInfo:(id)arg3;
+ (void)beginLogEvent:(id)arg1 onPageView:(id)arg2 withUserInfo:(id)arg3;
+ (void)endLogEvent:(id)arg1;
+ (void)beginLogEvent:(id)arg1;
+ (void)endLogPageView:(id)arg1;
+ (void)beginLogPageView:(id)arg1;
+ (void)setUploadFrequecy:(double)arg1;
+ (void)setVersion:(id)arg1;
+ (void)setChannelID:(id)arg1;
+ (void)setStatisticsLogEnabled:(_Bool)arg1;
+ (void)setStatisticsEnabled:(_Bool)arg1;

@end
