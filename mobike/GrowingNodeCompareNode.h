//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface GrowingNodeCompareNode : NSObject
{
    _Bool _pathEnd;
    NSString *_name;
    NSMutableDictionary *_childNodes;
}

@property(retain, nonatomic) NSMutableDictionary *childNodes; // @synthesize childNodes=_childNodes;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool pathEnd; // @synthesize pathEnd=_pathEnd;
- (void).cxx_destruct;
- (void)addSetNode:(id)arg1 forKey:(id)arg2;
- (id)nodeForKey:(id)arg1;

@end
