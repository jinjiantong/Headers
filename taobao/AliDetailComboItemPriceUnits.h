//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailComboItemPriceUnits : TBJSONModel
{
    int _display;
    NSString *_name;
    NSString *_price;
    NSString *_rangePrice;
}

@property(nonatomic) int display; // @synthesize display=_display;
@property(retain, nonatomic) NSString *rangePrice; // @synthesize rangePrice=_rangePrice;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
