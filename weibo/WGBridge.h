//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WGWebViewJsBridge.h"

@protocol WGBridgeDelegate;

@interface WGBridge : WGWebViewJsBridge
{
    _Bool _addShortcut;
    id <WGBridgeDelegate> _delegate;
}

@property(nonatomic) _Bool addShortcut; // @synthesize addShortcut=_addShortcut;
@property(nonatomic) id <WGBridgeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sngH5GameOnDestory;
- (void)sngH5GameOnResume;
- (void)sngH5GameOnPause;
- (void)addShortcut:(id)arg1;
- (void)useGift:(id)arg1;
- (void)getGameStatus:(id)arg1;
- (void)operate:(id)arg1;

@end

