//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppComponentBaseItem.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSArray, NSDictionary, WeAppExpressionItem, WeAppStyleBindingItem;

@interface WeAppConditionItem : WeAppComponentBaseItem <NSCopying, NSMutableCopying>
{
    NSDictionary *dictData;
    WeAppExpressionItem *_expression;
    WeAppStyleBindingItem *_styleBinding;
    NSDictionary *_dataBinding;
    NSArray *_events;
    unsigned long long _executeType;
}

@property(nonatomic) unsigned long long executeType; // @synthesize executeType=_executeType;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSDictionary *dataBinding; // @synthesize dataBinding=_dataBinding;
@property(retain, nonatomic) WeAppStyleBindingItem *styleBinding; // @synthesize styleBinding=_styleBinding;
@property(retain, nonatomic) WeAppExpressionItem *expression; // @synthesize expression=_expression;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)parseStaticDataWithWeAppDataManager:(id)arg1;
- (void)parseDataBindingWithIndex:(unsigned long long)arg1 weAppDataManager:(id)arg2 prefix:(id)arg3;
- (void)parseDataBindingWithIndex:(unsigned long long)arg1 weAppDataManager:(id)arg2;

@end

