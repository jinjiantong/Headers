//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSNumber, NSString;

@interface MBKOperateMessageRequest : MBKMobikeRequest
{
    NSNumber *_times;
    NSString *_areacode;
}

@property(copy, nonatomic) NSString *areacode; // @synthesize areacode=_areacode;
@property(retain, nonatomic) NSNumber *times; // @synthesize times=_times;
- (void).cxx_destruct;
- (id)init;

@end
