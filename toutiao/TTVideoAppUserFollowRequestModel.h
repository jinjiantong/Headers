//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSString;
@protocol Optional;

@interface TTVideoAppUserFollowRequestModel : TTRequestModel
{
    NSString *_to_user_id;
    NSString<Optional> *_account_id;
    NSString<Optional> *_account_type;
    NSString<Optional> *_device_id;
    NSString<Optional> *_user_id;
}

@property(retain, nonatomic) NSString<Optional> *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSString<Optional> *device_id; // @synthesize device_id=_device_id;
@property(retain, nonatomic) NSString<Optional> *account_type; // @synthesize account_type=_account_type;
@property(retain, nonatomic) NSString<Optional> *account_id; // @synthesize account_id=_account_id;
@property(retain, nonatomic) NSString *to_user_id; // @synthesize to_user_id=_to_user_id;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

