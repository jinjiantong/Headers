//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface GdtAdRspDestInfo : NSObject
{
    unsigned int _destURLDisplayType;
    unsigned int _destType;
    NSString *_landingPage;
    NSString *_canvasJson;
}

@property(nonatomic) unsigned int destType; // @synthesize destType=_destType;
@property(copy, nonatomic) NSString *canvasJson; // @synthesize canvasJson=_canvasJson;
@property(copy, nonatomic) NSString *landingPage; // @synthesize landingPage=_landingPage;
@property(nonatomic) unsigned int destURLDisplayType; // @synthesize destURLDisplayType=_destURLDisplayType;

@end

