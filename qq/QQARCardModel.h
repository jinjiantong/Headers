//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class NSString;

@interface QQARCardModel : QQModel <NSCopying>
{
    unsigned long long _taskID;
    NSString *_resourceUrl;
    NSString *_resourceMD5;
    unsigned long long _fileSize;
    NSString *_guideWebPageUrl;
    NSString *_sendMsgSuccessUrl;
    NSString *_shareTopicUrl;
    NSString *_shareMsgTitle;
    NSString *_aioMsgTitle;
    NSString *_aioMsgSummary;
    NSString *_aioMsgJumpUrl;
    NSString *_aioMsgImageUrl;
    NSString *_cardDefaultText;
    unsigned long long _starUIN;
    NSString *_starNick;
}

@property(copy, nonatomic) NSString *starNick; // @synthesize starNick=_starNick;
@property(nonatomic) unsigned long long starUIN; // @synthesize starUIN=_starUIN;
@property(copy, nonatomic) NSString *cardDefaultText; // @synthesize cardDefaultText=_cardDefaultText;
@property(copy, nonatomic) NSString *aioMsgImageUrl; // @synthesize aioMsgImageUrl=_aioMsgImageUrl;
@property(copy, nonatomic) NSString *aioMsgJumpUrl; // @synthesize aioMsgJumpUrl=_aioMsgJumpUrl;
@property(copy, nonatomic) NSString *aioMsgSummary; // @synthesize aioMsgSummary=_aioMsgSummary;
@property(copy, nonatomic) NSString *aioMsgTitle; // @synthesize aioMsgTitle=_aioMsgTitle;
@property(copy, nonatomic) NSString *shareMsgTitle; // @synthesize shareMsgTitle=_shareMsgTitle;
@property(copy, nonatomic) NSString *shareTopicUrl; // @synthesize shareTopicUrl=_shareTopicUrl;
@property(copy, nonatomic) NSString *sendMsgSuccessUrl; // @synthesize sendMsgSuccessUrl=_sendMsgSuccessUrl;
@property(copy, nonatomic) NSString *guideWebPageUrl; // @synthesize guideWebPageUrl=_guideWebPageUrl;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *resourceMD5; // @synthesize resourceMD5=_resourceMD5;
@property(copy, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(nonatomic) unsigned long long taskID; // @synthesize taskID=_taskID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

