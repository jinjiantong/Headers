//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBLiveBroadCasterAccountInfo, TBLiveVideoGoodModel;

@interface TBLiveCPViewContentDataLiveModel : TBJSONModel
{
    NSString *_title;
    NSString *_tidbitsUrl;
    NSString *_clickUrl;
    NSString *_coverImg;
    NSString *_coverImg169;
    NSString *_liveId;
    NSString *_liveStatus;
    long long _channelId;
    long long _columnId;
    TBLiveVideoGoodModel *_itemDO;
    TBLiveBroadCasterAccountInfo *_accountDO;
    NSString *_scm;
    NSString *_trackInfo;
    NSString *_matchtype;
    NSString *_viewCount;
}

@property(copy, nonatomic) NSString *viewCount; // @synthesize viewCount=_viewCount;
@property(copy, nonatomic) NSString *matchtype; // @synthesize matchtype=_matchtype;
@property(copy, nonatomic) NSString *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) TBLiveBroadCasterAccountInfo *accountDO; // @synthesize accountDO=_accountDO;
@property(retain, nonatomic) TBLiveVideoGoodModel *itemDO; // @synthesize itemDO=_itemDO;
@property(nonatomic) long long columnId; // @synthesize columnId=_columnId;
@property(nonatomic) long long channelId; // @synthesize channelId=_channelId;
@property(copy, nonatomic) NSString *liveStatus; // @synthesize liveStatus=_liveStatus;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) NSString *coverImg169; // @synthesize coverImg169=_coverImg169;
@property(copy, nonatomic) NSString *coverImg; // @synthesize coverImg=_coverImg;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(copy, nonatomic) NSString *tidbitsUrl; // @synthesize tidbitsUrl=_tidbitsUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

