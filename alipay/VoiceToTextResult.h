//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, VoiceToTextRpcResult;

@interface VoiceToTextResult : NSObject
{
    NSString *_resultCode;
    VoiceToTextRpcResult *_rpcResult;
    NSString *_translateResult;
    NSString *_isFinalResult;
    NSString *_timestamp;
}

@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *isFinalResult; // @synthesize isFinalResult=_isFinalResult;
@property(retain, nonatomic) NSString *translateResult; // @synthesize translateResult=_translateResult;
@property(retain, nonatomic) VoiceToTextRpcResult *rpcResult; // @synthesize rpcResult=_rpcResult;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;

@end

