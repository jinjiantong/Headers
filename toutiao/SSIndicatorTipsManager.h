//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface SSIndicatorTipsManager : NSObject
{
    NSDictionary *_tipsDict;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSDictionary *tipsDict; // @synthesize tipsDict=_tipsDict;
- (void).cxx_destruct;
- (id)indicatorTipsForKey:(id)arg1;
- (void)setIndicatorTipsWithDictionary:(id)arg1;

@end
