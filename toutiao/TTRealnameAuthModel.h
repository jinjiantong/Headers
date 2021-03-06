//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSNumber, NSString, UIImage;

@interface TTRealnameAuthModel : NSObject
{
    _Bool _dismissFlag;
    _Bool _clearImageFlag;
    _Bool _editInfoFlag;
    _Bool _finishFlag;
    long long _state;
    UIImage *_foregroundImage;
    UIImage *_backgroundImage;
    UIImage *_personImage;
    NSString *_name;
    NSString *_IDNum;
    NSNumber *_authStatus;
    NSError *_authStatusError;
    NSError *_foregroundError;
    NSError *_backgroundError;
    NSError *_submitError;
    NSError *_personError;
}

+ (id)modelWithState:(long long)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool finishFlag; // @synthesize finishFlag=_finishFlag;
@property(nonatomic) _Bool editInfoFlag; // @synthesize editInfoFlag=_editInfoFlag;
@property(nonatomic) _Bool clearImageFlag; // @synthesize clearImageFlag=_clearImageFlag;
@property(nonatomic) _Bool dismissFlag; // @synthesize dismissFlag=_dismissFlag;
@property(copy, nonatomic) NSError *personError; // @synthesize personError=_personError;
@property(copy, nonatomic) NSError *submitError; // @synthesize submitError=_submitError;
@property(copy, nonatomic) NSError *backgroundError; // @synthesize backgroundError=_backgroundError;
@property(copy, nonatomic) NSError *foregroundError; // @synthesize foregroundError=_foregroundError;
@property(copy, nonatomic) NSError *authStatusError; // @synthesize authStatusError=_authStatusError;
@property(retain, nonatomic) NSNumber *authStatus; // @synthesize authStatus=_authStatus;
@property(copy, nonatomic) NSString *IDNum; // @synthesize IDNum=_IDNum;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImage *personImage; // @synthesize personImage=_personImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *foregroundImage; // @synthesize foregroundImage=_foregroundImage;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;

@end

