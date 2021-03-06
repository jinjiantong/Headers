//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface TBFeedFeatureModel : QQModel
{
    unsigned int _totalCommentNum;
    unsigned int _totalLikeNum;
    unsigned int _totalViewNum;
    unsigned int _hasLike;
    unsigned int _denyComment;
    NSString *_feedID;
}

+ (id)createWithFeedFeatureData:(struct CPBMessageDecoder *)arg1;
@property(nonatomic) unsigned int denyComment; // @synthesize denyComment=_denyComment;
@property(nonatomic) unsigned int hasLike; // @synthesize hasLike=_hasLike;
@property(nonatomic) unsigned int totalViewNum; // @synthesize totalViewNum=_totalViewNum;
@property(nonatomic) unsigned int totalLikeNum; // @synthesize totalLikeNum=_totalLikeNum;
@property(nonatomic) unsigned int totalCommentNum; // @synthesize totalCommentNum=_totalCommentNum;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (id)initWithPBData:(struct CPBMessageDecoder *)arg1;
- (void)dealloc;

@end

