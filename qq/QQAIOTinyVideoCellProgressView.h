//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQTinyVideoProgressView;

@interface QQAIOTinyVideoCellProgressView : UIView
{
    _Bool _isSelf;
    double _progress;
    QQTinyVideoProgressView *_progressView;
}

@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(retain, nonatomic) QQTinyVideoProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutAsReceiver;
- (void)layoutAsSender;
- (void)setupUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 isSelf:(_Bool)arg2;

@end

