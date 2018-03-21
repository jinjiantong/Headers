//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDFileLogger.h"

#import "DDLogger-Protocol.h"

@class KSUMmapBuffer, NSObject, NSString;
@protocol DDLogFormatter, OS_dispatch_queue;

@interface KSUFileLogger : DDFileLogger <DDLogger>
{
    KSUMmapBuffer *_mmapBuffer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *loggerName;
- (void)logMessage:(id)arg1;
- (void)synchronizeCurrentLogFile;
- (void)_ks_syncInInternalLoggerQueue:(CDUnknownBlockType)arg1;
- (void)_ks_syncInGlobalLoggingQueue:(CDUnknownBlockType)arg1;
- (void)_syncMmapBuffer;
- (id)initWithLogFileManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <DDLogFormatter> logFormatter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property(readonly) Class superclass;

@end
