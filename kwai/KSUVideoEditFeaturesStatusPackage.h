//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface KSUVideoEditFeaturesStatusPackage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool cut; // @dynamic cut;
@property(retain, nonatomic) NSMutableArray *effectArray; // @dynamic effectArray;
@property(readonly, nonatomic) unsigned long long effectArray_Count; // @dynamic effectArray_Count;
@property(nonatomic) unsigned int effectIndex; // @dynamic effectIndex;
@property(retain, nonatomic) NSMutableArray *filterArray; // @dynamic filterArray;
@property(readonly, nonatomic) unsigned long long filterArray_Count; // @dynamic filterArray_Count;
@property(nonatomic) unsigned int filterIndex; // @dynamic filterIndex;
@property(retain, nonatomic) NSMutableArray *magicArray; // @dynamic magicArray;
@property(readonly, nonatomic) unsigned long long magicArray_Count; // @dynamic magicArray_Count;
@property(retain, nonatomic) NSMutableArray *magicFingerArray; // @dynamic magicFingerArray;
@property(readonly, nonatomic) unsigned long long magicFingerArray_Count; // @dynamic magicFingerArray_Count;
@property(nonatomic) unsigned int magicIndex; // @dynamic magicIndex;
@property(retain, nonatomic) NSMutableArray *musicArray; // @dynamic musicArray;
@property(readonly, nonatomic) unsigned long long musicArray_Count; // @dynamic musicArray_Count;
@property(nonatomic) unsigned int musicIndex; // @dynamic musicIndex;
@property(retain, nonatomic) NSMutableArray *stickerArray; // @dynamic stickerArray;
@property(readonly, nonatomic) unsigned long long stickerArray_Count; // @dynamic stickerArray_Count;
@property(nonatomic) unsigned int stickerIndex; // @dynamic stickerIndex;
@property(nonatomic) _Bool subtitle; // @dynamic subtitle;
@property(retain, nonatomic) NSMutableArray *transitionArray; // @dynamic transitionArray;
@property(readonly, nonatomic) unsigned long long transitionArray_Count; // @dynamic transitionArray_Count;
@property(nonatomic) unsigned int transitionIndex; // @dynamic transitionIndex;

@end
