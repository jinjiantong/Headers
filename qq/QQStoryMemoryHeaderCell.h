//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QIMUserOnlineView, QQStoryMemoryProfileBriefContentView, QQStoryMemoryProfileHeader, QQStoryUrlImageView, QQStoryUserIconView, TBQQUserInfoModel, UILabel;

@interface QQStoryMemoryHeaderCell : UITableViewCell
{
    TBQQUserInfoModel *_model;
    QQStoryUrlImageView *_coverImageView;
    QQStoryMemoryProfileHeader *_profileHeaderView;
    UILabel *_userNameLabel;
    QQStoryUserIconView *_bigVImageView;
    UILabel *_signatureLabel;
    QIMUserOnlineView *_qimOnlineView;
    QQStoryMemoryProfileBriefContentView *_profileBriefContentView;
}

+ (double)height;
@property(retain, nonatomic) QQStoryMemoryProfileBriefContentView *profileBriefContentView; // @synthesize profileBriefContentView=_profileBriefContentView;
@property(retain, nonatomic) QIMUserOnlineView *qimOnlineView; // @synthesize qimOnlineView=_qimOnlineView;
@property(retain, nonatomic) UILabel *signatureLabel; // @synthesize signatureLabel=_signatureLabel;
@property(retain, nonatomic) QQStoryUserIconView *bigVImageView; // @synthesize bigVImageView=_bigVImageView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) QQStoryMemoryProfileHeader *profileHeaderView; // @synthesize profileHeaderView=_profileHeaderView;
@property(retain, nonatomic) QQStoryUrlImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) TBQQUserInfoModel *model; // @synthesize model=_model;
- (void)updateSignatureWithModel:(id)arg1;
- (void)updateIconWithModel:(id)arg1;
- (void)updateNameWithModel:(id)arg1;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
