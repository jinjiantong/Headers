//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreOriginalData.h"

@class NSDictionary, NSNumber, NSString;

@interface TTCategoryAddToFirstPageData : ExploreOriginalData
{
    NSString *_cellId;
    NSNumber *_behotTime;
    NSNumber *_cellType;
    NSNumber *_cursor;
    NSNumber *_jumpType;
    NSString *_text;
    NSString *_openUrl;
    NSString *_buttonText;
    NSString *_iconUrl;
    NSDictionary *_recommendImage;
    NSNumber *_showBottomSeparator;
    NSNumber *_showTopSeparator;
    NSDictionary *_action;
}

+ (id)keyMapping;
+ (unsigned long long)cacheLevel;
+ (id)persistentProperties;
+ (id)objectWithDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *action; // @synthesize action=_action;
@property(copy, nonatomic) NSNumber *showTopSeparator; // @synthesize showTopSeparator=_showTopSeparator;
@property(copy, nonatomic) NSNumber *showBottomSeparator; // @synthesize showBottomSeparator=_showBottomSeparator;
@property(retain, nonatomic) NSDictionary *recommendImage; // @synthesize recommendImage=_recommendImage;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSNumber *jumpType; // @synthesize jumpType=_jumpType;
@property(copy, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) NSNumber *cellType; // @synthesize cellType=_cellType;
@property(copy, nonatomic) NSNumber *behotTime; // @synthesize behotTime=_behotTime;
@property(copy, nonatomic) NSString *cellId; // @synthesize cellId=_cellId;
- (void).cxx_destruct;

@end
