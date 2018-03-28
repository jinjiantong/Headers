//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface TTAccountUserAuditEntity : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_userDescription;
    NSString *_avatarURL;
    NSNumber *_gender;
    NSString *_birthday;
    NSString *_industry;
    NSString *_area;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *area; // @synthesize area=_area;
@property(copy, nonatomic) NSString *industry; // @synthesize industry=_industry;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSNumber *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(copy, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)toOriginalDictionary;
- (id)toDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAuditModel:(id)arg1;

@end
