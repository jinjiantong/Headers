//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <QQMainProject/QQStorySGVideoSelectorListViewActionDelegate-Protocol.h>

@class NSString, QQStorySGVideoSelectorCellModel, QQStorySGVideoSelectorListView, UILabel;
@protocol QQStorySGVideoSelectorCellDelegate;

@interface QQStorySGVideoSelectorCell : UITableViewCell <QQStorySGVideoSelectorListViewActionDelegate>
{
    QQStorySGVideoSelectorListView *_scrollView;
    UILabel *_dateLabel;
    id <QQStorySGVideoSelectorCellDelegate> _delegate;
    QQStorySGVideoSelectorCellModel *_model;
}

@property(retain, nonatomic) QQStorySGVideoSelectorCellModel *model; // @synthesize model=_model;
@property(nonatomic) id <QQStorySGVideoSelectorCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sgVideoSelectorListViewVCEnableDragToBack:(_Bool)arg1;
- (void)sgVideoSelectorListViewDidClickShareGroupVideo:(id)arg1;
- (_Bool)sgVideoSelectorListViewDidSelectShareGroupVideo:(id)arg1;
- (void)sgVideoSelectorListViewDidScrollEndToRight;
- (id)showDateString:(id)arg1;
- (void)configureInitialUI;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

