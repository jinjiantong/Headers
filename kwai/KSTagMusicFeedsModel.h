//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSAggregateFeedsModel.h"

@class KSMusicItem, NSString;

@interface KSTagMusicFeedsModel : KSAggregateFeedsModel
{
    KSMusicItem *_music;
    NSString *_llsid;
    CDUnknownBlockType _updateMusicBlock;
}

@property(copy, nonatomic) CDUnknownBlockType updateMusicBlock; // @synthesize updateMusicBlock=_updateMusicBlock;
@property(retain, nonatomic) NSString *llsid; // @synthesize llsid=_llsid;
@property(retain, nonatomic) KSMusicItem *music; // @synthesize music=_music;
- (void).cxx_destruct;

@end
