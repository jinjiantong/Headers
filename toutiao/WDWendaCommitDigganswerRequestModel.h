//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface WDWendaCommitDigganswerRequestModel : TTRequestModel
{
    NSString<Optional> *_ansid;
    NSNumber<Optional> *_digg_type;
    NSString<Optional> *_enter_from;
    NSString<Optional> *_api_param;
}

@property(retain, nonatomic) NSString<Optional> *api_param; // @synthesize api_param=_api_param;
@property(retain, nonatomic) NSString<Optional> *enter_from; // @synthesize enter_from=_enter_from;
@property(retain, nonatomic) NSNumber<Optional> *digg_type; // @synthesize digg_type=_digg_type;
@property(retain, nonatomic) NSString<Optional> *ansid; // @synthesize ansid=_ansid;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

