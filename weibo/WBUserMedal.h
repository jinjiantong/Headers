//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBUserMedal : WBModelObject
{
    NSString *medalID;
    NSString *name;
    NSString *iconUrl;
}

@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *medalID; // @synthesize medalID;
- (void).cxx_destruct;
- (_Bool)updateWithJSONDictionary:(id)arg1;

@end

