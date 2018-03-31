//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZoneModel.h>

@class MQZPhotoPoiInfo, NSArray, NSMutableDictionary, NSNumber, NSString, QZJFeedsCellComm, QZJFeedsCellComment, QZJFeedsCellId, QZJFeedsCellLike, QZJFeedsCellOperation, QZJPhotoAlbum, QzoneAlbumShareInfo, QzoneFeedVideo;

@interface QzonePhotoModel : QZoneModel
{
    _Bool _videoReachLimit;
    _Bool _isShare;
    _Bool _isSelect;
    long long _smallWidth;
    long long _smallHeight;
    unsigned long long _flag;
    long long _picCategory;
    NSString *_displayDesc;
    long long _opmask;
    long long _videoflag;
    QzoneFeedVideo *_cellVideo;
    NSString *_albumName;
    QZJPhotoAlbum *_photoAlbum;
    QzoneAlbumShareInfo *_shareInfo;
    QZJFeedsCellComm *_feedsCellComm;
    QZJFeedsCellId *_feedsCellId;
    QZJFeedsCellOperation *_feedsCellOperation;
    QZJFeedsCellLike *_feedsCellLike;
    QZJFeedsCellComment *_feedsCellComment;
    long long _picDataBatchID;
    long long _similiarGroupNum;
    long long _sectionIndexInEventDetail;
    NSArray *_facelist;
    unsigned long long _originSize;
}

+ (id)convertToQzonePhotoMode:(id)arg1;
+ (id)convertFromPicData:(id)arg1;
+ (id)convertFromPhoto:(id)arg1;
+ (id)displayAgeStr:(id)arg1 withBirthTime:(int)arg2;
+ (id)displayTimeLineStr:(id)arg1 withReferenceTime:(int)arg2;
+ (int)getShootTime:(int)arg1;
+ (id)commonEventTitle:(long long)arg1 seperateSection:(long long)arg2;
+ (id)multiConvertToCollectionPhotoModelsFrom:(id)arg1;
+ (id)parentConvertToCollectionPhotoModelsFrom:(id)arg1 timeLineArray:(id)arg2 birthday:(int)arg3 timeEvent:(id)arg4;
+ (id)loverConvertToCollectionPhotoModelsFrom:(id)arg1 timeLineArray:(id)arg2 loverday:(int)arg3 bigEvents:(id)arg4;
+ (id)untimeCollectionModel:(id)arg1;
+ (id)travelConvertToCollectionPhotoModelsFrom:(id)arg1 poiAreaArray:(id)arg2;
+ (id)commonConvertToCollectionPhotoModelsFrom:(id)arg1 seperateSection:(long long)arg2;
+ (id)commonConvertToEventPhotoModelsFrom:(id)arg1 seperateByUploadTime:(_Bool)arg2 seperateSection:(long long)arg3;
+ (id)eventModelfromPhotoModel:(id)arg1 seperateByUploadTime:(_Bool)arg2 seperateSection:(long long)arg3;
@property(nonatomic) unsigned long long originSize; // @synthesize originSize=_originSize;
@property(copy, nonatomic) NSArray *facelist; // @synthesize facelist=_facelist;
@property(nonatomic) long long sectionIndexInEventDetail; // @synthesize sectionIndexInEventDetail=_sectionIndexInEventDetail;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(nonatomic) _Bool isShare; // @synthesize isShare=_isShare;
@property(nonatomic) long long similiarGroupNum; // @synthesize similiarGroupNum=_similiarGroupNum;
@property(nonatomic) _Bool videoReachLimit; // @synthesize videoReachLimit=_videoReachLimit;
@property(nonatomic) long long picDataBatchID; // @synthesize picDataBatchID=_picDataBatchID;
@property(retain, nonatomic) QZJFeedsCellComment *feedsCellComment; // @synthesize feedsCellComment=_feedsCellComment;
@property(retain, nonatomic) QZJFeedsCellLike *feedsCellLike; // @synthesize feedsCellLike=_feedsCellLike;
@property(retain, nonatomic) QZJFeedsCellOperation *feedsCellOperation; // @synthesize feedsCellOperation=_feedsCellOperation;
@property(retain, nonatomic) QZJFeedsCellId *feedsCellId; // @synthesize feedsCellId=_feedsCellId;
@property(retain, nonatomic) QZJFeedsCellComm *feedsCellComm; // @synthesize feedsCellComm=_feedsCellComm;
@property(retain, nonatomic) QzoneAlbumShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) QZJPhotoAlbum *photoAlbum; // @synthesize photoAlbum=_photoAlbum;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) QzoneFeedVideo *cellVideo; // @synthesize cellVideo=_cellVideo;
@property(nonatomic) long long videoflag; // @synthesize videoflag=_videoflag;
@property(nonatomic) long long opmask; // @synthesize opmask=_opmask;
@property(retain, nonatomic) NSString *displayDesc; // @synthesize displayDesc=_displayDesc;
@property(nonatomic) long long picCategory; // @synthesize picCategory=_picCategory;
@property(nonatomic) unsigned long long flag; // @synthesize flag=_flag;
@property(nonatomic) long long smallHeight; // @synthesize smallHeight=_smallHeight;
@property(nonatomic) long long smallWidth; // @synthesize smallWidth=_smallWidth;
- (void).cxx_destruct;
- (_Bool)isSamePhoto:(id)arg1;
- (_Bool)isPanoramaPhoto;
- (_Bool)unablePlayVideo;
- (_Bool)isEqual:(id)arg1;
- (_Bool)checkIsSamePhotoByURL:(id)arg1 another:(id)arg2;
- (_Bool)checkHasSubURL:(id)arg1 part:(id)arg2;
- (void)setupPhotoFeedModel:(id)arg1;
- (id)convertToQzoneFeedModel:(int)arg1 ownernick:(id)arg2;
- (void)setTihBusiParam;
- (id)getDescDraftKey;
- (id)getSharedDraftKey;
- (id)getCommentDraftKey;
- (id)getIdentity;

// Remaining properties
@property(retain, nonatomic) NSString *aioGroupUin; // @dynamic aioGroupUin;
@property(retain, nonatomic) NSNumber *aioMsgTime; // @dynamic aioMsgTime;
@property(retain, nonatomic) NSString *aioUUID; // @dynamic aioUUID;
@property(retain, nonatomic) NSString *albumID; // @dynamic albumID;
@property(nonatomic) long long appid; // @dynamic appid;
@property(nonatomic) long long batchId; // @dynamic batchId;
@property(retain, nonatomic) NSString *bigURL; // @dynamic bigURL;
@property(retain, nonatomic) NSMutableDictionary *busiParam; // @dynamic busiParam;
@property(retain, nonatomic) QZoneModel *chatModel; // @dynamic chatModel;
@property(retain, nonatomic) NSString *clientKey; // @dynamic clientKey;
@property(nonatomic) long long commentNum; // @dynamic commentNum;
@property(retain, nonatomic) NSString *curkey; // @dynamic curkey;
@property(copy, nonatomic) NSString *currentURL; // @dynamic currentURL;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSArray *faceList; // @dynamic faceList;
@property(nonatomic) long long feedLevel; // @dynamic feedLevel;
@property(copy, nonatomic) NSString *fileID; // @dynamic fileID;
@property(nonatomic) long long groupCode; // @dynamic groupCode;
@property(retain, nonatomic) NSString *headPicURL; // @dynamic headPicURL;
@property(nonatomic) long long height; // @dynamic height;
@property(copy, nonatomic) NSString *lloc; // @dynamic lloc;
@property(nonatomic) _Bool mePraise; // @dynamic mePraise;
@property(nonatomic) long long opSyncFlag; // @dynamic opSyncFlag;
@property(retain, nonatomic) NSString *orignalURL; // @dynamic orignalURL;
@property(retain, nonatomic) NSArray *photoTagList; // @dynamic photoTagList;
@property(retain, nonatomic) NSString *picHostNick; // @dynamic picHostNick;
@property(nonatomic) long long picHostUin; // @dynamic picHostUin;
@property(retain, nonatomic) NSMutableDictionary *picsEnLargeRate; // @dynamic picsEnLargeRate;
@property(nonatomic) long long praiseNum; // @dynamic praiseNum;
@property(nonatomic) long long quanFlag; // @dynamic quanFlag;
@property(nonatomic) unsigned long long raw; // @dynamic raw;
@property(nonatomic) long long shareNum; // @dynamic shareNum;
@property(nonatomic) int shoottime; // @dynamic shoottime;
@property(retain, nonatomic) NSString *sloc; // @dynamic sloc;
@property(retain, nonatomic) MQZPhotoPoiInfo *stPoi; // @dynamic stPoi;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) long long type; // @dynamic type;
@property(nonatomic) long long uin; // @dynamic uin;
@property(retain, nonatomic) NSString *unikey; // @dynamic unikey;
@property(nonatomic) int uploadtime; // @dynamic uploadtime;
@property(nonatomic) long long width; // @dynamic width;

@end

