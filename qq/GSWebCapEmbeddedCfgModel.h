//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface GSWebCapEmbeddedCfgModel : NSObject
{
    NSString *_serverName;
    NSArray *_supportGSFlags;
    NSString *_serverClass;
    NSArray *_actions;
    int _xo;
}

- (void).cxx_destruct;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSArray *actions; // @dynamic actions;
@property(retain, nonatomic) NSString *serverClass; // @dynamic serverClass;
@property(retain, nonatomic) NSString *serverName; // @dynamic serverName;
@property(retain, nonatomic) NSArray *supportGSFlags; // @dynamic supportGSFlags;

@end
