//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QzoneModel.h>

#import <QQMainProject/IQZoneFavour-Protocol.h>
#import <QQMainProject/PTJSExport-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSNumber, NSString, QZJFeedsCellLeftThumb, QZJFeedsCellRedBonus, QZJFeedsCellRefer, QZLayoutInfo, QzoneCommSparkleWord, QzoneFeedCellAdvContainerAttach, QzoneFeedCellAudio, QzoneFeedCellBottomRecomm, QzoneFeedCellCampusShareCard, QzoneFeedCellCanvas, QzoneFeedCellComm, QzoneFeedCellComment, QzoneFeedCellContent, QzoneFeedCellCornerAdv, QzoneFeedCellCover, QzoneFeedCellDecorate, QzoneFeedCellFeedsDeco, QzoneFeedCellFollowGuide, QzoneFeedCellForward, QzoneFeedCellForwardList, QzoneFeedCellFrdLikeContainer, QzoneFeedCellGdtAdLR, QzoneFeedCellGift, QzoneFeedCellGuiding, QzoneFeedCellID, QzoneFeedCellInterest, QzoneFeedCellLBS, QzoneFeedCellLike, QzoneFeedCellLive, QzoneFeedCellLuckyMoney, QzoneFeedCellMusic, QzoneFeedCellNegativeFeedback, QzoneFeedCellOperation, QzoneFeedCellPermission, QzoneFeedCellPhotoLayer, QzoneFeedCellPicText, QzoneFeedCellPicture, QzoneFeedCellQBossPsvAdv, QzoneFeedCellRecomTag, QzoneFeedCellRecommAction, QzoneFeedCellRecommHeader, QzoneFeedCellRecommItem, QzoneFeedCellRemark, QzoneFeedCellSeparator, QzoneFeedCellShare, QzoneFeedCellSpecialCare, QzoneFeedCellSummary, QzoneFeedCellTemplate, QzoneFeedCellTitle, QzoneFeedCellUser, QzoneFeedCellVideo, QzoneFeedCellViewMore, QzoneFeedCellVisitor, QzoneFeedGiftCombine, QzoneFeedPicture, QzoneFeedTouchParam, QzoneFeedUser;

@interface QzoneFeedModel : QzoneModel <PTJSExport, IQZoneFavour>
{
    _Bool _willNotBeCached;
    _Bool _shouldHasAutoPlayToken;
    _Bool _useOldTextInfo;
    _Bool _hidden;
    _Bool _isPassive;
    _Bool _isAppList;
    _Bool _hasOperateButton;
    _Bool _isFakeFeed;
    _Bool _isFakeAnimation;
    _Bool _hasAddDropButtonItem;
    _Bool _isLiveExposed;
    _Bool _isVideoExposed;
    _Bool _isADExposed;
    _Bool _isQBossExposed;
    _Bool _isPlayFeedExposed;
    _Bool _isShortVideoFeedExposed;
    _Bool _isDetail;
    _Bool _userInteractionDisable;
    _Bool _disableCommentInputBar;
    _Bool _isLayoutGroup;
    _Bool _isConcernFamousFeed;
    _Bool _hasAddFriend;
    _Bool _isIllegalVideo;
    _Bool _isDeleted;
    _Bool _isCrashedFeed;
    _Bool _isFirstEventFeed;
    _Bool _isVideoPlayed;
    _Bool _notAdjustSeekTimeToZeroWhenIsEnd;
    _Bool _hasVideoStoppedEver;
    _Bool _isFeedExposureReported;
    _Bool _isFeedVisitReported;
    _Bool _needFakeFeedAnimation;
    _Bool _dynamicAlbumAnimationHasPlayed;
    _Bool _inFloatLayer;
    _Bool _layoutSingleAdvVisitor;
    _Bool _isDateFeedModel;
    _Bool _isFakeRedBonusFeed;
    _Bool _shouldPullAll;
    _Bool _isAllDataResp;
    _Bool _medalExpose;
    _Bool _frdContainerType;
    _Bool _shouldIgnore;
    _Bool _isFromPassiveViewCtr;
    _Bool _infoLayoutDone;
    _Bool _likeLayoutDone;
    _Bool _commentLayoutDone;
    _Bool _isFloatLayerGuideModel;
    _Bool _needRefreshLike;
    _Bool _needRefreshContent;
    _Bool _needRefreshComment;
    _Bool _isAppADDirected;
    _Bool _isManualGetConcernRecomm;
    _Bool _hasAudioAnimationPlayed;
    _Bool _bPicureInvalide;
    _Bool _feedBackMove;
    _Bool _bDynamicNickName;
    int _status;
    float _moveToOffset;
    float _birthInfoHeight;
    QzoneFeedCellComm *_comm;
    QzoneFeedCellUser *_user;
    QzoneFeedCellID *_cid;
    QzoneFeedCellTitle *_title;
    QzoneFeedCellSummary *_summary;
    QzoneFeedCellPicture *_picture;
    QzoneFeedCellSeparator *_separator;
    QzoneFeedCellMusic *_music;
    QzoneFeedCellVideo *_video;
    QzoneFeedCellGift *_gift;
    QzoneFeedCellLBS *_lbs;
    QzoneFeedCellRemark *_remark;
    QzoneFeedCellComment *_comment;
    QzoneFeedCellComment *_essenceComment;
    QzoneFeedCellLike *_like;
    QzoneFeedCellForward *_forward;
    QzoneFeedCellDecorate *_decorate;
    QzoneFeedCellForwardList *_frdList;
    QzoneFeedCellShare *_share;
    QzoneFeedCellCampusShareCard *_campusShareCard;
    QzoneFeedModel *_original;
    QzoneFeedCellContent *_content;
    QzoneFeedCellOperation *_operation;
    QzoneFeedCellVisitor *_visitor;
    QZLayoutInfo *_detailBottomAdLayoutInfo;
    QzoneFeedCellAudio *_audio;
    QZJFeedsCellRefer *_jce_refer;
    QZLayoutInfo *_referLayoutInfo;
    QzoneFeedCellPermission *_permission;
    QZJFeedsCellLeftThumb *_jce_shareThumb;
    QZLayoutInfo *_shareThumbInfo;
    QzoneFeedCellRecommHeader *_recommHeader;
    QzoneFeedCellRecommAction *_recommAction;
    QzoneFeedCellRecommItem *_recommItem;
    QzoneFeedCellSpecialCare *_specialCare;
    QzoneFeedGiftCombine *_specialBirthGift;
    QzoneFeedCellLive *_live;
    QzoneFeedCellGuiding *_guiding;
    QzoneFeedCellTemplate *_feedTemplate;
    QzoneFeedCellViewMore *_feedViewMore;
    QzoneFeedCellPicText *_feedPicText;
    QzoneFeedCellFollowGuide *_feedFollowGuide;
    QzoneFeedCellInterest *_interestInfo;
    QzoneFeedCellCover *_cover;
    QzoneFeedCellGdtAdLR *_gdtAdLeftAndRight;
    QzoneFeedCellAdvContainerAttach *_advContainerAttach;
    QZJFeedsCellRedBonus *_jce_redBonus;
    NSMutableArray *_redBounsPayMans;
    QzoneFeedCellCanvas *_canvas;
    QzoneFeedCellCornerAdv *_cornerAdv;
    QzoneFeedCellLuckyMoney *_luckyMoney;
    QzoneFeedCellBottomRecomm *_bottomRecomm;
    QzoneFeedCellQBossPsvAdv *_qbossPsvAdv;
    QzoneFeedCellRecomTag *_recomTag;
    QzoneFeedCellNegativeFeedback *_negativeFeedback;
    QZLayoutInfo *_info;
    QZLayoutInfo *_videoSummaryInfo;
    long long _feedPageType;
    long long _srcFeedPageType;
    QzoneFeedCellPhotoLayer *_photoLayer;
    QZLayoutInfo *_jumpCellInfo;
    QZLayoutInfo *_detailLastSectionInfo;
    NSString *_feedInfo;
    NSString *_feedskey;
    NSString *_attachInfo;
    long long _index;
    NSDate *_sortTime;
    NSMutableArray *_updatedCells;
    NSArray *_groupFeedList;
    long long _subGroupIndex;
    NSMutableArray *_friGroupVideoList;
    QzoneFeedModel *_mainFeed;
    QzoneFeedTouchParam *_touchParam;
    long long _cellRow;
    NSString *_illegalMsg;
    long long _feedLevel;
    NSNumber *_layoutHashValue;
    NSDate *_displayDate;
    double _stayTime;
    NSMutableDictionary *_extraInfo;
    NSDictionary *_cgiReportParam;
    NSMutableDictionary *_cgiClickAttachement;
    double _advActionHeight;
    long long _containerSubType;
    NSString *_homePageNoFeedReminder;
    NSString *_homePageNoFeedSubReminder;
    long long _albumUin;
    double _updateFeedTime;
    NSDictionary *_updateFeedCheckSum;
    QzoneFeedCellFrdLikeContainer *_frdLikeContainer;
    unsigned long long _groupFeedCurrentPage;
    NSMutableDictionary *_summaryFontDic;
    NSMutableDictionary *_commentFontDic;
    NSArray *_needRefreshCells;
    NSString *_getFromFeedUGCKey;
    NSDictionary *_feedReportCookieOfClickFeed;
    NSIndexPath *_indexPath;
    NSString *_lkCacheKey;
    QzoneFeedCellFeedsDeco *_feedsDeco;
    long long _videoPlayScene;
}

+ (id)convertDictToFeedModel:(id)arg1;
+ (id)convertActiveToDetailModel:(id)arg1;
+ (id)convertPassiveToDetailModel:(id)arg1;
+ (id)convertFeedModelToOriginalFeedModel:(id)arg1;
+ (id)excludedPropertyKeys;
@property(nonatomic) long long videoPlayScene; // @synthesize videoPlayScene=_videoPlayScene;
@property(nonatomic) _Bool bDynamicNickName; // @synthesize bDynamicNickName=_bDynamicNickName;
@property(retain, nonatomic) QzoneFeedCellFeedsDeco *feedsDeco; // @synthesize feedsDeco=_feedsDeco;
@property(retain, nonatomic) NSString *lkCacheKey; // @synthesize lkCacheKey=_lkCacheKey;
@property(nonatomic) float birthInfoHeight; // @synthesize birthInfoHeight=_birthInfoHeight;
@property(nonatomic) _Bool feedBackMove; // @synthesize feedBackMove=_feedBackMove;
@property(nonatomic) float moveToOffset; // @synthesize moveToOffset=_moveToOffset;
@property(nonatomic) _Bool bPicureInvalide; // @synthesize bPicureInvalide=_bPicureInvalide;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool hasAudioAnimationPlayed; // @synthesize hasAudioAnimationPlayed=_hasAudioAnimationPlayed;
@property(copy, nonatomic) NSDictionary *feedReportCookieOfClickFeed; // @synthesize feedReportCookieOfClickFeed=_feedReportCookieOfClickFeed;
@property(retain, nonatomic) NSString *getFromFeedUGCKey; // @synthesize getFromFeedUGCKey=_getFromFeedUGCKey;
@property(nonatomic) _Bool isManualGetConcernRecomm; // @synthesize isManualGetConcernRecomm=_isManualGetConcernRecomm;
@property(nonatomic) _Bool isAppADDirected; // @synthesize isAppADDirected=_isAppADDirected;
@property(nonatomic) _Bool needRefreshComment; // @synthesize needRefreshComment=_needRefreshComment;
@property(retain, nonatomic) NSArray *needRefreshCells; // @synthesize needRefreshCells=_needRefreshCells;
@property(nonatomic) _Bool needRefreshContent; // @synthesize needRefreshContent=_needRefreshContent;
@property(nonatomic) _Bool needRefreshLike; // @synthesize needRefreshLike=_needRefreshLike;
@property(retain, nonatomic) NSMutableDictionary *commentFontDic; // @synthesize commentFontDic=_commentFontDic;
@property(retain, nonatomic) NSMutableDictionary *summaryFontDic; // @synthesize summaryFontDic=_summaryFontDic;
@property(nonatomic) _Bool isFloatLayerGuideModel; // @synthesize isFloatLayerGuideModel=_isFloatLayerGuideModel;
@property(nonatomic) _Bool commentLayoutDone; // @synthesize commentLayoutDone=_commentLayoutDone;
@property(nonatomic) _Bool likeLayoutDone; // @synthesize likeLayoutDone=_likeLayoutDone;
@property(nonatomic) _Bool infoLayoutDone; // @synthesize infoLayoutDone=_infoLayoutDone;
@property(nonatomic) _Bool isFromPassiveViewCtr; // @synthesize isFromPassiveViewCtr=_isFromPassiveViewCtr;
@property(nonatomic) unsigned long long groupFeedCurrentPage; // @synthesize groupFeedCurrentPage=_groupFeedCurrentPage;
@property(nonatomic) _Bool shouldIgnore; // @synthesize shouldIgnore=_shouldIgnore;
@property(nonatomic) _Bool frdContainerType; // @synthesize frdContainerType=_frdContainerType;
@property(retain, nonatomic) QzoneFeedCellFrdLikeContainer *frdLikeContainer; // @synthesize frdLikeContainer=_frdLikeContainer;
@property(nonatomic) _Bool medalExpose; // @synthesize medalExpose=_medalExpose;
@property(nonatomic) _Bool isAllDataResp; // @synthesize isAllDataResp=_isAllDataResp;
@property(nonatomic) _Bool shouldPullAll; // @synthesize shouldPullAll=_shouldPullAll;
@property(retain, nonatomic) NSDictionary *updateFeedCheckSum; // @synthesize updateFeedCheckSum=_updateFeedCheckSum;
@property(nonatomic) double updateFeedTime; // @synthesize updateFeedTime=_updateFeedTime;
@property(nonatomic) long long albumUin; // @synthesize albumUin=_albumUin;
@property(nonatomic) _Bool isFakeRedBonusFeed; // @synthesize isFakeRedBonusFeed=_isFakeRedBonusFeed;
@property(retain, nonatomic) NSString *homePageNoFeedSubReminder; // @synthesize homePageNoFeedSubReminder=_homePageNoFeedSubReminder;
@property(retain, nonatomic) NSString *homePageNoFeedReminder; // @synthesize homePageNoFeedReminder=_homePageNoFeedReminder;
@property(nonatomic) _Bool isDateFeedModel; // @synthesize isDateFeedModel=_isDateFeedModel;
@property(nonatomic) _Bool layoutSingleAdvVisitor; // @synthesize layoutSingleAdvVisitor=_layoutSingleAdvVisitor;
@property(nonatomic) _Bool inFloatLayer; // @synthesize inFloatLayer=_inFloatLayer;
@property(nonatomic) long long containerSubType; // @synthesize containerSubType=_containerSubType;
@property(nonatomic) double advActionHeight; // @synthesize advActionHeight=_advActionHeight;
@property(retain, nonatomic) NSMutableDictionary *cgiClickAttachement; // @synthesize cgiClickAttachement=_cgiClickAttachement;
@property(retain, nonatomic) NSDictionary *cgiReportParam; // @synthesize cgiReportParam=_cgiReportParam;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) _Bool dynamicAlbumAnimationHasPlayed; // @synthesize dynamicAlbumAnimationHasPlayed=_dynamicAlbumAnimationHasPlayed;
@property(nonatomic) double stayTime; // @synthesize stayTime=_stayTime;
@property(retain, nonatomic) NSDate *displayDate; // @synthesize displayDate=_displayDate;
@property(retain, nonatomic) NSNumber *layoutHashValue; // @synthesize layoutHashValue=_layoutHashValue;
@property(nonatomic) _Bool needFakeFeedAnimation; // @synthesize needFakeFeedAnimation=_needFakeFeedAnimation;
@property(nonatomic) long long feedLevel; // @synthesize feedLevel=_feedLevel;
@property(nonatomic) _Bool isFeedVisitReported; // @synthesize isFeedVisitReported=_isFeedVisitReported;
@property(nonatomic) _Bool isFeedExposureReported; // @synthesize isFeedExposureReported=_isFeedExposureReported;
@property(nonatomic) _Bool hasVideoStoppedEver; // @synthesize hasVideoStoppedEver=_hasVideoStoppedEver;
@property(nonatomic) _Bool notAdjustSeekTimeToZeroWhenIsEnd; // @synthesize notAdjustSeekTimeToZeroWhenIsEnd=_notAdjustSeekTimeToZeroWhenIsEnd;
@property(nonatomic) _Bool isVideoPlayed; // @synthesize isVideoPlayed=_isVideoPlayed;
@property(nonatomic) _Bool isFirstEventFeed; // @synthesize isFirstEventFeed=_isFirstEventFeed;
@property(nonatomic) _Bool isCrashedFeed; // @synthesize isCrashedFeed=_isCrashedFeed;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(retain, nonatomic) NSString *illegalMsg; // @synthesize illegalMsg=_illegalMsg;
@property(nonatomic) _Bool isIllegalVideo; // @synthesize isIllegalVideo=_isIllegalVideo;
@property(nonatomic) _Bool hasAddFriend; // @synthesize hasAddFriend=_hasAddFriend;
@property(nonatomic) _Bool isConcernFamousFeed; // @synthesize isConcernFamousFeed=_isConcernFamousFeed;
@property(nonatomic) long long cellRow; // @synthesize cellRow=_cellRow;
@property(nonatomic) _Bool isLayoutGroup; // @synthesize isLayoutGroup=_isLayoutGroup;
@property(retain, nonatomic) QzoneFeedTouchParam *touchParam; // @synthesize touchParam=_touchParam;
@property(nonatomic) __weak QzoneFeedModel *mainFeed; // @synthesize mainFeed=_mainFeed;
@property(retain, nonatomic) NSMutableArray *friGroupVideoList; // @synthesize friGroupVideoList=_friGroupVideoList;
@property(nonatomic) long long subGroupIndex; // @synthesize subGroupIndex=_subGroupIndex;
@property(retain, nonatomic) NSArray *groupFeedList; // @synthesize groupFeedList=_groupFeedList;
@property(nonatomic) _Bool disableCommentInputBar; // @synthesize disableCommentInputBar=_disableCommentInputBar;
@property(nonatomic) _Bool userInteractionDisable; // @synthesize userInteractionDisable=_userInteractionDisable;
@property(retain, nonatomic) NSMutableArray *updatedCells; // @synthesize updatedCells=_updatedCells;
@property(retain, nonatomic) NSDate *sortTime; // @synthesize sortTime=_sortTime;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *attachInfo; // @synthesize attachInfo=_attachInfo;
@property(retain, nonatomic) NSString *feedskey; // @synthesize feedskey=_feedskey;
@property(retain, nonatomic) NSString *feedInfo; // @synthesize feedInfo=_feedInfo;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(nonatomic) _Bool isShortVideoFeedExposed; // @synthesize isShortVideoFeedExposed=_isShortVideoFeedExposed;
@property(nonatomic) _Bool isPlayFeedExposed; // @synthesize isPlayFeedExposed=_isPlayFeedExposed;
@property(nonatomic) _Bool isQBossExposed; // @synthesize isQBossExposed=_isQBossExposed;
@property(nonatomic) _Bool isADExposed; // @synthesize isADExposed=_isADExposed;
@property(nonatomic) _Bool isVideoExposed; // @synthesize isVideoExposed=_isVideoExposed;
@property(nonatomic) _Bool isLiveExposed; // @synthesize isLiveExposed=_isLiveExposed;
@property(nonatomic) _Bool hasAddDropButtonItem; // @synthesize hasAddDropButtonItem=_hasAddDropButtonItem;
@property(nonatomic) _Bool isFakeAnimation; // @synthesize isFakeAnimation=_isFakeAnimation;
@property(nonatomic) _Bool isFakeFeed; // @synthesize isFakeFeed=_isFakeFeed;
@property(nonatomic) _Bool hasOperateButton; // @synthesize hasOperateButton=_hasOperateButton;
@property(nonatomic) _Bool isAppList; // @synthesize isAppList=_isAppList;
@property(nonatomic) _Bool isPassive; // @synthesize isPassive=_isPassive;
@property(retain, nonatomic) QZLayoutInfo *detailLastSectionInfo; // @synthesize detailLastSectionInfo=_detailLastSectionInfo;
@property(retain, nonatomic) QZLayoutInfo *jumpCellInfo; // @synthesize jumpCellInfo=_jumpCellInfo;
@property(retain, nonatomic) QzoneFeedCellPhotoLayer *photoLayer; // @synthesize photoLayer=_photoLayer;
@property(nonatomic) long long srcFeedPageType; // @synthesize srcFeedPageType=_srcFeedPageType;
@property(nonatomic) long long feedPageType; // @synthesize feedPageType=_feedPageType;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) _Bool useOldTextInfo; // @synthesize useOldTextInfo=_useOldTextInfo;
@property(retain, nonatomic) QZLayoutInfo *videoSummaryInfo; // @synthesize videoSummaryInfo=_videoSummaryInfo;
@property(retain, nonatomic) QZLayoutInfo *info; // @synthesize info=_info;
@property(nonatomic) _Bool shouldHasAutoPlayToken; // @synthesize shouldHasAutoPlayToken=_shouldHasAutoPlayToken;
@property(nonatomic) _Bool willNotBeCached; // @synthesize willNotBeCached=_willNotBeCached;
@property(retain, nonatomic) QzoneFeedCellNegativeFeedback *negativeFeedback; // @synthesize negativeFeedback=_negativeFeedback;
@property(retain, nonatomic) QzoneFeedCellRecomTag *recomTag; // @synthesize recomTag=_recomTag;
@property(retain, nonatomic) QzoneFeedCellQBossPsvAdv *qbossPsvAdv; // @synthesize qbossPsvAdv=_qbossPsvAdv;
@property(retain, nonatomic) QzoneFeedCellBottomRecomm *bottomRecomm; // @synthesize bottomRecomm=_bottomRecomm;
@property(retain, nonatomic) QzoneFeedCellLuckyMoney *luckyMoney; // @synthesize luckyMoney=_luckyMoney;
@property(retain, nonatomic) QzoneFeedCellCornerAdv *cornerAdv; // @synthesize cornerAdv=_cornerAdv;
@property(retain, nonatomic) QzoneFeedCellCanvas *canvas; // @synthesize canvas=_canvas;
@property(retain, nonatomic) NSMutableArray *redBounsPayMans; // @synthesize redBounsPayMans=_redBounsPayMans;
@property(retain, nonatomic) QZJFeedsCellRedBonus *jce_redBonus; // @synthesize jce_redBonus=_jce_redBonus;
@property(retain, nonatomic) QzoneFeedCellAdvContainerAttach *advContainerAttach; // @synthesize advContainerAttach=_advContainerAttach;
@property(retain, nonatomic) QzoneFeedCellGdtAdLR *gdtAdLeftAndRight; // @synthesize gdtAdLeftAndRight=_gdtAdLeftAndRight;
@property(retain, nonatomic) QzoneFeedCellCover *cover; // @synthesize cover=_cover;
@property(retain, nonatomic) QzoneFeedCellInterest *interestInfo; // @synthesize interestInfo=_interestInfo;
@property(retain, nonatomic) QzoneFeedCellFollowGuide *feedFollowGuide; // @synthesize feedFollowGuide=_feedFollowGuide;
@property(retain, nonatomic) QzoneFeedCellPicText *feedPicText; // @synthesize feedPicText=_feedPicText;
@property(retain, nonatomic) QzoneFeedCellViewMore *feedViewMore; // @synthesize feedViewMore=_feedViewMore;
@property(retain, nonatomic) QzoneFeedCellTemplate *feedTemplate; // @synthesize feedTemplate=_feedTemplate;
@property(retain, nonatomic) QzoneFeedCellGuiding *guiding; // @synthesize guiding=_guiding;
@property(retain, nonatomic) QzoneFeedCellLive *live; // @synthesize live=_live;
@property(retain, nonatomic) QzoneFeedGiftCombine *specialBirthGift; // @synthesize specialBirthGift=_specialBirthGift;
@property(retain, nonatomic) QzoneFeedCellSpecialCare *specialCare; // @synthesize specialCare=_specialCare;
@property(retain, nonatomic) QzoneFeedCellRecommItem *recommItem; // @synthesize recommItem=_recommItem;
@property(retain, nonatomic) QzoneFeedCellRecommAction *recommAction; // @synthesize recommAction=_recommAction;
@property(retain, nonatomic) QzoneFeedCellRecommHeader *recommHeader; // @synthesize recommHeader=_recommHeader;
@property(retain, nonatomic) QZLayoutInfo *shareThumbInfo; // @synthesize shareThumbInfo=_shareThumbInfo;
@property(retain, nonatomic) QZJFeedsCellLeftThumb *jce_shareThumb; // @synthesize jce_shareThumb=_jce_shareThumb;
@property(retain, nonatomic) QzoneFeedCellPermission *permission; // @synthesize permission=_permission;
@property(retain, nonatomic) QZLayoutInfo *referLayoutInfo; // @synthesize referLayoutInfo=_referLayoutInfo;
@property(retain, nonatomic) QZJFeedsCellRefer *jce_refer; // @synthesize jce_refer=_jce_refer;
@property(retain, nonatomic) QzoneFeedCellAudio *audio; // @synthesize audio=_audio;
@property(retain, nonatomic) QZLayoutInfo *detailBottomAdLayoutInfo; // @synthesize detailBottomAdLayoutInfo=_detailBottomAdLayoutInfo;
@property(retain, nonatomic) QzoneFeedCellVisitor *visitor; // @synthesize visitor=_visitor;
@property(retain, nonatomic) QzoneFeedCellOperation *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) QzoneFeedCellContent *content; // @synthesize content=_content;
@property(retain, nonatomic) QzoneFeedModel *original; // @synthesize original=_original;
@property(retain, nonatomic) QzoneFeedCellCampusShareCard *campusShareCard; // @synthesize campusShareCard=_campusShareCard;
@property(retain, nonatomic) QzoneFeedCellShare *share; // @synthesize share=_share;
@property(retain, nonatomic) QzoneFeedCellForwardList *frdList; // @synthesize frdList=_frdList;
@property(retain, nonatomic) QzoneFeedCellDecorate *decorate; // @synthesize decorate=_decorate;
@property(retain, nonatomic) QzoneFeedCellForward *forward; // @synthesize forward=_forward;
@property(retain, nonatomic) QzoneFeedCellLike *like; // @synthesize like=_like;
@property(retain, nonatomic) QzoneFeedCellComment *essenceComment; // @synthesize essenceComment=_essenceComment;
@property(retain, nonatomic) QzoneFeedCellComment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) QzoneFeedCellRemark *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) QzoneFeedCellLBS *lbs; // @synthesize lbs=_lbs;
@property(retain, nonatomic) QzoneFeedCellGift *gift; // @synthesize gift=_gift;
@property(retain, nonatomic) QzoneFeedCellVideo *video; // @synthesize video=_video;
@property(retain, nonatomic) QzoneFeedCellMusic *music; // @synthesize music=_music;
@property(retain, nonatomic) QzoneFeedCellSeparator *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) QzoneFeedCellPicture *picture; // @synthesize picture=_picture;
@property(retain, nonatomic) QzoneFeedCellSummary *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) QzoneFeedCellTitle *title; // @synthesize title=_title;
@property(retain, nonatomic) QzoneFeedCellID *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) QzoneFeedCellUser *user; // @synthesize user=_user;
@property(retain, nonatomic) QzoneFeedCellComm *comm; // @synthesize comm=_comm;
- (void).cxx_destruct;
- (_Bool)isBrandUgcSelfMediaAdv;
- (_Bool)isUgcShowcaseAdvFeeds;
- (id)feedSkin;
- (_Bool)firstIndexFeed;
- (_Bool)isOriginVideo;
- (void)dealloc;
- (void)setCommentInfo:(id)arg1;
- (void)setLikeInfo:(id)arg1;
- (id)printRedBonusList;
- (_Bool)hasMoreComment;
- (_Bool)useLayoutKitJS;
- (_Bool)useLayoutKit;
- (_Bool)needLayoutLeftThumb;
- (_Bool)canHideSecretComment;
- (_Bool)isNeedShowEssenceComment;
- (_Bool)isGroupSquareAd;
- (id)dropDownMenuItemTextWithOpType:(int)arg1;
- (_Bool)enableQuote;
- (_Bool)enableSetTopFeed;
- (long long)getFeedLevel;
- (_Bool)hasIllegalVideoStatus;
- (_Bool)hasShareToWXButton;
- (_Bool)hasShareToQQButton;
- (_Bool)hasDropDownMenu;
- (id)dropDownMenuItems;
- (id)customDropMenuItems;
- (_Bool)isFMFeed;
- (_Bool)needInputBarInFeeds;
- (_Bool)needCommentBar;
- (_Bool)isActionFeed;
- (void)reform;
- (_Bool)supportQuickComment;
- (_Bool)isFakeSeparatorModel;
- (id)genSepartorModel;
- (_Bool)isQbossFeed;
- (_Bool)ifShowCustomEmotionTab;
- (_Bool)isShowGifComment;
- (_Bool)isRedBonusIconEnable;
- (_Bool)isShowRedBouns;
- (_Bool)isPlayFeed;
- (_Bool)isSign;
- (_Bool)needAddStarAtHeader;
- (_Bool)isTodayInHistory;
- (_Bool)needReportToQboss;
- (_Bool)isFamousSpaceUserFeed;
- (_Bool)isFamousSpaceFeed;
- (_Bool)isYunYingFeed;
- (_Bool)isPurchaseFeed;
- (double)feedExposureTime;
- (_Bool)shouldReportFeedExposure;
- (id)getCannotFavourMessage;
- (id)getUgcKey;
- (id)getFavourParams;
- (id)getSortTime;
- (void)printGDTFeedLog:(int)arg1;
- (id)getPermissionTips;
- (_Bool)isFeedWithoutTimeAndDescRow;
- (_Bool)isSingleFamousAdv;
- (_Bool)isRecomTypeFamousQzone;
- (_Bool)isMyEventTags;
- (_Bool)isLayoutRecomPicUp;
- (_Bool)isSchoolFollow;
- (_Bool)isPeopleYouMayKnowFeed;
- (_Bool)isRecomTag;
- (_Bool)isNativeAdvMode;
- (_Bool)isGDTSmallHeaderIconStyle;
- (_Bool)isGDTVideoTopAdvFeed;
- (_Bool)isGDTMicroVideoFeed;
- (_Bool)isCanvasFeed;
- (_Bool)isReportRecomGroupFeed;
- (_Bool)isRecomGroupFeed;
- (_Bool)isSecretMood;
- (id)convertToDetailGroupModel;
- (_Bool)isGDTDetailGroupFeed;
- (_Bool)isGDTFeed;
- (_Bool)isGDTVideoShareFeed;
- (_Bool)isPictureVideoMixedFeed;
- (_Bool)isPopAdv;
- (_Bool)isBrandUgcAdv;
- (_Bool)isWeishiVideoContainer;
- (_Bool)isWeishiFeed;
- (_Bool)isGDTVideoFeed;
- (_Bool)isVideoFeed;
- (_Bool)needCompactDisplayVideo;
- (id)getFirstVideo;
- (_Bool)needInstalledFilter;
- (_Bool)isPassiveAdvFeed;
- (_Bool)isAppAdvFeed;
- (_Bool)isFavouriteFeed;
- (_Bool)isEventFeed;
- (_Bool)isRecomLiveCell;
- (id)getLiveCell;
- (_Bool)isLiveOnline;
- (_Bool)isLiveCell;
- (_Bool)isHomePageRemindFeed;
- (_Bool)isSpecialCareInsideCell;
- (_Bool)isSpecialCareOutsideCell;
- (_Bool)isSpecialCareCell;
- (_Bool)isMainFeed;
- (_Bool)isFeedFollowGuide;
- (_Bool)isRecommFrdShortVideoOutside;
- (_Bool)isRecommFrdShortVideoContainer;
- (_Bool)isRecomHotVideoOutSide;
- (_Bool)isRecomHotVideoInside;
- (long long)getAdvVideoJumpType;
- (_Bool)isAdvRelationChain;
- (_Bool)isAdvContainerThreeGridStyle;
- (_Bool)isSingleAdvType;
- (_Bool)isLogoAdv;
- (_Bool)isSelfMeidaAdvBarFeed;
- (_Bool)isAdvForwardFeed;
- (_Bool)isExistDroplistFollowButton;
- (_Bool)IsRealTimeTTTReportFeed;
- (_Bool)isFirstPlaceRecomFeed;
- (_Bool)isMayKnowFriendFeed;
- (_Bool)isFrdLikeFamousFeed;
- (_Bool)isFriendTogetherFeed;
- (_Bool)needYunYingReport;
- (_Bool)needAddAdTagAfterName;
- (_Bool)isOutLinkFeed;
- (_Bool)isNotTimerSortFeed;
- (_Bool)needThemeReport;
- (_Bool)needAdGdtNewReport;
- (_Bool)needAdReport;
- (long long)getCommentUinForPassiveFeed;
- (id)getCommentIDForPassiveFeed;
- (long long)getTopicUinForPassiveFeed;
- (id)getTopicIDForPassiveFeed;
- (_Bool)onlyExposureBodyLine;
- (_Bool)feedIsReportClick;
- (long long)feedExposureLineNum;
- (_Bool)isTagEventFeed;
- (_Bool)isFamousRecommAdvFeed;
- (_Bool)isQbossPurchaseFeeds;
- (_Bool)isTihFeed;
- (_Bool)isCustomPageAd;
- (_Bool)isForwardInteractionAdv;
- (_Bool)isNavtieInteractionAdv;
- (_Bool)isInteractionAdv;
- (_Bool)hasCommentBtn;
- (_Bool)hasQuoteBtn;
- (_Bool)hasQuickForwardBtn;
- (_Bool)hasForwardBtn;
- (_Bool)showDescUnderNickName;
- (_Bool)showTimeUnderNickName;
- (_Bool)isSupportCustomPraiseTap;
- (_Bool)isOperateKuaiPing;
- (_Bool)isOperateAllowApplication;
- (_Bool)isOperateApproved;
- (_Bool)isOperateLookup;
- (_Bool)isSupportPicComment;
- (_Bool)isOperateReturnGift;
- (_Bool)isPassiveFeedOperateComment;
- (long long)blogContentNum;
- (_Bool)isSpecialBirth;
- (_Bool)hasComment;
- (_Bool)hasVisitor;
- (_Bool)hasLike;
- (_Bool)isCmtVerifyOpen;
- (_Bool)hasShootLBS;
- (_Bool)needForwardBgColor;
- (_Bool)isForwardFeed;
- (int)campusShareType;
- (_Bool)isCampusShareCard;
- (_Bool)isVideoMood;
- (_Bool)isAudioMood;
- (_Bool)isMessage;
- (_Bool)isMood;
- (_Bool)isBlog;
- (_Bool)enableReply;
- (_Bool)enableDelReply;
- (_Bool)enableDelComment;
- (_Bool)compareWithUgcKey:(id)arg1 clientKey:(id)arg2;
- (_Bool)compareToUniKey:(id)arg1;
- (_Bool)compareToFeedsKey:(id)arg1;
- (long long)comparebytime:(id)arg1;
- (id)getSubKey:(long long)arg1;
- (id)getPrimaryKey;
- (id)getIdentityFromURL:(id)arg1;
- (id)feedsKey;
- (id)ugcKey;
- (id)videoReportString;
- (id)clientKey;
- (void)traceSimpleInfo;
- (id)getPassiveCommentWithCmtId:(id)arg1 cmtClientId:(id)arg2 commentType:(long long)arg3;
- (id)getCommentWithCmtId:(id)arg1 cmtClientId:(id)arg2 commentType:(long long)arg3;
- (_Bool)removePhotoWithId:(id)arg1;
- (long long)getPhotoCount;
- (_Bool)delReplyForPassiveFeedWithCmtId:(id)arg1 cmtClientId:(id)arg2 replyId:(id)arg3 replyClientId:(id)arg4;
- (_Bool)delCommentForPassiveFeedWithCmtId:(id)arg1 cmtClientId:(id)arg2;
- (_Bool)deleteCommentReply:(id)arg1 withReplyId:(id)arg2 commentType:(long long)arg3;
- (_Bool)delReplyWithCmtId:(id)arg1 cmtClientId:(id)arg2 replyId:(id)arg3 replyClientId:(id)arg4;
- (_Bool)delCommentWithCmtId:(id)arg1 cmtClientId:(id)arg2;
- (_Bool)updateCommentReply:(id)arg1 withReply:(id)arg2 commentType:(long long)arg3;
- (void)updateReplyForFeed:(id)arg1 commentId:(id)arg2;
- (void)updateReplyForPassiveFeed:(id)arg1;
- (void)updateCommentForPassiveFeed:(id)arg1;
- (void)updateGroupFeeds;
- (void)insertFeedCommentList:(id)arg1;
- (void)updateCommentForFeed:(id)arg1;
- (void)updateDetailCommentLike:(id)arg1 isLiked:(_Bool)arg2 likeNum:(long long)arg3 loginUin:(long long)arg4;
- (void)updateLike:(id)arg1 isLiked:(_Bool)arg2 loginUin:(long long)arg3 useCustomPraise:(_Bool)arg4;
- (void)updateFakeCustomPraise:(id)arg1;
- (void)clearInfos;
- (_Bool)needHideNick;
- (_Bool)needHideLogo;
- (_Bool)isQuickMessageFeed;
- (long long)adsType;
- (id)getUpdateCommentInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (long long)albumTypeWithSchema:(id)arg1;
- (id)setupPictureModelWithSchema:(id)arg1;
- (void)copyPictureModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool redBonusIsFakeRedbonus; // @dynamic redBonusIsFakeRedbonus;
@property(retain, nonatomic) QzoneFeedPicture *shareThumbPicture; // @dynamic shareThumbPicture;
@property(retain, nonatomic) QzoneCommSparkleWord *shareThumbSparkleWord; // @dynamic shareThumbSparkleWord;
@property(retain, nonatomic) QzoneFeedUser *shareThumbUser; // @dynamic shareThumbUser;
@property(readonly) Class superclass;

@end

