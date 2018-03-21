//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCRBaseReqVO.h"

@class NSString;

@interface CCRCreateCreditCardRepaymentReqVO : CCRBaseReqVO
{
    NSString *_cardNumber;
    NSString *_cardNumberType;
    NSString *_orderSource;
    NSString *_outOrderNo;
    NSString *_bankMark;
    NSString *_holderName;
    NSString *_repayAmount;
    NSString *_publicId;
    NSString *_agreementId;
}

@property(retain, nonatomic) NSString *agreementId; // @synthesize agreementId=_agreementId;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(retain, nonatomic) NSString *repayAmount; // @synthesize repayAmount=_repayAmount;
@property(retain, nonatomic) NSString *holderName; // @synthesize holderName=_holderName;
@property(retain, nonatomic) NSString *bankMark; // @synthesize bankMark=_bankMark;
@property(retain, nonatomic) NSString *outOrderNo; // @synthesize outOrderNo=_outOrderNo;
@property(retain, nonatomic) NSString *orderSource; // @synthesize orderSource=_orderSource;
@property(retain, nonatomic) NSString *cardNumberType; // @synthesize cardNumberType=_cardNumberType;
@property(retain, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
- (void).cxx_destruct;

@end
