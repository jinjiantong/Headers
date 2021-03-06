//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface QQVIPFunctionComicServerEngine : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_dicSeq2Cmd;
    float _netflow;
    int _adQueryStep;
    int _advOnFirstSection;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (_Bool)didReceiveReportAdExposure:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)uploadAdExposure:(id)arg1;
- (int)feedbackAdLikeInfo:(id)arg1 likeFlag:(int)arg2;
- (int)uploadAcDownloadState:(int)arg1 comicID:(id)arg2;
- (_Bool)didReceiveACDownloadToggle:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)getACDownloadToggleReqBody:(id)arg1 lastTs:(unsigned long long)arg2;
- (_Bool)didReceiveACDownloadComic:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)getACDownloadComicInfo:(id)arg1;
- (_Bool)didRecievedQueryComicSectionInfoMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)queryComicSectionInfoByComicId:(id)arg1 sectionId:(id)arg2;
- (_Bool)didReceivedComicGlobalConfigMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)getComicGlobalConfig;
- (_Bool)didReceivedReportPicReadTimeMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)reportPicReadTimeBody:(id)arg1;
- (_Bool)didRecievedAdvertiseMentMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)getAdvertisementComicId:(id)arg1 sectionId:(id)arg2 posId:(id)arg3;
- (_Bool)didRecievedLastSessionRecommendMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)getLastSessionRecommend:(id)arg1;
- (int)handleReq:(const char *)arg1 buffer:(char *)arg2;
- (char *)getReqBuffer:(struct CPBMessageEncoder *)arg1 body:(struct CPBMessageEncoder *)arg2 cmd:(const char *)arg3;
- (struct CPBMessageEncoder *)getCommonReqHead:(const char *)arg1 etag:(const char *)arg2;
- (int)getBufferLenthFromWupBuffer:(char *)arg1;
- (int)getMessageLiteFromWupBuffer:(void **)arg1 wupBuffer:(char *)arg2;
- (_Bool)innerDidRecieved:(CDStruct_7895f40e)arg1 cmd:(const char *)arg2 wupBuffer:(char *)arg3 rspHead:(CDStruct_657be434 *)arg4;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (_Bool)didRecievedBuyComicSectionMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (_Bool)didRecievedQueryUserBuyInfoMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (_Bool)didRecievedSaveReadProgressMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (_Bool)didRecievedQueryReadProgressMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (_Bool)didRecievedQueryCollectionComicMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (_Bool)didRecievedCollectComicMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (_Bool)didRecievedQuerySectionDetailMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (_Bool)didRecievedQueryComicDetailMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (void)rspErrorHandle:(CDStruct_7895f40e)arg1 rspHead:(CDStruct_657be434 *)arg2;
- (_Bool)didReceivedDelMantuList:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)reqDelMantuList:(id)arg1;
- (_Bool)didReceivedSetMantuList:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)reqSetMantuList:(id)arg1;
- (_Bool)didReceivedgetCurrnetUserMantuList:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)getCurrnetUserMantuList:(id)arg1;
- (_Bool)didRecievedDanmuColorInfoMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)getDanmuColorInfo;
- (_Bool)didReceivedPostDanmuMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)postDanmu:(id)arg1;
- (_Bool)didReceivedQueryBatchDanmuMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)queryDanmuBatchByReqBody:(id)arg1;
- (id)resultDictFromQueryDanmuRsp:(struct CPBMessageDecoder *)arg1;
- (_Bool)didReceivedtCheckComicPicWordsResult:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)checkComicPicWords:(id)arg1;
- (_Bool)didReceivedtMyCollectPicCount:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)getMyCollectPicCount;
- (_Bool)didReceivedRecieveGiftMsg:(CDStruct_7895f40e)arg1 wupBuffer:(char *)arg2 rspHead:(CDStruct_657be434 *)arg3;
- (int)receiveLevelGiftByGiftId:(id)arg1;
- (int)buyComicSection:(id)arg1 sections:(id)arg2 isAutoBuy:(int)arg3;
- (int)queryUserBuyInfo:(id)arg1;
- (int)collectComicBatch:(id)arg1 pageId:(id)arg2;
- (int)saveComicReadHistoryByModel:(id)arg1;
- (int)getComicCollectionFromPage:(long long)arg1 toPage:(long long)arg2 offlineCollections:(id)arg3;
- (int)getComicReadHistory:(id)arg1 offlineReadedModel:(id)arg2;
- (int)getSectionPicInfosBySectionId:(id)arg1 sectionId:(id)arg2;
- (int)getComcInfoByComicId:(id)arg1 pageInfo:(id)arg2 detailMode:(int)arg3;
- (int)localRsponse:(id)arg1 cmd:(const char *)arg2 seq:(int)arg3 ignorMaxCacheTime:(_Bool)arg4;
- (int)getNewSeq;
- (id)unCacheSeq2Cmd:(int)arg1;
- (void)cacheSeq2Cmd:(int)arg1 cmd:(id)arg2;
- (int)getAdvOnFirstSection;
- (int)getAdQueryStep;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

