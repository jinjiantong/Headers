//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface AWEPhotoUploadParametersResponseModel : MTLModel <MTLJSONSerializing>
{
    NSString *_appKey;
    NSString *_fileHostName;
    NSString *_imageHostName;
    NSNumber *_fileRetryCount;
    NSNumber *_rwTimeout;
    NSString *_authorization;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *authorization; // @synthesize authorization=_authorization;
@property(retain, nonatomic) NSNumber *rwTimeout; // @synthesize rwTimeout=_rwTimeout;
@property(retain, nonatomic) NSNumber *fileRetryCount; // @synthesize fileRetryCount=_fileRetryCount;
@property(retain, nonatomic) NSString *imageHostName; // @synthesize imageHostName=_imageHostName;
@property(retain, nonatomic) NSString *fileHostName; // @synthesize fileHostName=_fileHostName;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

