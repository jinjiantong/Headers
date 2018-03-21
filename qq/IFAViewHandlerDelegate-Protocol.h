//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class FAModel, NSArray, QQViewController;

@protocol IFAViewHandlerDelegate <NSObject>
- (void)showViewController:(QQViewController *)arg1 push:(_Bool)arg2;
- (_Bool)isFromNearFile;
- (QQViewController *)getHoldViewController;
- (void)dismissViewConroller;
- (id)getViewContainer;

@optional
- (int)getFileSource;
- (void)reloadView;
- (void)updateFAViewWithData:(NSArray *)arg1;
- (void)switchHandler:(FAModel *)arg1;
@end
