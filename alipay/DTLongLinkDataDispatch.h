//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSTimer;
@protocol DTLonglinkDataDispatchDelegate, DTSyncDelegate;

@interface DTLongLinkDataDispatch : NSObject
{
    long long _keepLiveTime;
    long long _heartTimeOut;
    id <DTLonglinkDataDispatchDelegate> _delegate;
    double _didConnTime;
    long long _deviceStatus;
    long long _userStatus;
    long long _initStatus;
    id <DTSyncDelegate> _syncDelegate;
    NSString *_appName;
    NSString *_appVer;
    NSString *_did;
    NSString *_tid;
    NSString *_cdid;
    NSString *_linkToken;
    NSObject *_dispatchLock;
    NSMutableArray *_msgArray;
    char *_baleData;
    long long _baleDataLength;
    double _startBindUserTime;
    double _startUnBindUserTime;
    double _startHeartTime;
    long long _bindStatus;
    NSTimer *_statusTimer;
    NSString *_isActivate;
    NSTimer *_heartbeatTimeoutTimer;
    NSTimer *_cmdTimeoutTimer;
    long long _nextConnectItvl;
    NSTimer *_nextConnectTimer;
    double _nextConnectTime;
}

+ (id)sharedInstance;
@property(nonatomic) double nextConnectTime; // @synthesize nextConnectTime=_nextConnectTime;
@property(retain, nonatomic) NSTimer *nextConnectTimer; // @synthesize nextConnectTimer=_nextConnectTimer;
@property(nonatomic) long long nextConnectItvl; // @synthesize nextConnectItvl=_nextConnectItvl;
@property(retain, nonatomic) NSTimer *cmdTimeoutTimer; // @synthesize cmdTimeoutTimer=_cmdTimeoutTimer;
@property(retain, nonatomic) NSTimer *heartbeatTimeoutTimer; // @synthesize heartbeatTimeoutTimer=_heartbeatTimeoutTimer;
@property(retain, nonatomic) NSString *isActivate; // @synthesize isActivate=_isActivate;
@property(retain, nonatomic) NSTimer *statusTimer; // @synthesize statusTimer=_statusTimer;
@property(nonatomic) long long bindStatus; // @synthesize bindStatus=_bindStatus;
@property(nonatomic) double startHeartTime; // @synthesize startHeartTime=_startHeartTime;
@property(nonatomic) double startUnBindUserTime; // @synthesize startUnBindUserTime=_startUnBindUserTime;
@property(nonatomic) double startBindUserTime; // @synthesize startBindUserTime=_startBindUserTime;
@property(nonatomic) long long baleDataLength; // @synthesize baleDataLength=_baleDataLength;
@property(nonatomic) char *baleData; // @synthesize baleData=_baleData;
@property(retain, nonatomic) NSMutableArray *msgArray; // @synthesize msgArray=_msgArray;
@property(retain, nonatomic) NSObject *dispatchLock; // @synthesize dispatchLock=_dispatchLock;
@property(retain, nonatomic) NSString *linkToken; // @synthesize linkToken=_linkToken;
@property(retain, nonatomic) NSString *cdid; // @synthesize cdid=_cdid;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *did; // @synthesize did=_did;
@property(retain, nonatomic) NSString *appVer; // @synthesize appVer=_appVer;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) __weak id <DTSyncDelegate> syncDelegate; // @synthesize syncDelegate=_syncDelegate;
@property(nonatomic) long long initStatus; // @synthesize initStatus=_initStatus;
@property(nonatomic) long long userStatus; // @synthesize userStatus=_userStatus;
@property(nonatomic) long long deviceStatus; // @synthesize deviceStatus=_deviceStatus;
@property(nonatomic) double didConnTime; // @synthesize didConnTime=_didConnTime;
@property(nonatomic) __weak id <DTLonglinkDataDispatchDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long heartTimeOut; // @synthesize heartTimeOut=_heartTimeOut;
@property(nonatomic) long long keepLiveTime; // @synthesize keepLiveTime=_keepLiveTime;
- (void).cxx_destruct;
- (void)resetData;
- (void)dataInitOnConnect;
- (void)socketCloseResetData;
- (_Bool)isSyncInit;
- (_Bool)syncAvailable:(id)arg1;
- (void)startTime:(double)arg1 type:(int)arg2 subType:(id)arg3;
- (void)acitveInitResponse;
- (void)spdyAckResponse;
- (void)startHeartWithSocket;
- (void)readDataWithTimeout:(double)arg1 tag:(long long)arg2;
- (void)writeData:(id)arg1;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3 needResponse:(_Bool)arg4;
- (void)uploadAppId:(id)arg1 jsonStr:(id)arg2;
- (void)sendUpstreamData:(id)arg1;
- (void)sendBusinessNotifyWithResponse:(id)arg1 withAppId:(id)arg2 withMsgData:(id)arg3;
- (void)deleteStatusTimer;
- (void)createStatueTimer;
- (void)retryStatus;
- (id)getTimeoutErrorWithDes:(id)arg1;
- (void)invalidateHeartbeatTimeoutTimer;
- (void)heartbeatTimeout:(id)arg1;
- (void)sendHeartCommandWithSock:(id)arg1;
- (void)sendCloseCommand;
- (void)invalidateCmdTimeoutTimer;
- (void)cmdTimeout:(id)arg1;
- (void)beginCmdTimeoutTimer:(id)arg1;
- (void)sendInitCommand:(id)arg1;
- (void)sendUnBindUser;
- (void)compatibleKey:(id)arg1 dic:(id)arg2;
- (void)compatibleOldData;
- (void)sendBindUser;
- (void)sendInitDevice:(id)arg1;
- (void)sendByActivate:(id)arg1;
- (id)getCdid;
- (void)notifyPushMessage:(id)arg1;
- (void)closeAndActive;
- (void)HandleTotalMessageFromData:(char *)arg1 withMessageInfo:(id)arg2;
- (void)onSocket:(id)arg1;
- (void)sendMessageInit:(int)arg1 type:(long long)arg2;
- (void)setDid:(id)arg1 tid:(id)arg2;
- (void)setUserInitData:(id)arg1 sessionId:(id)arg2;
- (void)setAppName:(id)arg1 appVersion:(id)arg2;
- (void)clearData;
- (void)dealloc;
@property(readonly, nonatomic) double overtimeTimer;
- (void)beginLimitFlow:(long long)arg1;
- (_Bool)nextConnectTimeOut;
- (_Bool)limitFlow;
- (_Bool)isDegrade:(long long)arg1;
- (void)invalidateNextConnectTimer;
- (void)nextConnectTime:(id)arg1;
- (void)beginNextConnectTimer;
- (void)resetLimitFlowData;
@property(retain, nonatomic) NSString *sessionId;
@property(retain, nonatomic) NSString *userId;
- (void)initData;

@end

