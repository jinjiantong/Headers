//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSString;
@protocol Optional;

@interface WDWendaUploadImageRequestModel : TTRequestModel
{
    NSString<Optional> *_qid;
    NSString<Optional> *_ic_id;
    NSString<Optional> *_term;
}

@property(retain, nonatomic) NSString<Optional> *term; // @synthesize term=_term;
@property(retain, nonatomic) NSString<Optional> *ic_id; // @synthesize ic_id=_ic_id;
@property(retain, nonatomic) NSString<Optional> *qid; // @synthesize qid=_qid;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end
