//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBMTBAdvertData : TBJSONModel
{
    NSString *_picUrl;
    NSString *_originId;
    NSString *_name;
    NSString *_linkUrl;
    NSString *_mediaType;
    NSString *_title;
    NSString *_desc;
    NSString *_ifs;
    NSString *_icon;
    NSString *_pid;
    NSString *_solution_id;
    NSString *_creative_id;
}

@property(retain, nonatomic) NSString *creative_id; // @synthesize creative_id=_creative_id;
@property(retain, nonatomic) NSString *solution_id; // @synthesize solution_id=_solution_id;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *ifs; // @synthesize ifs=_ifs;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *originId; // @synthesize originId=_originId;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
- (void).cxx_destruct;

@end

