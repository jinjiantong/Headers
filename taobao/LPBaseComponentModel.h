//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSMutableDictionary;

@interface LPBaseComponentModel : TBJSONModel
{
    struct _opaque_pthread_mutex_t gLock;
    NSArray *_children;
    Class _componentClass;
    NSMutableDictionary *_storage;
}

@property(retain, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) Class componentClass; // @synthesize componentClass=_componentClass;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (id)storageObjectForKey:(id)arg1;
- (void)setStorageObject:(id)arg1 withKey:(id)arg2;
- (id)initWithLPBaseModel:(id)arg1;
- (void)dealloc;

@end
