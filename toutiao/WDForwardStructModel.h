//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface WDForwardStructModel : WDBaseModel
{
    NSNumber<Optional> *_repost_type;
    NSNumber<Optional> *_fw_id;
    NSNumber<Optional> *_fw_id_type;
    NSNumber<Optional> *_fw_user_id;
    NSNumber<Optional> *_opt_id;
    NSNumber<Optional> *_opt_id_type;
    NSString<Optional> *_schema;
    NSString<Optional> *_title;
    NSString<Optional> *_cover_url;
}

@property(retain, nonatomic) NSString<Optional> *cover_url; // @synthesize cover_url=_cover_url;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString<Optional> *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSNumber<Optional> *opt_id_type; // @synthesize opt_id_type=_opt_id_type;
@property(retain, nonatomic) NSNumber<Optional> *opt_id; // @synthesize opt_id=_opt_id;
@property(retain, nonatomic) NSNumber<Optional> *fw_user_id; // @synthesize fw_user_id=_fw_user_id;
@property(retain, nonatomic) NSNumber<Optional> *fw_id_type; // @synthesize fw_id_type=_fw_id_type;
@property(retain, nonatomic) NSNumber<Optional> *fw_id; // @synthesize fw_id=_fw_id;
@property(retain, nonatomic) NSNumber<Optional> *repost_type; // @synthesize repost_type=_repost_type;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
