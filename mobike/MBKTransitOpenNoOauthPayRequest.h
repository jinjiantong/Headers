//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSString;

@interface MBKTransitOpenNoOauthPayRequest : MBKMobikeRequest
{
    NSString *_applicationId;
    NSString *_noAuthClient;
    NSString *_noAuthChannel;
}

@property(copy, nonatomic) NSString *noAuthChannel; // @synthesize noAuthChannel=_noAuthChannel;
@property(copy, nonatomic) NSString *noAuthClient; // @synthesize noAuthClient=_noAuthClient;
@property(copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (void).cxx_destruct;
- (id)init;

@end

