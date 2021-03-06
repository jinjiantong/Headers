//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSThirdAuthAppInfo, NSArray, NSError, NSString;

@interface KSThirdAuthService : NSObject
{
    _Bool _isCancelled;
    KSThirdAuthAppInfo *_appInfo;
    NSString *_code;
    NSString *_state;
    NSError *_error;
    NSString *_confirmToken;
    NSArray *_scopeArray;
    NSString *_bundleId;
    NSString *_responseType;
    NSString *_scopeStr;
}

@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(copy, nonatomic) NSString *scopeStr; // @synthesize scopeStr=_scopeStr;
@property(copy, nonatomic) NSString *responseType; // @synthesize responseType=_responseType;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSArray *scopeArray; // @synthesize scopeArray=_scopeArray;
@property(copy, nonatomic) NSString *confirmToken; // @synthesize confirmToken=_confirmToken;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) KSThirdAuthAppInfo *appInfo; // @synthesize appInfo=_appInfo;
- (void).cxx_destruct;
- (void)goBackToThirdApp:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmLogin:(CDUnknownBlockType)arg1;
- (void)fetchThirdAuthInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

