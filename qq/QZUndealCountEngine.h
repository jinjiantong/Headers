//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBaseEngine.h>

@class NSDictionary;

@interface QZUndealCountEngine : QZBaseEngine
{
    NSDictionary *_stMapCountInfo;
    NSDictionary *_extendinfo;
}

+ (id)instance;
- (void).cxx_destruct;
- (long long)clearFeedCount:(long long)arg1 lastTime:(id)arg2;
- (long long)getRecentfeedUndealCount:(id)arg1;
- (long long)getUndealCount:(long long)arg1 sTransParam:(id)arg2 lastFeedTime:(id)arg3;

@end
