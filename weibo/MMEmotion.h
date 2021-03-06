//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSArray, NSString;

@interface MMEmotion : WBModelObject
{
    NSString *_eid;
    NSString *_eName;
    NSString *_ePath;
    NSString *_eChain;
    NSString *_eUrl;
    NSArray *_pictures;
}

@property(retain, nonatomic) NSArray *pictures; // @synthesize pictures=_pictures;
@property(copy, nonatomic) NSString *eUrl; // @synthesize eUrl=_eUrl;
@property(copy, nonatomic) NSString *eChain; // @synthesize eChain=_eChain;
@property(copy, nonatomic) NSString *ePath; // @synthesize ePath=_ePath;
@property(copy, nonatomic) NSString *eName; // @synthesize eName=_eName;
@property(copy, nonatomic) NSString *eid; // @synthesize eid=_eid;
- (void).cxx_destruct;
- (_Bool)updateWithJSONDictionary:(id)arg1;

@end

