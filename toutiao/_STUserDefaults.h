//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "STPersistence.h"

@class NSString;

@interface _STUserDefaults : STPersistence
{
    NSString *_filePath;
}

+ (Class)class;
+ (Class)superclass;
+ (id)description;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)resetPersistence;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)description;
- (id)initWithDirectory:(int)arg1 subpath:(id)arg2;
- (id)initWithName:(id)arg1;

@end
