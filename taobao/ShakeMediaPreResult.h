//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface ShakeMediaPreResult : TBJSONModel
{
    _Bool _isDirect;
    NSString *_url;
    NSString *_title;
    NSString *_modes;
}

@property(copy, nonatomic) NSString *modes; // @synthesize modes=_modes;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool isDirect; // @synthesize isDirect=_isDirect;
- (void).cxx_destruct;

@end

