//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSInvocation, NSString;

@interface QQInvocation : NSObject
{
    NSInvocation *_invocation;
    NSString *_key;
}

+ (id)InvocationTarget:(id)arg1 action:(SEL)arg2 For:(id)arg3;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (_Bool)isEqualToTarget:(id)arg1;
- (void)invoke;
- (id)initTarget:(id)arg1 selector:(SEL)arg2 For:(id)arg3;
- (void)dealloc;

@end
