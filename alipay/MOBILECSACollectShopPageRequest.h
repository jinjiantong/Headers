//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSABaseRpcRequest.h"

@class NSString;

@interface MOBILECSACollectShopPageRequest : MOBILECSABaseRpcRequest
{
    int _pageSize;
    NSString *_lastObjectId;
    NSString *_clientVersion;
    NSString *_tplVersion;
    NSString *_templateParams;
    NSString *_dtLogMonitor;
}

@property(retain, nonatomic) NSString *dtLogMonitor; // @synthesize dtLogMonitor=_dtLogMonitor;
@property(retain, nonatomic) NSString *templateParams; // @synthesize templateParams=_templateParams;
@property(retain, nonatomic) NSString *tplVersion; // @synthesize tplVersion=_tplVersion;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *lastObjectId; // @synthesize lastObjectId=_lastObjectId;
- (void).cxx_destruct;

@end

