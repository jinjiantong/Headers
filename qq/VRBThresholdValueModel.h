//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface VRBThresholdValueModel : QQModel
{
    NSString *_expressionID;
    double _coolValue;
    double _perfectValue;
}

@property(nonatomic) double perfectValue; // @synthesize perfectValue=_perfectValue;
@property(nonatomic) double coolValue; // @synthesize coolValue=_coolValue;
@property(copy, nonatomic) NSString *expressionID; // @synthesize expressionID=_expressionID;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

