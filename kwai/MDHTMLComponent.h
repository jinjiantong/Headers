//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MDHTMLComponent : NSObject
{
    long long _componentIndex;
    NSString *_text;
    NSString *_htmlTag;
    NSMutableDictionary *_attributes;
    long long _position;
}

@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *htmlTag; // @synthesize htmlTag=_htmlTag;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long componentIndex; // @synthesize componentIndex=_componentIndex;
- (void).cxx_destruct;
- (id)description;
- (struct _NSRange)range;
- (id)initWithTag:(id)arg1 position:(long long)arg2 attributes:(id)arg3;
- (id)initWithString:(id)arg1 htmlTag:(id)arg2 attributes:(id)arg3;

@end

