//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKHTTPConfiguration.h"

@class NSString;

@interface MBKMobikeHTTPConfiguration : MBKHTTPConfiguration
{
    NSString *_MD5Query;
}

+ (void)load;
@property(copy, nonatomic) NSString *MD5Query; // @synthesize MD5Query=_MD5Query;
- (void).cxx_destruct;
- (void)configHeaderField;
- (void)configSecurityPolicy;
- (void)setHeaderField:(id)arg1;
- (id)baseURL;
- (id)init;

@end

