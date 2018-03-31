//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EBExpressionHandler.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString;

@interface EBExpressionScroller : EBExpressionHandler <UIScrollViewDelegate>
{
    _Bool _turnChange;
    struct CGPoint _lastOffset;
    struct CGPoint _lastDOffset;
    struct CGPoint _turnOffset;
}

@property(nonatomic) _Bool turnChange; // @synthesize turnChange=_turnChange;
@property(nonatomic) struct CGPoint turnOffset; // @synthesize turnOffset=_turnOffset;
@property(nonatomic) struct CGPoint lastDOffset; // @synthesize lastDOffset=_lastDOffset;
@property(nonatomic) struct CGPoint lastOffset; // @synthesize lastOffset=_lastOffset;
- (void)fireTurnEvent:(id)arg1;
- (void)fireStateChangedEvent:(id)arg1;
- (id)setUpScope:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)removeExpressionBinding;
- (void)initScroller;
- (void)updateTargetExpression:(id)arg1 options:(id)arg2 exitExpression:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)initWithExpressionType:(long long)arg1 source:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

