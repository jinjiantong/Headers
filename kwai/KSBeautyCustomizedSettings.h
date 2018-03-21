//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSMutableDictionary;

@interface KSBeautyCustomizedSettings : NSObject <NSCoding, NSCopying, NSMutableCopying>
{
    long long _version;
    long long _presetID;
    NSMutableDictionary *_intensityIndex;
}

@property(readonly, nonatomic) NSMutableDictionary *intensityIndex; // @synthesize intensityIndex=_intensityIndex;
@property(nonatomic) long long presetID; // @synthesize presetID=_presetID;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)intensityOfComponentWithComponentID:(long long)arg1 presetWithPresetID:(long long)arg2;
- (id)customizedComponentIDsOfPresetWithID:(long long)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
