//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TTLUserModel;
@protocol TTLUserInfoCardDelegate;

@interface TTLUserInfoCard : UIView
{
    TTLUserModel *_user;
    _Bool _anchorTapped;
    id <TTLUserInfoCardDelegate> _delegate;
    UIView *_contentView;
    NSString *_roomID;
    NSString *_groupID;
}

@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <TTLUserInfoCardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool anchorTapped; // @synthesize anchorTapped=_anchorTapped;
@property(retain, nonatomic) TTLUserModel *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateFollowStatus:(_Bool)arg1;
- (void)safeAreaInsetsDidChange;
- (void)_follow;
- (void)_enterHomepage;
- (void)_close;
- (void)_report;
- (id)initWithFrame:(struct CGRect)arg1;

@end
