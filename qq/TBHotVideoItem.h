//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface TBHotVideoItem : QQModel
{
    unsigned int _publishTime;
    unsigned int _likeCount;
    unsigned int _viewCount;
    unsigned int _hotVal;
    NSString *_storyID;
    NSString *_feedID;
    NSString *_unionID;
    NSString *_coverUrl;
}

+ (id)createWithPBData:(struct CPBMessageDecoder *)arg1;
@property(nonatomic) unsigned int hotVal; // @synthesize hotVal=_hotVal;
@property(nonatomic) unsigned int viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) unsigned int publishTime; // @synthesize publishTime=_publishTime;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(copy, nonatomic) NSString *storyID; // @synthesize storyID=_storyID;
- (void)dealloc;

@end

