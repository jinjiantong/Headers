//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CMBaseCommand.h>

@class UIView;

@interface CMViewAddCommand : CMBaseCommand
{
    _Bool _isRemoveCmd;
    UIView *_view;
}

@property(nonatomic) _Bool isRemoveCmd; // @synthesize isRemoveCmd=_isRemoveCmd;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)description;
- (void)removeView;
- (void)addView;
- (void)undoCmd;
- (void)executeCmd;
- (id)initWithSuperView:(id)arg1 subView:(id)arg2;

@end
