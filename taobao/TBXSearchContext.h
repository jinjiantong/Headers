//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSearchContext.h"

@class NSMutableDictionary, NSString;

@interface TBXSearchContext : XSearchContext
{
    _Bool _enableH5Dwinstance;
    _Bool _globalAutoPlayEnabled;
    NSString *_editionCode;
    NSMutableDictionary *_globalParams;
    NSString *_srpApp;
    NSString *_videoPage;
    double _safeAreaBottom;
}

@property(nonatomic) _Bool globalAutoPlayEnabled; // @synthesize globalAutoPlayEnabled=_globalAutoPlayEnabled;
@property(nonatomic) double safeAreaBottom; // @synthesize safeAreaBottom=_safeAreaBottom;
@property(retain, nonatomic) NSString *videoPage; // @synthesize videoPage=_videoPage;
@property(retain, nonatomic) NSString *srpApp; // @synthesize srpApp=_srpApp;
@property(retain, nonatomic) NSMutableDictionary *globalParams; // @synthesize globalParams=_globalParams;
@property(retain, nonatomic) NSString *editionCode; // @synthesize editionCode=_editionCode;
@property(nonatomic) _Bool enableH5Dwinstance; // @synthesize enableH5Dwinstance=_enableH5Dwinstance;
- (void).cxx_destruct;
- (void)addGlobalParamsWithQuery:(id)arg1;
- (void)processGlobalParamsWithQuery:(id)arg1;
- (_Bool)oldTaoIsOpen;
- (_Bool)isOpenCunTao;
- (void)initializeData;
- (id)init;

@end

