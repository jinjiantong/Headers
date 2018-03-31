//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, VACDataReport;

@interface QQWalletServiceCenter : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_refreshPeriodCache;
    NSMutableDictionary *_lastRefreshTimeCache;
    VACDataReport *_currentReport;
    NSMutableDictionary *_registerRequestBaseInfoMap;
    NSMutableDictionary *_requestContextMap;
    NSMutableArray *_registeredMSFCommands;
}

+ (id)defaultCenter;
- (void).cxx_destruct;
- (int)sendCommonRequest:(id)arg1 cmd:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (int)sendCommonRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)reqContextWithCMD:(id)arg1 seq:(int)arg2;
- (id)_reqContextKeyWithCMD:(id)arg1 seq:(int)arg2;
- (_Bool)checkMSFDelegateRegisteredForCMD:(id)arg1;
- (void)registerMSFDelegateForCMD:(id)arg1;
- (void)_cancelCommonRequestForCondition:(CDUnknownBlockType)arg1;
- (void)cancelAllCommonRequestWithCMD:(id)arg1;
- (void)cancelCommonRequestWithSeq:(int)arg1;
- (id)mappingKeyForBaseInfoWithReqClass:(Class)arg1 cmd:(id)arg2;
- (id)reqBaseInfoForReqClass:(Class)arg1 cmd:(id)arg2;
- (_Bool)registerCommonRequestWithCMD:(id)arg1 requestClass:(Class)arg2 responseClass:(Class)arg3 functionName:(id)arg4 servantName:(id)arg5 descriptionName:(id)arg6;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)didReceivedActionCommand:(id)arg1;
- (void)postError:(id)arg1 cmd:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)checkIfNeedEnforceRefreshWithModule:(int)arg1 cacheFileName:(id)arg2;
- (void)responseCommonResponseBySeq:(int)arg1 cmd:(id)arg2 reqContext:(id)arg3 packet:(id)arg4 error:(id)arg5;
- (void)_notifyCommonResponseForContext:(id)arg1 packet:(id)arg2 rsp:(id)arg3 error:(id)arg4;
- (void)responseQQWalletServiceByCMD:(id)arg1 withPacket:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestQQWalletServiceFromNetworkForModule:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)requestQQWalletServiceFromCacheFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestQQWalletServiceForModule:(int)arg1 useCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (double)getLastRefreshTimeByKey:(id)arg1;
- (void)cacheLastRefreshTime:(double)arg1 forKey:(id)arg2;
- (double)getRefreshPeriodByKey:(id)arg1;
- (void)cacheRefreshPeriod:(double)arg1 forKey:(id)arg2;
- (void)requestVoicePwdMatchWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)requestWalletConfigWithReqType:(long long)arg1 isSetSession:(_Bool)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestBankCardDetailWithBankName:(id)arg1 cardType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestGetGoldMsgStatusWithFriendUin:(id)arg1 type:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestSetGoldMsgStatusWithFriendUin:(id)arg1 goldMsgSwitch:(int)arg2 goldMsgPrice:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestWalletPfaFriends:(CDUnknownBlockType)arg1 param:(id)arg2;
- (void)requestPuinInfoWithBargainorId:(id)arg1 subbargainorId:(id)arg2 bussId:(id)arg3 st:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)requestQQWalletAppAuthCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestQQWalletAccountConfigUseCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestQQWalletH5ConfigUseCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preRequestQQWalletRecommendWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestQQWalletRecommendUseCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)commonInit;
- (void)dealloc;
- (id)init;
- (void)hideCoverViewController;
- (id)paramsForPay:(id)arg1 originReqParams:(id)arg2;
- (void)responseWithCode:(int)arg1 errMsg:(id)arg2 payInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)checkParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postParamError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)responseQQWalletPrePayRsp:(id)arg1 originReqParams:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_authToPay:(id)arg1 payInfoForSDK:(id)arg2 prePayRsp:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestQQWalletPayAuthWithParams:(id)arg1 report:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

