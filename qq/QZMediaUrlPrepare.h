//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QZMediaUrlPrepare : NSObject
{
}

+ (_Bool)waitForVideoURLs:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
+ (id)getFeedName:(id)arg1 feedVideo:(id)arg2;
+ (id)videoInfoFromQZFeedVideo:(id)arg1;
+ (id)removeInvalidCharacter:(id)arg1;
+ (id)durationsForVideo:(id)arg1;
+ (id)URLsForVideo:(id)arg1;
+ (id)URLsForVideo:(id)arg1 isHLS:(_Bool *)arg2 isH265:(_Bool *)arg3;
+ (id)sectionInfoForFeedVideo:(id)arg1;
+ (_Bool)isHlsUrl:(id)arg1;
+ (id)sectionInfoForVideo:(id)arg1;

@end
