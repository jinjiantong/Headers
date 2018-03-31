//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol TBLiveQAManagerDelegate <NSObject>
- (void)requestSubmitWithGameId:(NSString *)arg1 examNum:(NSString *)arg2 selectValue:(NSString *)arg3 extParams:(NSDictionary *)arg4 completion:(void (^)(_Bool, NSString *, NSString *, NSError *, _Bool, _Bool))arg5;
- (void)requestReviveWithGameId:(NSString *)arg1 examNum:(NSString *)arg2 extParams:(NSDictionary *)arg3 completion:(void (^)(_Bool, NSString *, NSError *))arg4;
- (void)finishQAWithResultUrl:(NSString *)arg1;
- (void)shareTBLiveQA;

@optional
- (void)requestPollingWithGameId:(NSString *)arg1 extParams:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)gotoShop:(NSString *)arg1;
- (void)didFailedQA;
- (void)didDisappearQACardView;
- (void)willAppearQACardView;
- (void)updateQACardNums:(NSDictionary *)arg1;
@end

