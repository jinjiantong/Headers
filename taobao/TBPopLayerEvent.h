//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBPopLayerEvent : NSObject
{
    long long _domain;
    long long _source;
    NSString *_uri;
    id _param;
}

+ (id)eventWithDomain:(long long)arg1 uri:(id)arg2 param:(id)arg3 source:(long long)arg4;
@property(copy, nonatomic) id param; // @synthesize param=_param;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)dictForEvent;
- (id)paramDescription;
- (id)sourceName;
- (id)description;
- (id)initWithDomain:(long long)arg1 uri:(id)arg2 param:(id)arg3 source:(long long)arg4;

@end
