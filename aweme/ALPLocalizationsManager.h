//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ALPLanguageModel, ALPLocalizationsConfig, NSArray, NSDictionary, NSMutableDictionary, NSPointerArray, NSString;

@interface ALPLocalizationsManager : NSObject
{
    _Bool _enabled;
    ALPLanguageModel *_currentLanguage;
    NSString *_groupName;
    NSString *_languageSourceRootPath;
    NSDictionary *_currentTranslationDictionary;
    NSDictionary *_currentLocalizedImageNames;
    NSArray *_languagePackageSupportedLanguages;
    ALPLocalizationsConfig *_config;
    NSPointerArray *_registeredObjects;
    NSMutableDictionary *_cachedImages;
}

+ (void)setCurrentLanguageKey:(id)arg1;
+ (id)instanceForGroup:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *cachedImages; // @synthesize cachedImages=_cachedImages;
@property(retain, nonatomic) NSPointerArray *registeredObjects; // @synthesize registeredObjects=_registeredObjects;
@property(retain, nonatomic) ALPLocalizationsConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSArray *languagePackageSupportedLanguages; // @synthesize languagePackageSupportedLanguages=_languagePackageSupportedLanguages;
@property(retain, nonatomic) NSDictionary *currentLocalizedImageNames; // @synthesize currentLocalizedImageNames=_currentLocalizedImageNames;
@property(retain, nonatomic) NSDictionary *currentTranslationDictionary; // @synthesize currentTranslationDictionary=_currentTranslationDictionary;
@property(retain, nonatomic) NSString *languageSourceRootPath; // @synthesize languageSourceRootPath=_languageSourceRootPath;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) ALPLanguageModel *currentLanguage; // @synthesize currentLanguage=_currentLanguage;
- (void).cxx_destruct;
- (void)registerObject:(id)arg1;
- (id)supportedImageNameForCode:(id)arg1;
- (void)reloadCurrentTranslationDictionary;
- (void)reloadUI;
- (_Bool)setCurrentLanguageKey:(id)arg1;
- (id)translatedImageForImage:(id)arg1;
- (id)translatedAttributedStringForString:(id)arg1;
- (id)translatedStringForString:(id)arg1;
- (id)filteredLanguages:(id)arg1;
@property(readonly, nonatomic) NSArray *supportedLanguages;
- (void)reloadLanguagePackageFromPath:(id)arg1 version:(long long)arg2;
- (id)languageFromCode:(id)arg1;
- (id)systemCodeToCode:(id)arg1;
- (void)renewCurrentLanguage;
- (void)startWithConfig:(id)arg1;
- (id)initWithGroupName:(id)arg1;

@end
