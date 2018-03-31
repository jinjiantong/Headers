//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class UIBezierPath;

@protocol UIDynamicItem <NSObject>
@property(nonatomic) struct CGAffineTransform transform;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGPoint center;

@optional
@property(readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property(readonly, nonatomic) unsigned long long collisionBoundsType;
@end

