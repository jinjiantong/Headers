//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface AMapNaviCoreRequest : NSObject
{
    int _type;
    int _moduleID;
    int _connectID;
    NSString *_url;
    NSData *_data;
    NSString *_head;
}

@property(copy, nonatomic) NSString *head; // @synthesize head=_head;
@property(nonatomic) int connectID; // @synthesize connectID=_connectID;
@property(nonatomic) int moduleID; // @synthesize moduleID=_moduleID;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

