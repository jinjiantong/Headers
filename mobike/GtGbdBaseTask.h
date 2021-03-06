//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface GtGbdBaseTask : NSObject
{
    _Bool isMainThread;
    _Bool isReduplicate;
    int taskStatus;
    NSString *taskType;
    CDUnknownBlockType completedCallBack;
    NSData *resultData;
}

@property(retain, nonatomic) NSData *resultData; // @synthesize resultData;
@property(copy, nonatomic) CDUnknownBlockType completedCallBack; // @synthesize completedCallBack;
@property(readonly, nonatomic) int taskStatus; // @synthesize taskStatus;
@property(retain, nonatomic) NSString *taskType; // @synthesize taskType;
@property(nonatomic) _Bool isReduplicate; // @synthesize isReduplicate;
@property(nonatomic) _Bool isMainThread; // @synthesize isMainThread;
- (void).cxx_destruct;
- (void)dealloc;
- (void)taskFinishWithResult:(id)arg1;
- (void)destory;
- (void)finishTask;
- (void)pauseTask;
- (void)startTask;
- (void)runTaskInTimer;
- (_Bool)preStartTask;
- (id)initTask:(id)arg1 withcompleted:(CDUnknownBlockType)arg2;
- (id)initTask:(id)arg1;
- (id)init;

@end

