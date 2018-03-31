//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FeedsInfo_0x6cf, NSArray, NSString, ReadInJoyChannelArticle;

@interface ReadInJoyVideoArticleModel : NSObject
{
    _Bool _hasEstimated;
    _Bool _favorite;
    _Bool _wantFavorite;
    unsigned int _video_play_count;
    int _busiType;
    unsigned int _strategy_id;
    unsigned int _video_comment_count;
    unsigned long long _article_id;
    NSString *_innerUniqueID;
    NSString *_article_title;
    NSString *_article_summary;
    unsigned long long _article_time;
    NSString *_subscribe_id;
    NSString *_subscribe_name;
    NSString *_videoInfo_vid;
    double _videoInfo_width;
    double _videoInfo_height;
    double _videoInfo_duration;
    NSString *_recommend_reason;
    unsigned long long _videoInfo_fileSize;
    NSString *_thirdIcon;
    NSString *_thirdName;
    NSString *_thirdAction;
    NSString *_third_uin;
    NSString *_third_uin_name;
    NSString *_videoInfo_picture;
    NSString *_article_url;
    NSString *_first_page_url;
    NSString *_video_time;
    unsigned long long _algorithm_id;
    FeedsInfo_0x6cf *_msg_feeds_info;
    unsigned long long _uint64_pull_time;
    NSArray *_rtp_label_list;
    NSArray *_recommend_barrage_text_list;
    NSString *_video_url;
    ReadInJoyChannelArticle *_channelArticle;
    unsigned long long _feedsID;
    unsigned long long _feedsType;
    NSArray *_videoEstimatedInfos;
    NSString *_formatDuration;
    NSString *_flowForeCastXG;
    NSString *_flowForeCastCompleteXG;
    NSString *_flowForeCastTipsXG;
    NSString *_flowForeCastCompleteWifi;
    NSString *_flowForeCastNotReachable;
    NSString *_flowForeCastCompleteNotReachable;
    NSString *_flowForeCastTipsNotReachable;
    NSString *_video_json;
    double _currentTime;
    unsigned long long _favoriteLocalID;
    NSArray *_favoriteCidList;
    NSString *_biuData;
    struct CGSize _formatDurationSize;
    struct CGSize _flowForeCastXGSize;
    struct CGSize _flowForeCastCompleteXGSize;
    struct CGSize _flowForeCastTipsXGSize;
    struct CGSize _flowForeCastCompleteWifiSize;
    struct CGSize _flowForeCastNotReachableSize;
    struct CGSize _flowForeCastCompleteNotReachableSize;
    struct CGSize _flowForeCastTipsNotReachableSize;
}

@property(copy, nonatomic) NSString *biuData; // @synthesize biuData=_biuData;
@property(copy, nonatomic) NSArray *favoriteCidList; // @synthesize favoriteCidList=_favoriteCidList;
@property(nonatomic) unsigned long long favoriteLocalID; // @synthesize favoriteLocalID=_favoriteLocalID;
@property(nonatomic) _Bool wantFavorite; // @synthesize wantFavorite=_wantFavorite;
@property(nonatomic) _Bool favorite; // @synthesize favorite=_favorite;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(copy, nonatomic) NSString *video_json; // @synthesize video_json=_video_json;
@property(nonatomic) _Bool hasEstimated; // @synthesize hasEstimated=_hasEstimated;
@property(nonatomic) struct CGSize flowForeCastTipsNotReachableSize; // @synthesize flowForeCastTipsNotReachableSize=_flowForeCastTipsNotReachableSize;
@property(nonatomic) struct CGSize flowForeCastCompleteNotReachableSize; // @synthesize flowForeCastCompleteNotReachableSize=_flowForeCastCompleteNotReachableSize;
@property(nonatomic) struct CGSize flowForeCastNotReachableSize; // @synthesize flowForeCastNotReachableSize=_flowForeCastNotReachableSize;
@property(nonatomic) struct CGSize flowForeCastCompleteWifiSize; // @synthesize flowForeCastCompleteWifiSize=_flowForeCastCompleteWifiSize;
@property(nonatomic) struct CGSize flowForeCastTipsXGSize; // @synthesize flowForeCastTipsXGSize=_flowForeCastTipsXGSize;
@property(nonatomic) struct CGSize flowForeCastCompleteXGSize; // @synthesize flowForeCastCompleteXGSize=_flowForeCastCompleteXGSize;
@property(nonatomic) struct CGSize flowForeCastXGSize; // @synthesize flowForeCastXGSize=_flowForeCastXGSize;
@property(copy, nonatomic) NSString *flowForeCastTipsNotReachable; // @synthesize flowForeCastTipsNotReachable=_flowForeCastTipsNotReachable;
@property(copy, nonatomic) NSString *flowForeCastCompleteNotReachable; // @synthesize flowForeCastCompleteNotReachable=_flowForeCastCompleteNotReachable;
@property(copy, nonatomic) NSString *flowForeCastNotReachable; // @synthesize flowForeCastNotReachable=_flowForeCastNotReachable;
@property(copy, nonatomic) NSString *flowForeCastCompleteWifi; // @synthesize flowForeCastCompleteWifi=_flowForeCastCompleteWifi;
@property(copy, nonatomic) NSString *flowForeCastTipsXG; // @synthesize flowForeCastTipsXG=_flowForeCastTipsXG;
@property(copy, nonatomic) NSString *flowForeCastCompleteXG; // @synthesize flowForeCastCompleteXG=_flowForeCastCompleteXG;
@property(copy, nonatomic) NSString *flowForeCastXG; // @synthesize flowForeCastXG=_flowForeCastXG;
@property(nonatomic) struct CGSize formatDurationSize; // @synthesize formatDurationSize=_formatDurationSize;
@property(copy, nonatomic) NSString *formatDuration; // @synthesize formatDuration=_formatDuration;
@property(copy, nonatomic) NSArray *videoEstimatedInfos; // @synthesize videoEstimatedInfos=_videoEstimatedInfos;
@property(nonatomic) unsigned long long feedsType; // @synthesize feedsType=_feedsType;
@property(nonatomic) unsigned long long feedsID; // @synthesize feedsID=_feedsID;
@property(retain, nonatomic) ReadInJoyChannelArticle *channelArticle; // @synthesize channelArticle=_channelArticle;
@property(copy, nonatomic) NSString *video_url; // @synthesize video_url=_video_url;
@property(nonatomic) unsigned int video_comment_count; // @synthesize video_comment_count=_video_comment_count;
@property(copy, nonatomic) NSArray *recommend_barrage_text_list; // @synthesize recommend_barrage_text_list=_recommend_barrage_text_list;
@property(copy, nonatomic) NSArray *rtp_label_list; // @synthesize rtp_label_list=_rtp_label_list;
@property(nonatomic) unsigned long long uint64_pull_time; // @synthesize uint64_pull_time=_uint64_pull_time;
@property(retain, nonatomic) FeedsInfo_0x6cf *msg_feeds_info; // @synthesize msg_feeds_info=_msg_feeds_info;
@property(nonatomic) unsigned int strategy_id; // @synthesize strategy_id=_strategy_id;
@property(nonatomic) unsigned long long algorithm_id; // @synthesize algorithm_id=_algorithm_id;
@property(retain, nonatomic) NSString *video_time; // @synthesize video_time=_video_time;
@property(retain, nonatomic) NSString *first_page_url; // @synthesize first_page_url=_first_page_url;
@property(retain, nonatomic) NSString *article_url; // @synthesize article_url=_article_url;
@property(retain, nonatomic) NSString *videoInfo_picture; // @synthesize videoInfo_picture=_videoInfo_picture;
@property(retain, nonatomic) NSString *third_uin_name; // @synthesize third_uin_name=_third_uin_name;
@property(retain, nonatomic) NSString *third_uin; // @synthesize third_uin=_third_uin;
@property(retain, nonatomic) NSString *thirdAction; // @synthesize thirdAction=_thirdAction;
@property(retain, nonatomic) NSString *thirdName; // @synthesize thirdName=_thirdName;
@property(retain, nonatomic) NSString *thirdIcon; // @synthesize thirdIcon=_thirdIcon;
@property(nonatomic) int busiType; // @synthesize busiType=_busiType;
@property(nonatomic) unsigned long long videoInfo_fileSize; // @synthesize videoInfo_fileSize=_videoInfo_fileSize;
@property(retain, nonatomic) NSString *recommend_reason; // @synthesize recommend_reason=_recommend_reason;
@property(nonatomic) double videoInfo_duration; // @synthesize videoInfo_duration=_videoInfo_duration;
@property(nonatomic) double videoInfo_height; // @synthesize videoInfo_height=_videoInfo_height;
@property(nonatomic) double videoInfo_width; // @synthesize videoInfo_width=_videoInfo_width;
@property(retain, nonatomic) NSString *videoInfo_vid; // @synthesize videoInfo_vid=_videoInfo_vid;
@property(nonatomic) unsigned int video_play_count; // @synthesize video_play_count=_video_play_count;
@property(retain, nonatomic) NSString *subscribe_name; // @synthesize subscribe_name=_subscribe_name;
@property(retain, nonatomic) NSString *subscribe_id; // @synthesize subscribe_id=_subscribe_id;
@property(nonatomic) unsigned long long article_time; // @synthesize article_time=_article_time;
@property(retain, nonatomic) NSString *article_summary; // @synthesize article_summary=_article_summary;
@property(retain, nonatomic) NSString *article_title; // @synthesize article_title=_article_title;
@property(retain, nonatomic) NSString *innerUniqueID; // @synthesize innerUniqueID=_innerUniqueID;
@property(nonatomic) unsigned long long article_id; // @synthesize article_id=_article_id;
- (void)flowForeCastWordsEstimateComponent;
- (void)presetFlowForeCastWords;
- (void)formatVideoDuration;
- (unsigned long long)estimatedVideoFileSizeWith:(unsigned long long)arg1;
- (_Bool)isAccountSameWith:(id)arg1;
- (void)setVideoInfoWithWebParams:(id)arg1;
- (void)setVideoInfo:(id)arg1;
- (id)description;
- (void)dealloc;

@end

