//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ComicInfoModel, NSMutableArray;

@interface QQVIPFunctionReaderModelManager : NSObject
{
    int _readMode;
    int _xo;
    NSMutableArray *_sectionCache;
    NSMutableArray *_readerModelCache;
    ComicInfoModel *_comicModel;
    long long _preSecNum;
    long long _postSecNum;
}

- (id)getPrevSectionID:(id)arg1;
- (id)getNextSectionID:(id)arg1;
- (id)getNextSectionIDsNotInCache:(id)arg1;
- (id)getNextSectionIDsNotInCache:(id)arg1 withCount:(long long)arg2;
- (id)getPrevSectionIDsNotInCache:(id)arg1;
- (id)getPrevSectionIDsNotInCache:(id)arg1 withCount:(long long)arg2;
- (_Bool)isSectionInCache:(id)arg1;
- (long long)getSectionCacheCount;
- (long long)getReaderModelCount;
- (id)getSectionModelByID:(id)arg1;
- (void)updateCacheWithPicInfos:(id)arg1 sectionID:(id)arg2;
- (id)getReadModelAtIndex:(long long)arg1;
- (void)removeCacheWithSectionID:(id)arg1;
- (void)addCacheWithSectionModel:(id)arg1;
- (long long)getInsertIndexAtModelCache:(id)arg1;
- (long long)getPageIndexWithSectionId:(id)arg1 picID:(id)arg2;
- (long long)getPageIndexWithSectionId:(id)arg1;
- (long long)getSectionIndex:(id)arg1;
- (void)removeReadModelCacheWithID:(id)arg1;
- (void)addReadModelCacheWithSection:(id)arg1;
- (long long)findSectionCacheWithID:(id)arg1;
- (void)removeSectionCacheWithID:(id)arg1;
- (void)addSectionCacheWithModel:(id)arg1;
- (void)dealloc;
- (id)initWithComicInfoModel:(id)arg1;

// Remaining properties
@property(nonatomic) int readMode; // @dynamic readMode;

@end

