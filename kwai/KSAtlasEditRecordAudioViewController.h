//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "KSBackgroundMusicRecorderViewDelegate-Protocol.h"
#import "KSMediaEditPopoverContent-Protocol.h"

@class KSAtlasEditRecordAudioViewModel, KSBackgroundMusicRecorderView, NSString;
@protocol KSMediaEditPopover;

@interface KSAtlasEditRecordAudioViewController : UIViewController <KSBackgroundMusicRecorderViewDelegate, KSMediaEditPopoverContent>
{
    id <KSMediaEditPopover> _popover;
    KSAtlasEditRecordAudioViewModel *_viewModel;
    KSBackgroundMusicRecorderView *_backgroundView;
}

@property(retain, nonatomic) KSBackgroundMusicRecorderView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) KSAtlasEditRecordAudioViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <KSMediaEditPopover> popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (_Bool)showConfirmBtn;
- (struct CGSize)intrinsicContentSize;
- (void)didPauseRecord;
- (void)didStartRecord;
- (void)didTapCloseRecordButton;
- (void)didTapCancelRecordButton;
- (void)didTapDoneButtonWithRecordTime:(double)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) CDUnknownBlockType didDismiss;
@property(copy, nonatomic) CDUnknownBlockType didShow;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) CDUnknownBlockType willDismiss;
@property(copy, nonatomic) CDUnknownBlockType willShow;

@end

