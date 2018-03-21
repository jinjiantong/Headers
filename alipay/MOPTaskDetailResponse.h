//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MOPTaskDetail, NSString;

@interface MOPTaskDetailResponse : NSObject
{
    _Bool _success;
    _Bool _myTask;
    _Bool _mySolve;
    _Bool _canChat;
    _Bool _isDaoWeiAuthorized;
    NSString *_resultCode;
    NSString *_resultView;
    NSString *_desc;
    NSString *_msg;
    NSString *_followAction;
    NSString *_securityId;
    NSString *_verifyId;
    NSString *_verifyUrl;
    MOPTaskDetail *_taskDetail;
    NSString *_currentUserId;
    NSString *_currentUserLoginId;
    NSString *_currentUserName;
    NSString *_currentUserZMScore;
    NSString *_currentUserHeadImg;
    NSString *_currentUserPhone;
    NSString *_timePrompt;
}

@property(retain, nonatomic) NSString *timePrompt; // @synthesize timePrompt=_timePrompt;
@property(nonatomic) _Bool isDaoWeiAuthorized; // @synthesize isDaoWeiAuthorized=_isDaoWeiAuthorized;
@property(retain, nonatomic) NSString *currentUserPhone; // @synthesize currentUserPhone=_currentUserPhone;
@property(retain, nonatomic) NSString *currentUserHeadImg; // @synthesize currentUserHeadImg=_currentUserHeadImg;
@property(retain, nonatomic) NSString *currentUserZMScore; // @synthesize currentUserZMScore=_currentUserZMScore;
@property(nonatomic) _Bool canChat; // @synthesize canChat=_canChat;
@property(retain, nonatomic) NSString *currentUserName; // @synthesize currentUserName=_currentUserName;
@property(retain, nonatomic) NSString *currentUserLoginId; // @synthesize currentUserLoginId=_currentUserLoginId;
@property(retain, nonatomic) NSString *currentUserId; // @synthesize currentUserId=_currentUserId;
@property(nonatomic) _Bool mySolve; // @synthesize mySolve=_mySolve;
@property(nonatomic) _Bool myTask; // @synthesize myTask=_myTask;
@property(retain, nonatomic) MOPTaskDetail *taskDetail; // @synthesize taskDetail=_taskDetail;
@property(retain, nonatomic) NSString *verifyUrl; // @synthesize verifyUrl=_verifyUrl;
@property(retain, nonatomic) NSString *verifyId; // @synthesize verifyId=_verifyId;
@property(retain, nonatomic) NSString *securityId; // @synthesize securityId=_securityId;
@property(retain, nonatomic) NSString *followAction; // @synthesize followAction=_followAction;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end
