//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ULSBaseModel.h"

@class NSString;

@interface ULSPresentModel : ULSBaseModel
{
    _Bool _isPresentGolds;
    NSString *_headline;
    NSString *_subhead;
    NSString *_buttonText;
}

+ (id)parse:(id)arg1;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *subhead; // @synthesize subhead=_subhead;
@property(copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(nonatomic) _Bool isPresentGolds; // @synthesize isPresentGolds=_isPresentGolds;
- (void).cxx_destruct;

@end

