//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBPopOperation.h"

@class TBHomeGuessYouLikeRemindItem, UIButton, UIView;

@interface TBHomeGuessYouLikeRemindManager : TBPopOperation
{
    _Bool _isRequestSuccessed;
    _Bool _hasShowed;
    _Bool _isShowing;
    _Bool _isLoading;
    TBHomeGuessYouLikeRemindItem *_remindItem;
    UIView *_superView;
    UIButton *_guessYouLikeRemindButton;
    double _tabbarHeight;
    CDUnknownBlockType _jumpBlock;
}

+ (double)nowServerTime;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType jumpBlock; // @synthesize jumpBlock=_jumpBlock;
@property(nonatomic) double tabbarHeight; // @synthesize tabbarHeight=_tabbarHeight;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool hasShowed; // @synthesize hasShowed=_hasShowed;
@property(nonatomic) _Bool isRequestSuccessed; // @synthesize isRequestSuccessed=_isRequestSuccessed;
@property(retain, nonatomic) UIButton *guessYouLikeRemindButton; // @synthesize guessYouLikeRemindButton=_guessYouLikeRemindButton;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
@property(retain, nonatomic) TBHomeGuessYouLikeRemindItem *remindItem; // @synthesize remindItem=_remindItem;
- (void).cxx_destruct;
- (void)userTrackWithTrackInfo:(id)arg1;
- (void)screenAdapterWithView:(id)arg1;
- (id)cachedLastShowedArgs;
- (void)cacheIdentity:(id)arg1 args:(id)arg2;
- (id)matchIdentity:(id)arg1;
- (_Bool)needShowWithIdentity:(id)arg1;
- (void)jumpToGuessYouLike;
- (_Bool)show;
- (_Bool)isNeedToShow;
- (void)requestRemindData;
- (_Bool)isNeedToRequest;
- (void)showGuessRemindOn:(id)arg1 tabbarHeight:(double)arg2 jumpToGuessYouLike:(CDUnknownBlockType)arg3;
- (void)requestGuessRemind;
- (id)init;

@end

