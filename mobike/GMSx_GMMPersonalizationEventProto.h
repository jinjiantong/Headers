//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_GMGEOMLocation, NSString;

@interface GMSx_GMMPersonalizationEventProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *applicationLabel; // @dynamic applicationLabel;
@property(retain, nonatomic) NSString *applicationPackageName; // @dynamic applicationPackageName;
@property(nonatomic) _Bool causedLocationHistoryImpression; // @dynamic causedLocationHistoryImpression;
@property(retain, nonatomic) NSString *ei; // @dynamic ei;
@property(retain, nonatomic) NSString *featureId; // @dynamic featureId;
@property(nonatomic) _Bool hasApplicationLabel; // @dynamic hasApplicationLabel;
@property(nonatomic) _Bool hasApplicationPackageName; // @dynamic hasApplicationPackageName;
@property(nonatomic) _Bool hasCausedLocationHistoryImpression; // @dynamic hasCausedLocationHistoryImpression;
@property(nonatomic) _Bool hasEi; // @dynamic hasEi;
@property(nonatomic) _Bool hasFeatureId; // @dynamic hasFeatureId;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasVed; // @dynamic hasVed;
@property(retain, nonatomic) GMSx_GMGEOMLocation *location; // @dynamic location;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *ved; // @dynamic ved;

@end
