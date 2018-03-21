//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IJKMediaUrlOpenData : NSObject
{
    NSString *_url;
    _Bool _handled;
    _Bool _urlChanged;
    int _segmentIndex;
    int _retryCounter;
    int _error;
    long long _openType;
}

@property(nonatomic, getter=isUrlChanged) _Bool urlChanged; // @synthesize urlChanged=_urlChanged;
@property(nonatomic) int error; // @synthesize error=_error;
@property(readonly, nonatomic) int retryCounter; // @synthesize retryCounter=_retryCounter;
@property(readonly, nonatomic) int segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(readonly, nonatomic) long long openType; // @synthesize openType=_openType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *url;
@property(nonatomic, getter=isHandled) _Bool handled;
- (id)initWithUrl:(id)arg1 openType:(long long)arg2 segmentIndex:(int)arg3 retryCounter:(int)arg4;

@end
