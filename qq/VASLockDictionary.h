//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface VASLockDictionary : NSObject <NSCoding>
{
    NSMutableDictionary *_dict;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

+ (id)dictionaryWithMutableDictionary:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
- (id)mutableDicSafeForKey:(id)arg1;
- (id)mutableArraySafeForKey:(id)arg1;
- (double)doubleSafeForKey:(id)arg1;
- (id)arraySafeForKey:(id)arg1;
- (id)dicSafeForKey:(id)arg1;
- (id)objectSafeForKey:(id)arg1;
- (id)digitalTypeCheckForKey:(id)arg1;
- (id)numberSafeForKey:(id)arg1;
- (id)dataSafeForKey:(id)arg1;
- (id)stringSafeForKey:(id)arg1;
- (long long)integerSafeForKey:(id)arg1 defaultV:(long long)arg2;
- (long long)integerSafeForKey:(id)arg1;
- (unsigned long long)unsignedlonglongSafeForKey:(id)arg1;
- (unsigned int)unsignedintSafeForKey:(id)arg1;
- (unsigned long long)longSafeForKey:(id)arg1;
- (float)floatSafeForKey:(id)arg1;
- (int)intSafeForKey:(id)arg1;
- (_Bool)boolSafeForKey:(id)arg1;
- (id)objectForKey:(id)arg1 type:(Class)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)fetchDictionary;
- (unsigned long long)count;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)allKeysForObject:(id)arg1;
- (id)allValues;
- (id)allKeys;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)saveToUserDefaultsForKey:(id)arg1;
- (void)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (id)objectForKey:(id)arg1;
- (void)setDictionary:(id)arg1;
- (id)initWithMutableDictionary:(id)arg1;
- (id)init;

@end

