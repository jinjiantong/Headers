//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface NearbyFanInfo : QQModel
{
    unsigned int _fansNum;
    NSString *_fansActUrl;
    unsigned int _followsNum;
    NSString *_followsActUrl;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *fansActUrl; // @dynamic fansActUrl;
@property(nonatomic) unsigned int fansNum; // @dynamic fansNum;
@property(copy, nonatomic) NSString *followsActUrl; // @dynamic followsActUrl;
@property(nonatomic) unsigned int followsNum; // @dynamic followsNum;

@end
