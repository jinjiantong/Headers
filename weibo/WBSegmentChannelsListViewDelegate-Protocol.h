//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, WBSegmentChannelsListView;

@protocol WBSegmentChannelsListViewDelegate <NSObject>

@optional
- (void)WBSegmentChannelsListView:(WBSegmentChannelsListView *)arg1 userDidChangeChannel:(long long)arg2 newCurrentChannels:(NSMutableArray *)arg3 andNewUnusedChannels:(NSMutableArray *)arg4 channelListDidChanged:(_Bool)arg5;
- (void)WBSegmentChannelsListView:(WBSegmentChannelsListView *)arg1 didChangeState:(unsigned long long)arg2;
- (void)WBSegmentChannelsListViewDidFinishAnimationReposition:(WBSegmentChannelsListView *)arg1;
@end

