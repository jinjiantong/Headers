//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TBLiveQAAnswerModel : NSObject
{
    _Bool _isRight;
    _Bool _isOut;
    _Bool _isNoSelect;
    NSString *_answer;
    NSString *_title;
    long long _totalCount;
    long long _totalCount4Loser;
    long long _sequence;
    long long _CDNCurrentTime;
    long long _time2InvalidateSEI;
    NSString *_atmosphereUrl;
    NSArray *_options;
    NSArray *_rewards;
    NSString *_currentSelectValue;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(copy, nonatomic) NSString *currentSelectValue; // @synthesize currentSelectValue=_currentSelectValue;
@property(nonatomic) _Bool isNoSelect; // @synthesize isNoSelect=_isNoSelect;
@property(nonatomic) _Bool isOut; // @synthesize isOut=_isOut;
@property(nonatomic) _Bool isRight; // @synthesize isRight=_isRight;
@property(retain, nonatomic) NSArray *rewards; // @synthesize rewards=_rewards;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *atmosphereUrl; // @synthesize atmosphereUrl=_atmosphereUrl;
@property(nonatomic) long long time2InvalidateSEI; // @synthesize time2InvalidateSEI=_time2InvalidateSEI;
@property(nonatomic) long long CDNCurrentTime; // @synthesize CDNCurrentTime=_CDNCurrentTime;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) long long totalCount4Loser; // @synthesize totalCount4Loser=_totalCount4Loser;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *answer; // @synthesize answer=_answer;
- (void).cxx_destruct;

@end

