//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPreloadModel.h"

@class NSString, NSURL;

@interface WBResourcePreloadModel : WBPreloadModel
{
    NSString *_uniqueId;
    NSURL *_url;
    long long _offset;
    long long _length;
    NSString *_storagePath;
}

@property(retain, nonatomic) NSString *storagePath; // @synthesize storagePath=_storagePath;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;
- (void)clone:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

