//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString, WDImageUrlStructModel;
@protocol Optional;

@interface WDVideoInfoStructModel : WDBaseModel
{
    NSString<Optional> *_video_id;
    WDImageUrlStructModel<Optional> *_cover_pic;
    NSNumber<Optional> *_duration;
}

@property(retain, nonatomic) NSNumber<Optional> *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) WDImageUrlStructModel<Optional> *cover_pic; // @synthesize cover_pic=_cover_pic;
@property(retain, nonatomic) NSString<Optional> *video_id; // @synthesize video_id=_video_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

