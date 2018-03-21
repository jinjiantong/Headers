//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface NetWorkDetecItem : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasDomainName;
    _Bool _hasIp;
    _Bool _hasPort;
    _Bool _hasProtocol;
    _Bool _hasSendRequest;
    _Bool _hasValidResponse;
    _Bool _hasRttTimeout;
    _Bool _hasDetecTimes;
    int _port;
    int _protocol;
    int _rttTimeout;
    int _detecTimes;
    NSString *_domainName;
    NSString *_ip;
    NSString *_sendRequest;
    NSString *_validResponse;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) int detecTimes; // @synthesize detecTimes=_detecTimes;
@property(nonatomic) int rttTimeout; // @synthesize rttTimeout=_rttTimeout;
@property(retain, nonatomic) NSString *validResponse; // @synthesize validResponse=_validResponse;
@property(retain, nonatomic) NSString *sendRequest; // @synthesize sendRequest=_sendRequest;
@property(nonatomic) int protocol; // @synthesize protocol=_protocol;
@property(nonatomic) int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(retain, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(readonly) _Bool hasDetecTimes; // @synthesize hasDetecTimes=_hasDetecTimes;
@property(readonly) _Bool hasRttTimeout; // @synthesize hasRttTimeout=_hasRttTimeout;
@property(readonly) _Bool hasValidResponse; // @synthesize hasValidResponse=_hasValidResponse;
@property(readonly) _Bool hasSendRequest; // @synthesize hasSendRequest=_hasSendRequest;
@property(readonly) _Bool hasProtocol; // @synthesize hasProtocol=_hasProtocol;
@property(readonly) _Bool hasPort; // @synthesize hasPort=_hasPort;
@property(readonly) _Bool hasIp; // @synthesize hasIp=_hasIp;
@property(readonly) _Bool hasDomainName; // @synthesize hasDomainName=_hasDomainName;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
