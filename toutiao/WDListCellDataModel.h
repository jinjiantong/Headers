//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSMutableArray, NSString, WDAnswerEntity;

@interface WDListCellDataModel : WDBaseModel
{
    long long _cellType;
    long long _layoutType;
    WDAnswerEntity *_answerEntity;
    NSMutableArray *_comments;
    long long _showLines;
    long long _maxLines;
    NSString *_uniqueId;
    unsigned long long _dataType;
}

@property(nonatomic) unsigned long long dataType; // @synthesize dataType=_dataType;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) long long maxLines; // @synthesize maxLines=_maxLines;
@property(nonatomic) long long showLines; // @synthesize showLines=_showLines;
@property(retain, nonatomic) NSMutableArray *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) WDAnswerEntity *answerEntity; // @synthesize answerEntity=_answerEntity;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasAnswerEntity;
- (id)initWithListCellStructModel:(id)arg1;

@end

