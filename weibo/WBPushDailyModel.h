//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSMutableArray, WBMultiMediaGuideModel;

@interface WBPushDailyModel : WBModelObject
{
    long long _user_rate;
    NSMutableArray *_arrayServerGuidePriority;
    WBMultiMediaGuideModel *_multiMediaModel;
}

@property(retain, nonatomic) WBMultiMediaGuideModel *multiMediaModel; // @synthesize multiMediaModel=_multiMediaModel;
@property(retain, nonatomic) NSMutableArray *arrayServerGuidePriority; // @synthesize arrayServerGuidePriority=_arrayServerGuidePriority;
@property(nonatomic) long long user_rate; // @synthesize user_rate=_user_rate;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

