//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVMoreActionEntity.h"

@class NSNumber, NSString;

@interface TTVReportActionEntity : TTVMoreActionEntity
{
    NSString *_groupId;
    NSString *_itemId;
    NSString *_categoryId;
    NSString *_videoSource;
    NSNumber *_adID;
}

@property(retain, nonatomic) NSNumber *adID; // @synthesize adID=_adID;
@property(copy, nonatomic) NSString *videoSource; // @synthesize videoSource=_videoSource;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;

@end
