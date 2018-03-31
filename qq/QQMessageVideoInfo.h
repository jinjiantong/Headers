//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSDictionary, NSString;

@interface QQMessageVideoInfo : QQModel
{
    _Bool bvideoPaused;
    _Bool supportProgressive;
    _Bool reportFlag;
    _Bool _tinyVideoMerging;
    _Bool _isPreUploading;
    _Bool _delayRefreshFlag;
    _Bool _showQIMTail;
    unsigned int filetime;
    unsigned int thumbWidth;
    unsigned int thumbHeight;
    unsigned int videoFormat;
    unsigned int firstIP;
    float fvideoProgress;
    int errorCode;
    unsigned int videoAttr;
    unsigned int _subBusiType;
    unsigned int _specialVideoType;
    unsigned int _redEnvelopeType;
    unsigned int _videoMsgTailType;
    NSString *name;
    NSString *uuid;
    NSString *md5;
    NSString *thumbMd5;
    NSString *thumbPath;
    NSString *videoPath;
    unsigned long long fileLen;
    NSString *firstUKey;
    NSString *videoSource;
    unsigned long long busicessType;
    NSDictionary *assetInfo;
    NSArray *_broadcastUins;
    NSString *_hotSourceIcon;
    NSString *_hotTitle;
    NSString *_hotUrl;
    NSString *_hotSubIcon;
    NSString *_shortVideoId;
    NSString *_animojiModelId;
}

+ (id)parseFromJson:(id)arg1;
+ (id)toJson:(id)arg1;
@property(retain, nonatomic) NSString *animojiModelId; // @synthesize animojiModelId=_animojiModelId;
@property(nonatomic) unsigned int videoMsgTailType; // @synthesize videoMsgTailType=_videoMsgTailType;
@property(retain, nonatomic) NSString *shortVideoId; // @synthesize shortVideoId=_shortVideoId;
@property(nonatomic) unsigned int redEnvelopeType; // @synthesize redEnvelopeType=_redEnvelopeType;
@property(nonatomic) _Bool showQIMTail; // @synthesize showQIMTail=_showQIMTail;
@property(nonatomic) unsigned int specialVideoType; // @synthesize specialVideoType=_specialVideoType;
@property(retain, nonatomic) NSString *hotSubIcon; // @synthesize hotSubIcon=_hotSubIcon;
@property(retain, nonatomic) NSString *hotUrl; // @synthesize hotUrl=_hotUrl;
@property(retain, nonatomic) NSString *hotTitle; // @synthesize hotTitle=_hotTitle;
@property(retain, nonatomic) NSString *hotSourceIcon; // @synthesize hotSourceIcon=_hotSourceIcon;
@property(nonatomic) _Bool delayRefreshFlag; // @synthesize delayRefreshFlag=_delayRefreshFlag;
@property(retain, nonatomic) NSArray *broadcastUins; // @synthesize broadcastUins=_broadcastUins;
@property(nonatomic) unsigned int subBusiType; // @synthesize subBusiType=_subBusiType;
@property(nonatomic) _Bool isPreUploading; // @synthesize isPreUploading=_isPreUploading;
@property(nonatomic) _Bool tinyVideoMerging; // @synthesize tinyVideoMerging=_tinyVideoMerging;
@property(nonatomic) _Bool reportFlag; // @synthesize reportFlag;
@property(nonatomic) unsigned int videoAttr; // @synthesize videoAttr;
@property(nonatomic) _Bool supportProgressive; // @synthesize supportProgressive;
@property(nonatomic) int errorCode; // @synthesize errorCode;
@property(retain, nonatomic) NSDictionary *assetInfo; // @synthesize assetInfo;
@property(nonatomic) unsigned long long busicessType; // @synthesize busicessType;
@property(retain, nonatomic) NSString *videoSource; // @synthesize videoSource;
@property(nonatomic) _Bool bvideoPaused; // @synthesize bvideoPaused;
@property(nonatomic) float fvideoProgress; // @synthesize fvideoProgress;
@property(nonatomic) unsigned int firstIP; // @synthesize firstIP;
@property(retain, nonatomic) NSString *firstUKey; // @synthesize firstUKey;
@property(nonatomic) unsigned int videoFormat; // @synthesize videoFormat;
@property(nonatomic) unsigned int thumbHeight; // @synthesize thumbHeight;
@property(nonatomic) unsigned int thumbWidth; // @synthesize thumbWidth;
@property(nonatomic) unsigned int filetime; // @synthesize filetime;
@property(nonatomic) unsigned long long fileLen; // @synthesize fileLen;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath;
@property(retain, nonatomic) NSString *thumbMd5; // @synthesize thumbMd5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(copy) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (_Bool)updateWithMd5:(id)arg1;
- (id)description;
- (_Bool)isThumbExist;
- (id)getUUID;
- (_Bool)isValidModel;
- (void)getValue:(id)arg1;
- (void)setJsonValue:(id)arg1;
- (void)parseFromJson:(id)arg1;
- (id)toJson;
- (void)dealloc;

@end

