//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSArray, NSString, QQLockDictionary;

@interface SGODataEngine : NSObject <IEngineDispatchDelegate>
{
    QQLockDictionary *_entrySetting;
    NSArray *_selectedGroupList;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *selectedGroupList; // @synthesize selectedGroupList=_selectedGroupList;
- (id)getReportGroupList;
- (void)saveEntrySetting;
- (void)groupListV2Updated:(id)arg1;
- (void)rspSuperGroupOwnerEntry:(CDStruct_7895f40e)arg1;
- (int)sendSuperGroupOwnerEntryReq:(unsigned long long)arg1 adminCount:(unsigned long long)arg2;
- (_Bool)reqSuperGroupOwnerEntry;
- (id)superGroupOwnerEntryUrlWithType:(int)arg1;
- (id)superGroupOwnerEntryUrl;
- (_Bool)isShowSuperGroupOwnerEntry;
- (MsgBody_ba4fc016 *)GenTextMsgBodyOfSendMsgReq:(id)arg1 message:(id)arg2;
- (void)processRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)createRequestData:(id)arg1 groupList:(id)arg2 atAll:(_Bool)arg3;
- (int)sendText:(id)arg1 groupList:(id)arg2 atAll:(_Bool)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
