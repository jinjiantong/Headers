//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreOriginalData.h"

@class NSDictionary, NSString, TTShortVideoModel;

@interface TSVShortVideoOriginalData : ExploreOriginalData
{
    NSString *_primaryID;
    NSDictionary *_originalDict;
    TTShortVideoModel *_shortVideo;
}

+ (id)primaryIDByUniqueID:(long long)arg1 listType:(unsigned long long)arg2;
+ (id)persistentProperties;
+ (id)primaryKey;
+ (id)dbName;
@property(retain, nonatomic) TTShortVideoModel *shortVideo; // @synthesize shortVideo=_shortVideo;
@property(copy, nonatomic) NSDictionary *originalDict; // @synthesize originalDict=_originalDict;
@property(copy, nonatomic) NSString *primaryID; // @synthesize primaryID=_primaryID;
- (void).cxx_destruct;
- (void)editUserInfoDidFinish:(id)arg1;
- (void)shortVideoforwardSuccess:(id)arg1;
- (void)deleteCellNotification:(id)arg1;
- (void)dislikeNotification:(id)arg1;
- (void)removeObserveNotification;
- (void)addObserveNotification;
- (id)orderedData;
- (void)dealloc;
- (id)init;
- (void)updateWithDictionary:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
