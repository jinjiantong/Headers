//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>
#import <QQMainProject/QQStaticSELDispatcherProtocol-Protocol.h>

@class LYStorage, NSMutableArray, NSString, QQLockDictionary;

@interface GroupAIOKeywordsMgr : NSObject <IEngineDispatchDelegate, QQStaticSELDispatcherProtocol>
{
    LYStorage *_fileStorage;
    QQLockDictionary *_keywordsDict;
    QQLockDictionary *_inMsgKeywords;
    QQLockDictionary *_outMsgKeywords;
    QQLockDictionary *_showedRuleIds;
    NSMutableArray *_reqRuleIds;
}

+ (void)appLaunched;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)saveSetting:(id)arg1;
- (void)filterKeywordsDict:(id)arg1;
- (void)updateKeywordsDict:(id)arg1;
- (void)updateRuleDetails:(id)arg1;
- (void)handleConfigureResult:(struct CPBMessageDecoder)arg1;
- (void)rspRuleDetailInfo:(CDStruct_7895f40e)arg1;
- (int)sendRuleDetailInfoReq:(id)arg1;
- (void)reqRuleDetailInfoDelay;
- (void)reqKeywordRuleDetailInfo:(id)arg1;
@property(readonly, nonatomic) int configureVersion;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (_Bool)isMsgShouldToMatch:(id)arg1;
- (void)showRuleIdForInMsg:(id)arg1 ruleId:(id)arg2;
- (id)showedRuleIdsForInMsg:(id)arg1;
- (id)needReqDetailRuleIds:(id)arg1 showedRuleIds:(id)arg2;
- (id)needReqDetailRuleIds:(id)arg1;
- (id)filterToShowRuleIds:(id)arg1 showedRuleIds:(id)arg2 groupCode:(id)arg3;
- (id)ruleDetailInfo:(id)arg1;
- (id)msgKeywords:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
