//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_TPBaseEngine.h>

@class NSMutableDictionary, NSString;
@protocol UITPStartingDelegate;

@interface CFT_TPSOrderConfirmEngine : CFT_TPBaseEngine
{
    NSMutableDictionary *requestParam;
    id <UITPStartingDelegate> delegate;
    NSString *strSellerName;
    id _rootVC;
}

@property(nonatomic) id rootVC; // @synthesize rootVC=_rootVC;
@property(retain, nonatomic) NSString *strSellerName; // @synthesize strSellerName;
@property(nonatomic) id <UITPStartingDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSMutableDictionary *requestParam; // @synthesize requestParam;
- (void)dealloc;

@end

