//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GdtVideoAttachment, NSNumber, NSString;

@interface GdtAdReport : NSObject
{
    _Bool _is_impression;
    _Bool _is_installed;
    _Bool _get_back;
    unsigned int _type;
    unsigned int _act_time;
    unsigned int _source;
    GdtVideoAttachment *_feeds_video_attachment;
    NSString *_view_id;
    NSString *_trace_id;
    NSString *_sns_uid;
    NSString *_referer;
    NSString *_user_agent;
    NSString *_q_user_agent;
    NSNumber *_feeds_index;
    NSString *_click_source;
    NSString *_antispam_info;
    NSNumber *_stay_time;
    NSNumber *_client_id;
    NSNumber *_action_id;
    NSNumber *_msg_floor;
    unsigned long long _puin;
    NSString *_ad_id;
    NSString *_msgid;
    unsigned long long _ad_puin;
    NSString *_qqVersion;
}

@property(readonly, retain, nonatomic) NSString *qqVersion; // @synthesize qqVersion=_qqVersion;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(nonatomic) unsigned long long ad_puin; // @synthesize ad_puin=_ad_puin;
@property(nonatomic) _Bool get_back; // @synthesize get_back=_get_back;
@property(retain, nonatomic) NSString *msgid; // @synthesize msgid=_msgid;
@property(retain, nonatomic) NSString *ad_id; // @synthesize ad_id=_ad_id;
@property(nonatomic) unsigned long long puin; // @synthesize puin=_puin;
@property(retain, nonatomic) NSNumber *msg_floor; // @synthesize msg_floor=_msg_floor;
@property(retain, nonatomic) NSNumber *action_id; // @synthesize action_id=_action_id;
@property(retain, nonatomic) NSNumber *client_id; // @synthesize client_id=_client_id;
@property(retain, nonatomic) NSNumber *stay_time; // @synthesize stay_time=_stay_time;
@property(retain, nonatomic) NSString *antispam_info; // @synthesize antispam_info=_antispam_info;
@property(retain, nonatomic) NSString *click_source; // @synthesize click_source=_click_source;
@property(nonatomic) _Bool is_installed; // @synthesize is_installed=_is_installed;
@property(nonatomic) _Bool is_impression; // @synthesize is_impression=_is_impression;
@property(retain, nonatomic) NSNumber *feeds_index; // @synthesize feeds_index=_feeds_index;
@property(retain, nonatomic) NSString *q_user_agent; // @synthesize q_user_agent=_q_user_agent;
@property(retain, nonatomic) NSString *user_agent; // @synthesize user_agent=_user_agent;
@property(retain, nonatomic) NSString *referer; // @synthesize referer=_referer;
@property(retain, nonatomic) NSString *sns_uid; // @synthesize sns_uid=_sns_uid;
@property(nonatomic) unsigned int act_time; // @synthesize act_time=_act_time;
@property(retain, nonatomic) NSString *trace_id; // @synthesize trace_id=_trace_id;
@property(retain, nonatomic) NSString *view_id; // @synthesize view_id=_view_id;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) GdtVideoAttachment *feeds_video_attachment; // @synthesize feeds_video_attachment=_feeds_video_attachment;
- (id)description;
- (unsigned int)netType;
- (id)transToData;
- (void)dealloc;
- (id)init;

@end
