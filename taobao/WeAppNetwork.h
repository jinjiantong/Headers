//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WeAppNetwork : NSObject
{
    long long _jsonSize;
}

@property(nonatomic) long long jsonSize; // @synthesize jsonSize=_jsonSize;
- (void)cancel;
- (void)request:(id)arg1 withParam:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;

@end

