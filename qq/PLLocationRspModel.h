//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, PLPOIModel;

@interface PLLocationRspModel : NSObject
{
    unsigned int _uint32Ec;
    unsigned int _uint32Next;
    unsigned int _uint32IsForeign;
    NSMutableArray *_rptPoilistArr;
    PLPOIModel *_mylbs;
    NSString *_strSearchId;
}

@property(retain, nonatomic) NSString *strSearchId; // @synthesize strSearchId=_strSearchId;
@property(nonatomic) unsigned int uint32IsForeign; // @synthesize uint32IsForeign=_uint32IsForeign;
@property(nonatomic) unsigned int uint32Next; // @synthesize uint32Next=_uint32Next;
@property(retain, nonatomic) PLPOIModel *mylbs; // @synthesize mylbs=_mylbs;
@property(retain, nonatomic) NSMutableArray *rptPoilistArr; // @synthesize rptPoilistArr=_rptPoilistArr;
@property(nonatomic) unsigned int uint32Ec; // @synthesize uint32Ec=_uint32Ec;
- (void)dealloc;

@end
