//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IYWMessage-Protocol.h"
#import "YWCoreDataBridgeable-Protocol.h"

@class NSDate, NSDictionary, NSManagedObjectID, NSString, YWIMCore, YWMessageBody, YWPerson;

@interface WXOMessageObject : NSObject <YWCoreDataBridgeable, IYWMessage>
{
    _Bool _outgoing;
    _Bool _hasReaded;
    _Bool _receiverHasReaded;
    unsigned long long _messageType;
    NSString *_messageId;
    YWPerson *_messageFromPerson;
    YWPerson *_messageToPerson;
    unsigned long long _messageSendStatus;
    NSString *_conversationId;
    long long _conversationType;
    YWMessageBody *_messageBody;
    NSDate *_time;
    NSString *_ownerName;
    YWIMCore *_coreRef;
    NSManagedObjectID *_managedObjectID;
    NSDictionary *_extraInfo;
    NSDictionary *_controlParameters;
    NSString *_rootMsgId;
    NSDictionary *_internalDictionary;
}

+ (id)bridgeFromManagedObject:(id)arg1 imCore:(id)arg2;
@property(retain, nonatomic) NSDictionary *internalDictionary; // @synthesize internalDictionary=_internalDictionary;
@property(copy, nonatomic) NSString *rootMsgId; // @synthesize rootMsgId=_rootMsgId;
@property(copy, nonatomic) NSDictionary *controlParameters; // @synthesize controlParameters=_controlParameters;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSManagedObjectID *managedObjectID; // @synthesize managedObjectID=_managedObjectID;
@property(nonatomic) __weak YWIMCore *coreRef; // @synthesize coreRef=_coreRef;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(nonatomic) _Bool receiverHasReaded; // @synthesize receiverHasReaded=_receiverHasReaded;
@property(nonatomic) _Bool hasReaded; // @synthesize hasReaded=_hasReaded;
@property(nonatomic) _Bool outgoing; // @synthesize outgoing=_outgoing;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(retain, nonatomic) YWMessageBody *messageBody; // @synthesize messageBody=_messageBody;
@property(nonatomic) long long conversationType; // @synthesize conversationType=_conversationType;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) unsigned long long messageSendStatus; // @synthesize messageSendStatus=_messageSendStatus;
@property(readonly, nonatomic) YWPerson *messageToPerson; // @synthesize messageToPerson=_messageToPerson;
@property(retain, nonatomic) YWPerson *messageFromPerson; // @synthesize messageFromPerson=_messageFromPerson;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (id)_makeDictionaryFromWWMessage:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToMessageObject:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *modifyDate;
- (id)initWithWWMessage:(id)arg1 baseContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

