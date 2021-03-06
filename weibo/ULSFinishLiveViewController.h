//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ULSViewController.h"

@class UIImageView, UILabel, ULSInfoView, ULSLiveEnd, ULSRoom, ULSUser;

@interface ULSFinishLiveViewController : ULSViewController
{
    CDUnknownBlockType _closeBlock;
    UILabel *_liveEndTipLabel;
    UILabel *_countTimeLabel;
    ULSLiveEnd *_liveEnd;
    ULSRoom *_room;
    ULSUser *_user;
    UIImageView *_bgImageView;
    UILabel *_nameLabel;
    UIImageView *_headImageView;
    ULSInfoView *_audienceView;
    ULSInfoView *_praiseView;
    ULSInfoView *_diamondsView;
}

@property(nonatomic) __weak ULSInfoView *diamondsView; // @synthesize diamondsView=_diamondsView;
@property(nonatomic) __weak ULSInfoView *praiseView; // @synthesize praiseView=_praiseView;
@property(nonatomic) __weak ULSInfoView *audienceView; // @synthesize audienceView=_audienceView;
@property(nonatomic) __weak UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) ULSUser *user; // @synthesize user=_user;
@property(retain, nonatomic) ULSRoom *room; // @synthesize room=_room;
@property(retain, nonatomic) ULSLiveEnd *liveEnd; // @synthesize liveEnd=_liveEnd;
@property(nonatomic) __weak UILabel *countTimeLabel; // @synthesize countTimeLabel=_countTimeLabel;
@property(nonatomic) __weak UILabel *liveEndTipLabel; // @synthesize liveEndTipLabel=_liveEndTipLabel;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void).cxx_destruct;
- (_Bool)panToNavigation;
- (void)setupViews;
- (void)closeWithBlock;
- (void)setupDataForView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithLiveEnd:(id)arg1 room:(id)arg2 user:(id)arg3;

@end

