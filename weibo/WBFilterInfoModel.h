//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSArray, WBFilterTabInfo;

@interface WBFilterInfoModel : WBModelObject
{
    WBFilterTabInfo *filterTabInfo;
    NSArray *filterItems;
}

@property(retain, nonatomic) NSArray *filterItems; // @synthesize filterItems;
@property(retain, nonatomic) WBFilterTabInfo *filterTabInfo; // @synthesize filterTabInfo;
- (void)dealloc;
- (_Bool)updateWithDictionary:(id)arg1;

@end

