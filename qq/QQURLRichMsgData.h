//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class NSNumber, NSString, UIImage;

@interface QQURLRichMsgData : NSObject <NSCopying>
{
    NSString *_urlStr;
    NSString *_title;
    NSString *_summary;
    NSString *_brief;
    NSString *_comment;
    NSString *_previewImageURL;
    UIImage *_previewImage;
    NSString *_appID;
    NSString *_flashUrl;
    NSString *_toUIN;
    NSNumber *_uinType;
    NSString *_shareType;
    int _shareQQType;
    NSString *_srcName;
    NSString *_src_Action;
    NSString *_src_IconUrl;
    NSString *_src_WebActionUrl;
    NSString *_src_ActionData;
    NSString *_src_A_ActionData;
    NSString *_src_I_ActionData;
    NSNumber *_shareChannel;
    NSNumber *_needPopBack;
    NSNumber *_keepShareUrl;
    NSString *_callBack;
    NSString *_orgUrlStr;
    NSString *_hyperText;
    NSString *_srcUrl;
    NSString *_srcIconUrl;
    NSString *_srcActionData;
    NSString *_fwflag;
    _Bool _isForceNet;
    NSString *_scheme;
    NSString *_serviceID;
    NSString *_actionData;
    NSString *_coverUrl;
    NSString *_sourceName;
    int _articleId;
    long long _iUrlInfoFrm;
    long long _iRichFrom;
    NSString *_arkContent;
    int _WXShareSourceFrom;
    _Bool _isTribeShortVideo;
    NSString *_tribeVideoVid;
    NSString *_tribeVideoTheme;
    NSString *_tribeVideoUrl;
    NSString *_tribeCoverUrl;
    int _tribeVideoWidth;
    int _tribeVideoHeight;
    NSString *_sourceUrl;
    NSString *_tribeName;
    NSString *_tribeBid;
    NSString *_tribePid;
    int _xo;
    NSString *flag;
    UIImage *_webImage;
    NSNumber *_forceChangeUrl;
}

@property(nonatomic) long long iRichFrom; // @synthesize iRichFrom=_iRichFrom;
@property(retain, nonatomic) NSNumber *forceChangeUrl; // @synthesize forceChangeUrl=_forceChangeUrl;
@property(retain, nonatomic) UIImage *webImage; // @synthesize webImage=_webImage;
@property(retain, nonatomic) NSString *flag; // @synthesize flag;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) int WXShareSourceFrom; // @dynamic WXShareSourceFrom;
@property(copy, nonatomic) NSString *actionData; // @dynamic actionData;
@property(retain, nonatomic) NSString *appID; // @dynamic appID;
@property(retain, nonatomic) NSString *arkContent; // @dynamic arkContent;
@property(nonatomic) int articleId; // @dynamic articleId;
@property(retain, nonatomic) NSString *brief; // @dynamic brief;
@property(retain, nonatomic) NSString *callBack; // @dynamic callBack;
@property(retain, nonatomic) NSString *comment; // @dynamic comment;
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(retain, nonatomic) NSString *flashUrl; // @dynamic flashUrl;
@property(retain, nonatomic) NSString *fwflag; // @dynamic fwflag;
@property(retain, nonatomic) NSString *hyperText; // @dynamic hyperText;
@property(nonatomic) long long iUrlInfoFrm; // @dynamic iUrlInfoFrm;
@property(nonatomic) _Bool isForceNet; // @dynamic isForceNet;
@property(nonatomic) _Bool isTribeShortVideo; // @dynamic isTribeShortVideo;
@property(retain, nonatomic) NSNumber *keepShareUrl; // @dynamic keepShareUrl;
@property(retain, nonatomic) NSNumber *needPopBack; // @dynamic needPopBack;
@property(retain, nonatomic) NSString *orgUrlStr; // @dynamic orgUrlStr;
@property(retain, nonatomic) UIImage *previewImage; // @dynamic previewImage;
@property(retain, nonatomic) NSString *previewImageURL; // @dynamic previewImageURL;
@property(retain, nonatomic) NSString *scheme; // @dynamic scheme;
@property(copy, nonatomic) NSString *serviceID; // @dynamic serviceID;
@property(retain, nonatomic) NSNumber *shareChannel; // @dynamic shareChannel;
@property(nonatomic) int shareQQType; // @dynamic shareQQType;
@property(retain, nonatomic) NSString *shareType; // @dynamic shareType;
@property(retain, nonatomic) NSString *sourceName; // @dynamic sourceName;
@property(copy, nonatomic) NSString *sourceUrl; // @dynamic sourceUrl;
@property(retain, nonatomic) NSString *srcActionData; // @dynamic srcActionData;
@property(retain, nonatomic) NSString *srcIconUrl; // @dynamic srcIconUrl;
@property(retain, nonatomic) NSString *srcName; // @dynamic srcName;
@property(retain, nonatomic) NSString *srcUrl; // @dynamic srcUrl;
@property(retain, nonatomic) NSString *src_A_ActionData; // @dynamic src_A_ActionData;
@property(retain, nonatomic) NSString *src_Action; // @dynamic src_Action;
@property(retain, nonatomic) NSString *src_ActionData; // @dynamic src_ActionData;
@property(retain, nonatomic) NSString *src_I_ActionData; // @dynamic src_I_ActionData;
@property(retain, nonatomic) NSString *src_IconUrl; // @dynamic src_IconUrl;
@property(retain, nonatomic) NSString *src_WebActionUrl; // @dynamic src_WebActionUrl;
@property(retain, nonatomic) NSString *summary; // @dynamic summary;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *toUIN; // @dynamic toUIN;
@property(copy, nonatomic) NSString *tribeBid; // @dynamic tribeBid;
@property(copy, nonatomic) NSString *tribeCoverUrl; // @dynamic tribeCoverUrl;
@property(copy, nonatomic) NSString *tribeName; // @dynamic tribeName;
@property(copy, nonatomic) NSString *tribePid; // @dynamic tribePid;
@property(nonatomic) int tribeVideoHeight; // @dynamic tribeVideoHeight;
@property(copy, nonatomic) NSString *tribeVideoTheme; // @dynamic tribeVideoTheme;
@property(copy, nonatomic) NSString *tribeVideoUrl; // @dynamic tribeVideoUrl;
@property(copy, nonatomic) NSString *tribeVideoVid; // @dynamic tribeVideoVid;
@property(nonatomic) int tribeVideoWidth; // @dynamic tribeVideoWidth;
@property(retain, nonatomic) NSNumber *uinType; // @dynamic uinType;
@property(retain, nonatomic) NSString *urlStr; // @dynamic urlStr;

@end

