//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ATSCommand.h"

@class NSDictionary, NSString;

@interface ATSNetworkCommand : ATSCommand
{
    _Bool _usePost;
    NSString *_APIMethod;
    NSString *_APIVersion;
    NSDictionary *_param;
    unsigned long long _cachePolicy;
    CDUnknownBlockType _fetchedCacheHandler;
    CDUnknownBlockType _fetchedSuccessHandler;
    CDUnknownBlockType _fetchedFailedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType fetchedFailedHandler; // @synthesize fetchedFailedHandler=_fetchedFailedHandler;
@property(copy, nonatomic) CDUnknownBlockType fetchedSuccessHandler; // @synthesize fetchedSuccessHandler=_fetchedSuccessHandler;
@property(copy, nonatomic) CDUnknownBlockType fetchedCacheHandler; // @synthesize fetchedCacheHandler=_fetchedCacheHandler;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(nonatomic, getter=isUsePost) _Bool usePost; // @synthesize usePost=_usePost;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(retain, nonatomic) NSString *APIVersion; // @synthesize APIVersion=_APIVersion;
@property(retain, nonatomic) NSString *APIMethod; // @synthesize APIMethod=_APIMethod;
- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (void)execute;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
- (id)initWithRequest:(id)arg1;

@end

