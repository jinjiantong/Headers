//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSArray, WBLikeListTag;

@interface WBPageMultiUserSevenCard : WBPageCard
{
    NSArray *_users;
    long long _type;
    NSArray *_items;
    WBLikeListTag *_profileTag;
    NSArray *_searchHistorys;
    long long _dataFrom;
}

+ (Class)fangleTableCellClass;
+ (Class)viewClass;
+ (Class)tableViewCellClass;
@property(nonatomic) long long dataFrom; // @synthesize dataFrom=_dataFrom;
@property(retain, nonatomic) NSArray *searchHistorys; // @synthesize searchHistorys=_searchHistorys;
@property(retain, nonatomic) WBLikeListTag *profileTag; // @synthesize profileTag=_profileTag;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (void)dealloc;
- (id)contentsArrayWithArray:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;

@end

