//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface KSLiveAnchorAdminUserExtraInfo : NSObject <NSCoding>
{
    _Bool _isWatching;
    short _assistantType;
}

@property(nonatomic) short assistantType; // @synthesize assistantType=_assistantType;
@property(nonatomic) _Bool isWatching; // @synthesize isWatching=_isWatching;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

