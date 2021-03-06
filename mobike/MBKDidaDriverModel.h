//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBKViewModelProtocol-Protocol.h"

@class NSString;

@interface MBKDidaDriverModel : NSObject <MBKViewModelProtocol>
{
    _Bool _willCellBeHidden;
    NSString *_photoSrc;
    NSString *_name;
    NSString *_licensePlates;
    NSString *_vehicleColor;
    NSString *_modelName;
    NSString *_vendorDriverLogo;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool willCellBeHidden; // @synthesize willCellBeHidden=_willCellBeHidden;
@property(copy, nonatomic) NSString *vendorDriverLogo; // @synthesize vendorDriverLogo=_vendorDriverLogo;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy, nonatomic) NSString *vehicleColor; // @synthesize vehicleColor=_vehicleColor;
@property(copy, nonatomic) NSString *licensePlates; // @synthesize licensePlates=_licensePlates;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *photoSrc; // @synthesize photoSrc=_photoSrc;
- (void).cxx_destruct;
- (Class)viewClass;
@property(readonly, nonatomic) double viewHeight;
@property(readonly, nonatomic) double viewWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

