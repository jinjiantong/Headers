//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumber, NSString;

@interface TBSNSHomePageTabView : UIView
{
    NSString *_pageName;
    NSString *_spm;
    NSNumber *_tabId;
}

@property(retain, nonatomic) NSNumber *tabId; // @synthesize tabId=_tabId;
@property(retain, nonatomic) NSString *spm; // @synthesize spm=_spm;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (void).cxx_destruct;
- (void)onTabHide;
- (void)onTabShow;
- (id)dataForUserTrack;

@end
