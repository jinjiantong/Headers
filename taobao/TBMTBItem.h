//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBMTBClickparam;

@interface TBMTBItem : TBJSONModel
{
    NSString *_icon;
    NSString *_name;
    NSString *_url;
    NSString *_index;
    NSString *_num;
    NSString *_tagUrl;
    NSString *_linkUrl;
    NSString *_picUrl;
    NSString *_desc;
    NSString *_nameColor;
    NSString *_bubble;
    NSString *_level;
    NSString *_tip;
    NSString *_guide;
    NSString *_cat;
    NSString *_appKey;
    NSString *_expiredTime;
    NSString *_title;
    NSString *_subTitle;
    NSString *_targetUrl;
    TBMTBClickparam *_clickParam;
}

@property(retain, nonatomic) TBMTBClickparam *clickParam; // @synthesize clickParam=_clickParam;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *expiredTime; // @synthesize expiredTime=_expiredTime;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *cat; // @synthesize cat=_cat;
@property(retain, nonatomic) NSString *guide; // @synthesize guide=_guide;
@property(retain, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) NSString *level; // @synthesize level=_level;
@property(retain, nonatomic) NSString *bubble; // @synthesize bubble=_bubble;
@property(retain, nonatomic) NSString *nameColor; // @synthesize nameColor=_nameColor;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *tagUrl; // @synthesize tagUrl=_tagUrl;
@property(retain, nonatomic) NSString *num; // @synthesize num=_num;
@property(retain, nonatomic) NSString *index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end
