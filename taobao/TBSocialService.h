//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MtopExtRequestDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface TBSocialService : NSObject <MtopExtRequestDelegate>
{
    NSMutableArray *_bubbleProtocolList;
    NSMutableArray *_msgCallbackList;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *msgCallbackList; // @synthesize msgCallbackList=_msgCallbackList;
@property(retain, nonatomic) NSMutableArray *bubbleProtocolList; // @synthesize bubbleProtocolList=_bubbleProtocolList;
- (void).cxx_destruct;
- (void)succeed:(id)arg1;
- (void)failed:(id)arg1;
- (void)started:(id)arg1;
- (void)postSocialFamilyAddNotification;
- (void)removeCallBack4MessageBox:(CDUnknownBlockType)arg1;
- (void)getData4MessageBoxWithCallback:(CDUnknownBlockType)arg1;
- (void)removeProtocol:(id)arg1;
- (void)registBubbleData:(id)arg1;
- (void)popBindCheckLayar:(id)arg1;
- (id)la_realVisibleController:(id)arg1;
- (void)familyRelationSync;
- (void)receiveBindInviter:(id)arg1;
- (id)calculateMyJuniorDataWithInviteMeList:(id)arg1;
- (id)calculateMyJuniorDataWithMyInviteList:(id)arg1;
- (void)psotNotification4GrobalBubble:(id)arg1;
- (void)updateRemarkName4Order:(id)arg1;
- (void)updateOlderPeopleSignWithInviteMeList:(id)arg1 myInviteList:(id)arg2;
- (void)updateCacheWithInviteMeList:(id)arg1 meInviteList:(id)arg2;
- (void)clearCache4LoginOut;
- (id)getSocialDataFromCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
