//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBKMoCarBookingCarModel, MBKMoCarOrderInfoModel;

@interface MBKMoCarCurrentStateModel : NSObject
{
    _Bool _isNew;
    MBKMoCarOrderInfoModel *_carOrderSummaryVO;
    MBKMoCarBookingCarModel *_userCarBookingVO;
    long long _displayType;
}

+ (id)jsonKeyToClassNameMap;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) MBKMoCarBookingCarModel *userCarBookingVO; // @synthesize userCarBookingVO=_userCarBookingVO;
@property(retain, nonatomic) MBKMoCarOrderInfoModel *carOrderSummaryVO; // @synthesize carOrderSummaryVO=_carOrderSummaryVO;
- (void).cxx_destruct;

@end
