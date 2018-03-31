//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSTimer;

@interface QStartIODetector : NSObject
{
    _Bool _start;
    _Bool _finish;
    NSTimer *_timer;
    NSMutableDictionary *_clearTasks;
}

+ (void)makeCrash;
+ (id)getInstance;
+ (void)load;
- (void)clearVASResource;
- (void)registerClearPath;
- (id)crashFileArray;
- (void)clear3MinCrashTmpFiles;
- (_Bool)isFilePathProtect:(id)arg1 suffixType:(id)arg2;
- (void)taskStart:(int)arg1;
- (_Bool)isValidPath:(id)arg1;
- (void)regClearPath:(id)arg1 suffixFilter:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)clearTmpFiles;
- (void)createTmpFile;
- (void)clearVASRedpointData;
- (void)clearOrmModelDb;
- (void)__clearUnnecessaryFiles;
- (void)clearUnnecessaryFilesWithExclusionRegex:(id)arg1;
- (_Bool)isFrequencyStartCrash;
- (void)removeItemInDirs:(id)arg1;
- (void)removeItemInDir:(id)arg1;
- (_Bool)isRecenCrashFile:(id)arg1;
- (_Bool)isRecenCrashWithFilePath:(id)arg1;
- (_Bool)isCrashInTime:(double)arg1 filePath:(id)arg2;
- (_Bool)isFinish;
- (_Bool)isStart;
- (void)FinishStart;
- (void)CatchCrash;
- (void)startApp;
- (void)clearLocalFilesWithExclusionRegex:(id)arg1;
- (void)action;
- (void)dealloc;
- (id)init;
- (void)reportHas3ContinueCrashFlagIfNeed;
- (_Bool)isHas3ContinueCrashFlag;
- (void)removeHas3ContinueCrashFlag;
- (void)storeHas3ContinueCrashFlag;

@end

