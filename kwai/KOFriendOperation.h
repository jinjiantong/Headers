//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KOBaseContext.h"

@class KOFriendContext;

@interface KOFriendOperation : KOBaseContext
{
    _Bool _secureResource;
    KOFriendContext *_leftContext;
    KOFriendContext *_rightContext;
    long long _operationType;
    long long _limit;
    long long _ordering;
}

+ (id)operationWithLeftContext:(id)arg1 rightContext:(id)arg2 operationType:(long long)arg3 secureResource:(_Bool)arg4 limit:(long long)arg5 ordering:(long long)arg6;
+ (id)operationWithLeftContext:(id)arg1 rightContext:(id)arg2 operationType:(long long)arg3;
@property(readonly, nonatomic) long long ordering; // @synthesize ordering=_ordering;
@property(readonly, nonatomic) long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) _Bool secureResource; // @synthesize secureResource=_secureResource;
@property(readonly, nonatomic) long long operationType; // @synthesize operationType=_operationType;
@property(readonly, nonatomic) KOFriendContext *rightContext; // @synthesize rightContext=_rightContext;
@property(readonly, nonatomic) KOFriendContext *leftContext; // @synthesize leftContext=_leftContext;
- (void).cxx_destruct;
- (id)initWithLeftContext:(id)arg1 rightContext:(id)arg2 operationType:(long long)arg3 secureResource:(_Bool)arg4 limit:(long long)arg5 ordering:(long long)arg6;

@end

