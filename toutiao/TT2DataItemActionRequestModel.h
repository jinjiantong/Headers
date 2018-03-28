//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface TT2DataItemActionRequestModel : TTRequestModel
{
    NSString *_action;
    NSString<Optional> *_group_id;
    NSString<Optional> *_item_id;
    NSString<Optional> *_device_id;
    NSNumber<Optional> *_share;
    NSNumber<Optional> *_aggr_type;
    NSString<Optional> *_ad_id;
}

@property(retain, nonatomic) NSString<Optional> *ad_id; // @synthesize ad_id=_ad_id;
@property(retain, nonatomic) NSNumber<Optional> *aggr_type; // @synthesize aggr_type=_aggr_type;
@property(retain, nonatomic) NSNumber<Optional> *share; // @synthesize share=_share;
@property(retain, nonatomic) NSString<Optional> *device_id; // @synthesize device_id=_device_id;
@property(retain, nonatomic) NSString<Optional> *item_id; // @synthesize item_id=_item_id;
@property(retain, nonatomic) NSString<Optional> *group_id; // @synthesize group_id=_group_id;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end
