//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTIMBaseMessage : NSObject
{
    int _cmd;
    long long _seqId;
}

@property(nonatomic) long long seqId; // @synthesize seqId=_seqId;
@property(nonatomic) int cmd; // @synthesize cmd=_cmd;
- (id)description;
- (id)initWithCmd:(int)arg1;

@end

