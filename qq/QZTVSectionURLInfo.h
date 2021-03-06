//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZTVBase.h>

@class NSString;

@interface QZTVSectionURLInfo : QZTVBase
{
}

+ (id)fakeUrlWith:(id)arg1 isHLS:(_Bool)arg2;
+ (id)fmtStringFromURL:(id)arg1;
+ (id)sectionUrlInfo:(id)arg1 duration:(double)arg2 sectionNum:(unsigned long long)arg3 videoID:(id)arg4 isHLS:(_Bool)arg5;
- (id)description;
- (id)cacheFileName;
- (id)fakeUrl;
- (_Bool)valid;

// Remaining properties
@property(nonatomic) double duration; // @dynamic duration;
@property(retain, nonatomic) NSString *fmt; // @dynamic fmt;
@property(nonatomic) _Bool fromUGC; // @dynamic fromUGC;
@property(nonatomic) _Bool isHLS; // @dynamic isHLS;
@property(nonatomic) unsigned long long sectionNum; // @dynamic sectionNum;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *videoID; // @dynamic videoID;

@end

