//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, UserSummaryLabelModel;

@protocol UserSummaryTableHeaderViewTagsPresenter <NSObject>
- (void)expandTagsCompletion;
- (void)showGuidence;
- (_Bool)uiAskIfSelfViewing;
- (NSArray *)uiAskForTagModelsToBeShown;
- (void)uiUpSwipedHeaderView;
- (void)uiCLickedAddTagButton;
- (_Bool)uiAskForIfTagHasBeenApproved:(UserSummaryLabelModel *)arg1;
- (void)uiApprovedTag:(UserSummaryLabelModel *)arg1;
@end

