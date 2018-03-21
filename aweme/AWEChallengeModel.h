//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEShareModel, AWEUserModel, NSArray, NSNumber, NSString;

@interface AWEChallengeModel : AWEBaseApiModel
{
    _Bool _shouldUserCreate;
    NSString *_itemID;
    NSString *_challengeName;
    NSString *_challengeDescription;
    NSString *_schema;
    AWEUserModel *_author;
    NSNumber *_userCount;
    AWEShareModel *_shareInfo;
    NSArray *_connectMusics;
}

+ (id)connectMusicsJSONTransformer;
+ (id)shareInfoJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool shouldUserCreate; // @synthesize shouldUserCreate=_shouldUserCreate;
@property(retain, nonatomic) NSArray *connectMusics; // @synthesize connectMusics=_connectMusics;
@property(retain, nonatomic) AWEShareModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(readonly, nonatomic) NSNumber *userCount; // @synthesize userCount=_userCount;
@property(retain, nonatomic) AWEUserModel *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) NSString *challengeDescription; // @synthesize challengeDescription=_challengeDescription;
@property(copy, nonatomic) NSString *challengeName; // @synthesize challengeName=_challengeName;
@property(readonly, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;

@end
