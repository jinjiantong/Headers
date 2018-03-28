//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "Singleton-Protocol.h"
#import "TTAccountMulticastProtocol-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface TTSettingMineTabManager : NSObject <TTAccountMulticastProtocol, Singleton>
{
    _Bool _hadDisplayedADRegisterEntrance;
    NSArray *_sections;
    NSDictionary *_entries;
    NSDictionary *_cachedMineTabConfig;
}

+ (id)keyForType:(unsigned long long)arg1;
@property(retain, nonatomic) NSDictionary *cachedMineTabConfig; // @synthesize cachedMineTabConfig=_cachedMineTabConfig;
@property(retain, nonatomic) NSDictionary *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) _Bool hadDisplayedADRegisterEntrance; // @synthesize hadDisplayedADRegisterEntrance=_hadDisplayedADRegisterEntrance;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)onAccountStatusChanged:(long long)arg1 platform:(id)arg2;
- (void)buildExtraMineTabGroups;
- (void)buildMineTabGroups:(id)arg1;
- (_Bool)removeEntry:(id)arg1;
- (_Bool)insertEntry:(id)arg1 atIndexPath:(id)arg2;
- (void)buildLocalSections;
- (void)buildDictionary;
- (void)refreshPrivateLetterEntry:(_Bool)arg1;
- (_Bool)reloadSectionsIfNeeded;
- (void)setEntry:(id)arg1 ForType:(unsigned long long)arg2;
- (id)getEntryForType:(unsigned long long)arg1;
- (void)saveMineTabGroups;
- (void)startGetMineTabConfiguration;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
