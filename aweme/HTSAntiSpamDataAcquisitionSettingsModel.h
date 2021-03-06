//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface HTSAntiSpamDataAcquisitionSettingsModel : MTLModel <MTLJSONSerializing>
{
    _Bool _enableCustomSDK;
    _Bool _enableGyro;
    long long _statusCode;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool enableGyro; // @synthesize enableGyro=_enableGyro;
@property(nonatomic) _Bool enableCustomSDK; // @synthesize enableCustomSDK=_enableCustomSDK;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

