//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, TBIMShareItemSearchViewController;
@protocol MCShareObject;

@protocol TBIMShareItemSearchDelegate <NSObject>
- (_Bool)shareItemSearch:(TBIMShareItemSearchViewController *)arg1 didSelectedItem:(id <MCShareObject>)arg2;
- (NSArray<MCShareObject> *)shareItemSearchSelectedItems:(TBIMShareItemSearchViewController *)arg1;
@end
