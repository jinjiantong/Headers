//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZTVBase.h>

@class NSArray, NSString, QZVideoInfo;

@interface QZVideoSectionInfo : QZTVBase
{
    _Bool _isH265;
    _Bool _notAdjustSeekTimeToZeroWhenIsEnd;
    NSString *_h265VideoUrl;
    NSString *_savePath;
}

+ (id)createStreamId:(id)arg1;
+ (id)dicParsedFromParamsString:(id)arg1;
@property(nonatomic) _Bool notAdjustSeekTimeToZeroWhenIsEnd; // @synthesize notAdjustSeekTimeToZeroWhenIsEnd=_notAdjustSeekTimeToZeroWhenIsEnd;
@property(copy, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(copy, nonatomic) NSString *h265VideoUrl; // @synthesize h265VideoUrl=_h265VideoUrl;
@property(nonatomic) _Bool isH265; // @synthesize isH265=_isH265;
- (void).cxx_destruct;
- (void)setVideoType:(long long)arg1;
- (void)reset;

// Remaining properties
@property(copy, nonatomic) NSArray *URLs; // @dynamic URLs;
@property(copy, nonatomic) NSArray *durations; // @dynamic durations;
@property(copy, nonatomic) NSString *feedVideoUrl; // @dynamic feedVideoUrl;
@property(copy, nonatomic) NSString *fileId; // @dynamic fileId;
@property(copy, nonatomic) NSString *formatString; // @dynamic formatString;
@property(nonatomic) _Bool isHLS; // @dynamic isHLS;
@property(nonatomic) long long liveStatus; // @dynamic liveStatus;
@property(nonatomic) long long retCode; // @dynamic retCode;
@property(nonatomic) double startTime; // @dynamic startTime;
@property(copy, nonatomic) NSString *streamId; // @dynamic streamId;
@property(copy, nonatomic) NSString *vid; // @dynamic vid;
@property(retain, nonatomic) QZVideoInfo *videoInfo; // @dynamic videoInfo;
@property(copy, nonatomic) NSString *videoName; // @dynamic videoName;

@end
