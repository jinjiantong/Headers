//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface CardPreviewRequest : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(readonly) _Bool hasLatitude; // @dynamic hasLatitude;
@property(readonly) _Bool hasLongitude; // @dynamic hasLongitude;
@property(readonly) _Bool hasPartnerId; // @dynamic hasPartnerId;
@property(readonly) _Bool hasShopId; // @dynamic hasShopId;
@property(readonly) _Bool hasTemplateId; // @dynamic hasTemplateId;
@property(retain, nonatomic) NSString *latitude; // @dynamic latitude;
@property(retain, nonatomic) NSString *longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *partnerId; // @dynamic partnerId;
@property(retain, nonatomic) NSString *shopId; // @dynamic shopId;
@property(retain, nonatomic) NSString *templateId; // @dynamic templateId;

@end
