//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer, UIImageView;

@interface WBCustomPlayerView : UIView
{
    UIImageView *_bigPlayButton;
    UIImageView *_placeholderView;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
}

@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIImageView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (void).cxx_destruct;
- (void)playedToEndNotification:(id)arg1;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withVideoURLString:(id)arg2 withCoverString:(id)arg3;
- (void)dealloc;

@end

