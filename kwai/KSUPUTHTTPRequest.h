//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUHTTPRequest.h"

@class NSArray, NSDictionary;

@interface KSUPUTHTTPRequest : KSUHTTPRequest
{
    NSDictionary *_bodyParameter;
    NSArray *_multipartForms;
}

@property(retain, nonatomic) NSArray *multipartForms; // @synthesize multipartForms=_multipartForms;
@property(retain, nonatomic) NSDictionary *bodyParameter; // @synthesize bodyParameter=_bodyParameter;
- (void).cxx_destruct;
- (id)requestWithURL:(id)arg1;
- (id)method;

@end

