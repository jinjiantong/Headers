//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ActivePart : NSObject
{
    long long _index;
    long long _length;
    NSString *_text;
    NSString *_url;
    NSString *_utKey;
    NSString *_color;
}

@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *utKey; // @synthesize utKey=_utKey;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)generateData:(id)arg1;
- (id)initWithDatas:(id)arg1;

@end

