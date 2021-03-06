//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class FRShareStructModel, NSNumber, NSString;
@protocol Optional;

@interface FRConcernStructModel : JSONModel
{
    NSString *_name;
    NSString *_avatar_url;
    NSString *_concern_id;
    NSNumber *_concern_count;
    NSNumber *_discuss_count;
    NSNumber *_concern_time;
    NSString *_share_url;
    NSString *_introdution_url;
    NSString<Optional> *_desc;
    long long _type;
    NSString<Optional> *_extra;
    FRShareStructModel<Optional> *_share_data;
    NSNumber<Optional> *_read_count;
    NSString<Optional> *_desc_rich_span;
    NSString<Optional> *_music_id;
    NSString<Optional> *_theme_id;
}

@property(retain, nonatomic) NSString<Optional> *theme_id; // @synthesize theme_id=_theme_id;
@property(retain, nonatomic) NSString<Optional> *music_id; // @synthesize music_id=_music_id;
@property(retain, nonatomic) NSString<Optional> *desc_rich_span; // @synthesize desc_rich_span=_desc_rich_span;
@property(retain, nonatomic) NSNumber<Optional> *read_count; // @synthesize read_count=_read_count;
@property(retain, nonatomic) FRShareStructModel<Optional> *share_data; // @synthesize share_data=_share_data;
@property(retain, nonatomic) NSString<Optional> *extra; // @synthesize extra=_extra;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString<Optional> *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *introdution_url; // @synthesize introdution_url=_introdution_url;
@property(retain, nonatomic) NSString *share_url; // @synthesize share_url=_share_url;
@property(retain, nonatomic) NSNumber *concern_time; // @synthesize concern_time=_concern_time;
@property(retain, nonatomic) NSNumber *discuss_count; // @synthesize discuss_count=_discuss_count;
@property(retain, nonatomic) NSNumber *concern_count; // @synthesize concern_count=_concern_count;
@property(retain, nonatomic) NSString *concern_id; // @synthesize concern_id=_concern_id;
@property(retain, nonatomic) NSString *avatar_url; // @synthesize avatar_url=_avatar_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

