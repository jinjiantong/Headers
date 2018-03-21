//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPolygon.h"

#import "MBKPOIBackProtocol-Protocol.h"

@class NSString;

@interface MBKGeoFencingPolygon : MMPolygon <MBKPOIBackProtocol>
{
    _Bool isHiddenWhenNonHighLighted;
    _Bool isHighLighted;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isHighLighted; // @synthesize isHighLighted;
@property(nonatomic) _Bool isHiddenWhenNonHighLighted; // @synthesize isHiddenWhenNonHighLighted;

// Remaining properties
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
