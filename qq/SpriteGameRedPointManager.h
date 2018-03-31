//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache;

@interface SpriteGameRedPointManager : NSObject
{
    NSCache *_cache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (int)hasGameRedPoint;
- (void)wordingShowed:(id)arg1;
- (id)latestRedModelForWording;
- (_Bool)needRedPoint:(int)arg1;
- (void)redPointShowed:(int)arg1 hasActivityBtn:(_Bool)arg2 hasToolBtn:(_Bool)arg3;
- (void)redPointShowed:(int)arg1 dotId:(int)arg2;
- (id)keyWithGameId:(int)arg1 dotId:(int)arg2;
- (void)saveRedPointByPushModel:(id)arg1;
- (void)saveRedPointItem:(id)arg1 gameId:(int)arg2 dotId:(int)arg3;
- (void)p_cacheRedPointItem:(id)arg1 gameId:(int)arg2 dotId:(int)arg3;
- (id)p_getRedPointItem:(int)arg1 dotId:(int)arg2;
- (id)getNeedShowRedPointItem:(int)arg1 dotId:(int)arg2;
- (_Bool)needRedPoint:(int)arg1 dotId:(int)arg2;
- (id)getRedPointItemByGameId:(int)arg1;
- (id)getRedPointModel:(int)arg1;
- (void)p_saveRedPointModel:(id)arg1;
- (id)getRedPointModelList;
- (void)p_saveRedPointModelList:(id)arg1;
- (void)updateRedPointModels:(id)arg1;
- (void)fecth:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isValid;
- (id)contentOfBufferDict;
- (id)gameActivityBufferDict;
- (id)keyForHasShownGameActivityBubble;
- (id)activityMission;
- (void)saveHasShownSpritePanelGameListRedPoint;
- (void)saveHasShownBubble;
- (_Bool)isNeedShowSpritePanelGameListRedPoint;
- (_Bool)isNeedShowAIOGameActivityBubble;
- (id)gamePushItem;
- (void)dealloc;
- (id)init;

@end

