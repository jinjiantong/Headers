//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@protocol DragLyricViewDelegate <NSObject>

@optional
- (void)scrollViewDidEndDragging;
- (void)scrollViewWillBeginDragging;
- (void)willDragLyricView;
- (void)onLyricViewDraging:(long long)arg1 offset:(double)arg2;
- (void)didDragLyricView:(long long)arg1;
@end

