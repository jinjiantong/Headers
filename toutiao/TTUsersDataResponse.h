//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;
@protocol Optional, TTUserDataResponse;

@interface TTUsersDataResponse : JSONModel
{
    NSArray<TTUserDataResponse> *_userInfos;
    NSString<Optional> *_message;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *message; // @synthesize message=_message;
@property(copy, nonatomic) NSArray<TTUserDataResponse> *userInfos; // @synthesize userInfos=_userInfos;
- (void).cxx_destruct;

@end

