//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TFLaunchArgCache : NSObject
{
    _Bool _goBack;
    _Bool _stayResume;
    NSString *_hideExpression;
    NSString *_sourceID;
    NSString *_appId;
    NSString *_actionType;
    NSString *_account;
    NSString *_userId;
    NSString *_usageFlag;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSString *usageFlag; // @synthesize usageFlag=_usageFlag;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(nonatomic) _Bool stayResume; // @synthesize stayResume=_stayResume;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(nonatomic) _Bool goBack; // @synthesize goBack=_goBack;
@property(retain, nonatomic) NSString *hideExpression; // @synthesize hideExpression=_hideExpression;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end

