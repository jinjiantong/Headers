//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class PBEnumDescriptorProto;

@interface PBEnumDescriptorProtoBuilder : PBGeneratedMessageBuilder
{
    PBEnumDescriptorProto *resultEnumDescriptorProto;
}

@property(retain) PBEnumDescriptorProto *resultEnumDescriptorProto; // @synthesize resultEnumDescriptorProto;
- (void).cxx_destruct;
- (id)clearOptions;
- (id)mergeOptions:(id)arg1;
- (id)setOptionsBuilder:(id)arg1;
- (id)setOptions:(id)arg1;
- (id)options;
- (_Bool)hasOptions;
- (id)clearValue;
- (id)setValueArray:(id)arg1;
- (id)addValue:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)value;
- (id)clearName;
- (id)setName:(id)arg1;
- (id)name;
- (_Bool)hasName;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;

@end

