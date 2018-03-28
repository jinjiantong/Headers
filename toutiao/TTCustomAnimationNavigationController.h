//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTNavigationController.h"

@class TTCustomAnimationDelegate;

@interface TTCustomAnimationNavigationController : TTNavigationController
{
    _Bool _useWhiteStyle;
    TTCustomAnimationDelegate *_animationDelegate;
}

@property(nonatomic) _Bool useWhiteStyle; // @synthesize useWhiteStyle=_useWhiteStyle;
@property(retain, nonatomic) TTCustomAnimationDelegate *animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (void).cxx_destruct;
- (void)setTtNavBarStyle:(id)arg1;
- (void)setAnimationStyle:(long long)arg1;
- (id)initWithRootViewController:(id)arg1 animationStyle:(long long)arg2;

@end
