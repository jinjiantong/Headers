//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface MSOAWeexService : NSObject <WXModuleProtocol>
{
    WXSDKInstance *_weexInstance;
}

+ (id)wx_export_method_17;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance=_weexInstance;
- (void).cxx_destruct;
- (void)requestService:(id)arg1 callBack:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
