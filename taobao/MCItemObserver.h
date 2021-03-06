//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol MCDataItemObserver;

@interface MCItemObserver : NSObject
{
    NSString *_uniqueKey;
    NSString *_type;
    NSString *_item;
    id <MCDataItemObserver> _observer;
}

@property(nonatomic) __weak id <MCDataItemObserver> observer; // @synthesize observer=_observer;
@property(copy, nonatomic) NSString *item; // @synthesize item=_item;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
- (void).cxx_destruct;

@end

