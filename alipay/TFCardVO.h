//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TFCardVO : NSObject
{
    _Bool _cardNoHidden;
    NSString *_cardNo;
    NSString *_cardIndex;
    NSString *_bankShortName;
    NSString *_sourceChannel;
    NSString *_holderName;
    NSString *_bankName;
}

@property(nonatomic) _Bool cardNoHidden; // @synthesize cardNoHidden=_cardNoHidden;
@property(retain, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(retain, nonatomic) NSString *holderName; // @synthesize holderName=_holderName;
@property(retain, nonatomic) NSString *sourceChannel; // @synthesize sourceChannel=_sourceChannel;
@property(retain, nonatomic) NSString *bankShortName; // @synthesize bankShortName=_bankShortName;
@property(retain, nonatomic) NSString *cardIndex; // @synthesize cardIndex=_cardIndex;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
- (void).cxx_destruct;

@end
