//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol TBODetailQuestion;

@interface TBODetailAskModel : TBJSONModel
{
    NSString *_itemId;
    NSString *_title;
    NSString *_linkUrl;
    NSNumber *_questNum;
    NSNumber *_showNum;
    NSArray<TBODetailQuestion> *_modelList;
    NSArray<TBODetailQuestion> *_showList;
}

@property(retain, nonatomic) NSArray<TBODetailQuestion> *showList; // @synthesize showList=_showList;
@property(retain, nonatomic) NSArray<TBODetailQuestion> *modelList; // @synthesize modelList=_modelList;
@property(retain, nonatomic) NSNumber *showNum; // @synthesize showNum=_showNum;
@property(retain, nonatomic) NSNumber *questNum; // @synthesize questNum=_questNum;
@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

