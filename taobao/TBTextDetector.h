//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBTextParser-Protocol.h"

@class NSDictionary, NSRegularExpression, NSString;

@interface TBTextDetector : NSObject <TBTextParser>
{
    _Bool _linkable;
    NSString *_name;
    unsigned long long _linkGesture;
    NSRegularExpression *_regularExpression;
    NSDictionary *_attributes;
    NSDictionary *_highlightedAttributes;
    CDUnknownBlockType _replacementBlock;
}

+ (id)detectorWithTypes:(unsigned long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType replacementBlock; // @synthesize replacementBlock=_replacementBlock;
@property(retain, nonatomic) NSDictionary *highlightedAttributes; // @synthesize highlightedAttributes=_highlightedAttributes;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
@property(nonatomic) unsigned long long linkGesture; // @synthesize linkGesture=_linkGesture;
@property(nonatomic) _Bool linkable; // @synthesize linkable=_linkable;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)parseAttributedText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

