//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailPinTuanModel : TBJSONModel
{
    long long _joinedPerson;
    long long _neededPerson;
    long long _pageType;
    NSString *_leftButtonTopText;
    NSString *_leftButtonBottomText;
    NSString *_rightButtonTopText;
    NSString *_rightButtonBottomText;
}

@property(retain, nonatomic) NSString *rightButtonBottomText; // @synthesize rightButtonBottomText=_rightButtonBottomText;
@property(retain, nonatomic) NSString *rightButtonTopText; // @synthesize rightButtonTopText=_rightButtonTopText;
@property(retain, nonatomic) NSString *leftButtonBottomText; // @synthesize leftButtonBottomText=_leftButtonBottomText;
@property(retain, nonatomic) NSString *leftButtonTopText; // @synthesize leftButtonTopText=_leftButtonTopText;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) long long neededPerson; // @synthesize neededPerson=_neededPerson;
@property(nonatomic) long long joinedPerson; // @synthesize joinedPerson=_joinedPerson;
- (void).cxx_destruct;

@end

