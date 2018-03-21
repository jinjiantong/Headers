//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface MCDecorateComponentManager : NSObject
{
    NSMutableDictionary *_componentList;
    NSMutableDictionary *_sendMsgList;
    NSMutableDictionary *_popMsgList;
    NSRecursiveLock *_lock;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *popMsgList; // @synthesize popMsgList=_popMsgList;
@property(retain, nonatomic) NSMutableDictionary *sendMsgList; // @synthesize sendMsgList=_sendMsgList;
@property(retain, nonatomic) NSMutableDictionary *componentList; // @synthesize componentList=_componentList;
- (void).cxx_destruct;
- (void)hideKeyBoard:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)getInfos:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)popWindow:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)send:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)hide:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)show:(id)arg1 withWVBridgeContext:(id)arg2;
- (_Bool)paramVerify:(id)arg1;
- (id)windowName:(id)arg1;
- (void)addOfflineMsg:(id)arg1 component:(id)arg2 isPopMsg:(_Bool)arg3;
- (void)popMsgCompensate:(id)arg1;
- (void)sendMsgCompensate:(id)arg1;
- (void)decorateComponentRendered:(id)arg1;
- (void)removeDecorateComponent:(id)arg1;
- (void)addDecorateComponent:(id)arg1;
- (id)init;

@end
