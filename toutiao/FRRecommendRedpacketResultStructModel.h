//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class FRRecommendRedpacketDataStructModel, NSArray, NSString;
@protocol FRCommonUserStructModel><Optional, Optional;

@interface FRRecommendRedpacketResultStructModel : JSONModel
{
    FRRecommendRedpacketDataStructModel *_redpack;
    NSString *_title;
    NSArray<FRCommonUserStructModel><Optional> *_users;
    NSString<Optional> *_show_label;
    NSString<Optional> *_button_text;
    NSString<Optional> *_button_schema;
}

@property(retain, nonatomic) NSString<Optional> *button_schema; // @synthesize button_schema=_button_schema;
@property(retain, nonatomic) NSString<Optional> *button_text; // @synthesize button_text=_button_text;
@property(retain, nonatomic) NSString<Optional> *show_label; // @synthesize show_label=_show_label;
@property(retain, nonatomic) NSArray<FRCommonUserStructModel><Optional> *users; // @synthesize users=_users;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) FRRecommendRedpacketDataStructModel *redpack; // @synthesize redpack=_redpack;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
