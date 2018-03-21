//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSNumber, NSString;
@protocol NSCoding;

@interface KSDHTTPCacheObject : NSObject <NSCoding>
{
    _Bool _fromCache;
    NSData *_data;
    double _expireTime;
    NSString *_etag;
    NSString *_key;
    NSString *_activityId;
    NSNumber *_userId;
}

+ (double)getExpireTime:(id)arg1;
+ (void)clear;
+ (void)removeWithKey:(id)arg1;
+ (id)cachedObjectForKey:(id)arg1;
+ (id)objectWithData:(id)arg1 httpResponse:(id)arg2 key:(id)arg3;
+ (id)shareCache;
+ (id)getLatestObjectForRequest:(id)arg1 cacheKey:(id)arg2 ignoreCache:(_Bool)arg3 cancellationToken:(id)arg4;
+ (id)getLatestObjectForRequest:(id)arg1 cacheKey:(id)arg2 cancellationToken:(id)arg3;
+ (id)getLatestObjectForRequest:(id)arg1 cancellationToken:(id)arg2;
+ (id)mj_ignoredCodingPropertyNames;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(nonatomic) _Bool fromCache; // @synthesize fromCache=_fromCache;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(nonatomic) double expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)activityIsChanged;
- (_Bool)userIsChanged;
- (void)remove;
- (void)save;
- (_Bool)isExpired;
- (id)requestHeader;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSObject<NSCoding> *responseObject;

@end
