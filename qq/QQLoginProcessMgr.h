//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQLoginProcessEventDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface QQLoginProcessMgr : NSObject <QQLoginProcessEventDelegate>
{
    _Bool _loginSuccessProcessed;
    NSMutableDictionary *_loginSucessParam;
    _Bool _isGoLoginUserProcess;
    int _loginState;
    NSMutableArray *_suspendedHighLvRequestArray;
    NSMutableArray *_suspendedRequestArray;
    NSMutableArray *_unhanledRequestArray;
    NSMutableDictionary *_requestInfoDic;
    NSMutableDictionary *_actionBDetailDic;
    double _connectStartTime;
    double _connectEndTime;
    int _connectCount;
    _Bool _isFirstTryLoginConnect;
    _Bool _isRegisterLogin;
}

+ (id)getInstance;
@property(nonatomic) _Bool isRegisterLogin; // @synthesize isRegisterLogin=_isRegisterLogin;
@property(nonatomic) _Bool isGoLoginUserProcess; // @synthesize isGoLoginUserProcess=_isGoLoginUserProcess;
- (void)changeStateToAllFinished;
- (void)onMsfPacketHandled:(id)arg1 seqId:(int)arg2;
- (void)sendSuspendedRequest:(int)arg1;
- (void)sendSuspendedRequest;
- (void)sendSuspendedHighLvRequest;
- (void)onBackgroundProcessSuspend;
- (void)setActionBDetailByDic:(id)arg1;
- (void)setActionBDetail:(id)arg1 key:(id)arg2;
- (void)addUnhandledSendDic:(id)arg1;
- (void)addSuspendedSendDic:(id)arg1;
- (int)sendMSFPacketWithControl:(id)arg1;
- (_Bool)shouldSuspendCmd:(id)arg1;
- (_Bool)isCmdInControlDic:(id)arg1;
- (void)requestNumberGroupMessages;
- (void)reportActionBDetail:(id)arg1;
- (_Bool)hasRegisterProxyFinished;
- (void)continuePorcessLoginSuccessEvent;
- (void)handleLoginSuccessEvent;
- (void)onLoginUserEventWithType:(int)arg1 param:(id)arg2;
- (void)onLoginUserConnectResult:(_Bool)arg1;
- (void)startLoginUserProcess;
- (void)startConnectProcess;
- (void)loginUserWithAccountAfterReg:(id)arg1 andCountry:(id)arg2 isSimplePass:(_Bool)arg3;
- (void)loginUserWithPhone:(id)arg1 andCountry:(id)arg2;
- (void)loginUserWithAccount:(id)arg1 pwd:(id)arg2 showProcess:(_Bool)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

