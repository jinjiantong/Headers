//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQPersonalSignMessageCell.h>

@class NMCommentView;

@interface QQNearbyInteractMessageCell : QQPersonalSignMessageCell
{
    NMCommentView *_detailRichView;
}

@property(retain, nonatomic) NMCommentView *detailRichView; // @synthesize detailRichView=_detailRichView;
- (id)loadRichTextView;
- (void)layoutSubviews;

@end

