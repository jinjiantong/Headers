//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _KSRedPacketTimeManager : NSObject
{
    _Bool _synchronized;
    _Bool _synchronizedWithoutNTP;
    double _offset;
}

+ (id)manager;
@property(nonatomic) _Bool synchronizedWithoutNTP; // @synthesize synchronizedWithoutNTP=_synchronizedWithoutNTP;
@property(nonatomic) _Bool synchronized; // @synthesize synchronized=_synchronized;
@property(nonatomic) double offset; // @synthesize offset=_offset;
- (double)p_sysuptime;
- (id)serverDate;
- (void)_synchronizeWithServerDate:(id)arg1;
- (void)synchronizeWithServerDate:(id)arg1;
- (void)synchronize;
- (void)synchronizeRetryTime:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end

