//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IAsynDownloadImageObserver-Protocol.h>

@class NSMutableArray, NSString;
@protocol AVFunSubTitlesConfigMrgDelegate;

@interface AVFunSubTitlesConfigMrg : NSObject <IAsynDownloadImageObserver>
{
    struct dispatch_queue_s *_queue;
    NSMutableArray *_downloadList;
    id <AVFunSubTitlesConfigMrgDelegate> _delegate;
    NSMutableArray *_totalArray;
    NSMutableArray *_fontArray;
    NSString *_switchValue;
}

+ (id)fontItemArrayFrom:(id)arg1;
+ (id)itemArrayFrom:(id)arg1;
+ (id)packagePath:(id)arg1;
+ (id)zipPath:(id)arg1;
+ (id)configPath;
+ (id)basicPath;
+ (void)preDownload:(id)arg1;
+ (void)clearOldCache:(id)arg1;
+ (_Bool)setConfigToFile:(id)arg1;
+ (id)getConfigFromFile;
+ (void)saveConfigureation:(id)arg1;
+ (id)getInstance;
@property(copy, nonatomic) NSString *switchValue; // @synthesize switchValue=_switchValue;
@property(retain, nonatomic) NSMutableArray *fontArray; // @synthesize fontArray=_fontArray;
@property(retain, nonatomic) NSMutableArray *totalArray; // @synthesize totalArray=_totalArray;
@property(nonatomic) id <AVFunSubTitlesConfigMrgDelegate> delegate; // @synthesize delegate=_delegate;
- (void)downloadUnExitFont;
- (void)registerAllFont;
- (void)registerFont:(id)arg1;
- (void)unZipPacket:(id)arg1;
- (void)startDownload:(id)arg1;
- (void)downloadFont;
- (id)getSubTitlesArrayWithIconPrepared:(_Bool)arg1;
- (_Bool)isSubtitlesSwitchOn;
- (void)downloadImageFinished:(id)arg1;
- (struct dispatch_queue_s *)getCustomQueue;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

