//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@interface CIndicatorMACDDataPara : NSObject <NSCoding>
{
    CDStruct_2b56ed6f _dif;
    CDStruct_2b56ed6f _dea;
    CDStruct_2b56ed6f _macd;
    CDStruct_1ed7117a _date;
}

@property(nonatomic) CDStruct_2b56ed6f macd; // @synthesize macd=_macd;
@property(nonatomic) CDStruct_2b56ed6f dea; // @synthesize dea=_dea;
@property(nonatomic) CDStruct_2b56ed6f dif; // @synthesize dif=_dif;
@property(nonatomic) CDStruct_1ed7117a date; // @synthesize date=_date;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

