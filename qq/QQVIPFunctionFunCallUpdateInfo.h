//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface QQVIPFunctionFunCallUpdateInfo : NSObject
{
    NSString *_funCallId;
    NSString *_resName;
    double _progress;
    NSNumber *_status;
    NSString *_resUrl;
    int _xo;
}

@property(retain, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;
- (void).cxx_destruct;
@property(nonatomic) double progress; // @dynamic progress;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *funCallId; // @dynamic funCallId;
@property(retain, nonatomic) NSString *resName; // @dynamic resName;
@property(retain, nonatomic) NSNumber *status; // @dynamic status;

@end
