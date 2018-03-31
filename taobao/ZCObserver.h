//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ZCObserver : NSObject
{
    id _target;
    NSString *_keyPath;
    CDUnknownBlockType _observer;
}

@property(copy, nonatomic) CDUnknownBlockType observer; // @synthesize observer=_observer;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)stopObserving;
- (void)attachTo:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 callback:(CDUnknownBlockType)arg4;

@end

