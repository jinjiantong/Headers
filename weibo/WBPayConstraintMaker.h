//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBPayConstraintDelegate-Protocol.h"

@class NSMutableArray, NSString, UIView, WBPayConstraint;

@interface WBPayConstraintMaker : NSObject <WBPayConstraintDelegate>
{
    _Bool _updateExisting;
    _Bool _removeExisting;
    UIView *_view;
    NSMutableArray *_constraints;
}

@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool removeExisting; // @synthesize removeExisting=_removeExisting;
@property(nonatomic) _Bool updateExisting; // @synthesize updateExisting=_updateExisting;
- (void).cxx_destruct;
- (CDUnknownBlockType)group;
@property(readonly, nonatomic) WBPayConstraint *center;
@property(readonly, nonatomic) WBPayConstraint *size;
@property(readonly, nonatomic) WBPayConstraint *edges;
@property(readonly, nonatomic) WBPayConstraint *centerYWithinMargins;
@property(readonly, nonatomic) WBPayConstraint *centerXWithinMargins;
@property(readonly, nonatomic) WBPayConstraint *trailingMargin;
@property(readonly, nonatomic) WBPayConstraint *leadingMargin;
@property(readonly, nonatomic) WBPayConstraint *bottomMargin;
@property(readonly, nonatomic) WBPayConstraint *topMargin;
@property(readonly, nonatomic) WBPayConstraint *rightMargin;
@property(readonly, nonatomic) WBPayConstraint *leftMargin;
@property(readonly, nonatomic) CDUnknownBlockType attributes;
@property(readonly, nonatomic) WBPayConstraint *baseline;
@property(readonly, nonatomic) WBPayConstraint *centerY;
@property(readonly, nonatomic) WBPayConstraint *centerX;
@property(readonly, nonatomic) WBPayConstraint *height;
@property(readonly, nonatomic) WBPayConstraint *width;
@property(readonly, nonatomic) WBPayConstraint *trailing;
@property(readonly, nonatomic) WBPayConstraint *leading;
@property(readonly, nonatomic) WBPayConstraint *bottom;
@property(readonly, nonatomic) WBPayConstraint *right;
@property(readonly, nonatomic) WBPayConstraint *top;
@property(readonly, nonatomic) WBPayConstraint *left;
- (id)addConstraintWithLayoutAttribute:(long long)arg1;
- (id)addConstraintWithAttributes:(long long)arg1;
- (id)constraint:(id)arg1 addConstraintWithLayoutAttribute:(long long)arg2;
- (void)constraint:(id)arg1 shouldBeReplacedWithConstraint:(id)arg2;
- (id)install;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

