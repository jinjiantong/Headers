//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class HTSLiveRankListModel, NSString, NSTimer;

@interface HTSLiveCountDownLabel : UILabel
{
    HTSLiveRankListModel *_model;
    _Bool _normal;
    NSString *_anchorID;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSString *anchorID; // @synthesize anchorID=_anchorID;
@property(nonatomic) _Bool normal; // @synthesize normal=_normal;
- (void).cxx_destruct;
- (void)pr_updateUIWithHour:(int)arg1 minute:(int)arg2 second:(int)arg3;
- (void)pr_countDownWithStartDate:(id)arg1 stopDate:(id)arg2;
- (void)updateWithModel:(id)arg1;
- (id)init;
- (void)dealloc;

@end

