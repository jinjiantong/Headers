//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableDictionary, UIView, UIViewController;
@protocol TNodeComponentProtocol;

@protocol IUGCMiniComponent <NSObject>
@property(nonatomic) __weak UIViewController *sourceViewController;
@property(nonatomic) __weak UIView<TNodeComponentProtocol> *component;
@property(nonatomic) __weak NSMutableDictionary *data;
- (void)reset;
- (void)doActionWithCompleted:(void (^)(_Bool, id, NSError *))arg1;
- (void)commitWithCompleted:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (_Bool)isModify;
- (_Bool)isValid;
@end
