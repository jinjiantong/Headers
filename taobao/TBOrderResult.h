//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSString, TBOrderServiceOperation;
@protocol TBSDKErrorRule;

@interface TBOrderResult : NSObject
{
    _Bool _isSuccess;
    NSString *_errorCode;
    NSString *_errorMessage;
    TBOrderServiceOperation *_operation;
    NSString *_responseString;
    NSError *_error;
    id <TBSDKErrorRule> _errorRule;
}

@property(retain, nonatomic) id <TBSDKErrorRule> errorRule; // @synthesize errorRule=_errorRule;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) TBOrderServiceOperation *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
- (void).cxx_destruct;
- (_Bool)isFlowControl;
- (id)subMsg:(id)arg1;
- (id)mappError;

@end
