//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/PluginObject.h>

@class QQLockDictionary;

@interface PCCResourceManager : PluginObject
{
    QQLockDictionary *_fileSizeDic;
}

+ (id)filePathWithBid:(id)arg1 rid:(id)arg2;
+ (id)filePathWithBid:(id)arg1 md5:(id)arg2;
+ (id)GetInstance;
@property(retain, nonatomic) QQLockDictionary *fileSizeDic; // @synthesize fileSizeDic=_fileSizeDic;
- (void).cxx_destruct;
- (void)loginSuccess;
- (void)receivedDeleteResourcesNotification:(id)arg1;
- (void)registerNotification;
- (void)addRSItemsToDB:(id)arg1;
- (void)updateRSItemsToDB:(id)arg1;
- (void)deleteResources:(id)arg1;
- (id)loadRSItemsCreateIfNeeded:(id)arg1 bid:(id)arg2 existedItems:(id *)arg3 createdItems:(id *)arg4;
- (id)loadResourceItemsForBid:(id)arg1;
- (_Bool)isDownloaded:(id)arg1 homePath:(id)arg2;
- (id)isDownloadedDictionary:(id)arg1 homePath:(id)arg2;
- (void)predownloadResourceStatusItem:(id)arg1 homePath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleCompleteCount:(long long *)arg1 withItemsCount:(long long)arg2 md5List:(id)arg3 homePath:(id)arg4 existedItem:(id)arg5 createdItem:(id)arg6 block:(CDUnknownBlockType)arg7;
- (void)predownloadResourceItems:(id)arg1 bid:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)predownload;
- (void)predownloadIfEnable;
- (void)createTableIfNeeded;
- (id)init;

@end

