//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

@class NSArray, NSDictionary, NSMutableArray, NSObject, UITableView;
@protocol QQGroupCategoryListViewControllerDelegate;

@interface QQGroupCategoryListViewController : QQViewController
{
    UITableView *_tableView;
    NSArray *_categoryKeyArray;
    NSMutableArray *_parentCategoryKeys;
    long long _currentCategory;
    NSDictionary *_categoryDictionary;
    NSObject<QQGroupCategoryListViewControllerDelegate> *_delegate;
}

- (void)reloadCategoryDictionary;

// Remaining properties
@property(retain, nonatomic) NSDictionary *categoryDictionary; // @dynamic categoryDictionary;
@property(nonatomic) long long currentCategory; // @dynamic currentCategory;
@property(nonatomic) NSObject<QQGroupCategoryListViewControllerDelegate> *delegate; // @dynamic delegate;
@property(retain, nonatomic) NSMutableArray *parentCategoryKeys; // @dynamic parentCategoryKeys;

@end

