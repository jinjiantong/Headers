//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (WBTFileManagerUtilities)
+ (unsigned long long)wbt_fileSizeWithPath:(id)arg1;
+ (id)wbt_loadArchiverObjectFromFilePath:(id)arg1;
+ (_Bool)wbt_archiverDataObject:(id)arg1 filePath:(id)arg2;
+ (_Bool)wbt_saveDataObject:(id)arg1 documentsFilePath:(id)arg2;
+ (_Bool)wbt_asyncCopyImageItemFromURL:(id)arg1 toPath:(id)arg2 overWrite:(_Bool)arg3 successBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;
+ (_Bool)wbt_copyItemAtPath:(id)arg1 toPath:(id)arg2 overWrite:(_Bool)arg3;
+ (id)wbt_dataOfFile:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
+ (_Bool)wbt_removeItemAtPath:(id)arg1;
@end

