//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TBStoryVoteSubviewLayoutParam : NSObject
{
    double _questionHeight;
    NSArray *_optionsFontSize;
    NSArray *_optionsFontSizeWithResult;
}

@property(retain, nonatomic) NSArray *optionsFontSizeWithResult; // @synthesize optionsFontSizeWithResult=_optionsFontSizeWithResult;
@property(retain, nonatomic) NSArray *optionsFontSize; // @synthesize optionsFontSize=_optionsFontSize;
@property(nonatomic) double questionHeight; // @synthesize questionHeight=_questionHeight;
- (void)dealloc;

@end

