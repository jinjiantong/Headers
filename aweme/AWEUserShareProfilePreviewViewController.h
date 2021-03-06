//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEVideosCollectionViewDetailAnimationDelegate-Protocol.h"

@class AWEDonwloadAnimationButton, NSString, UIImage, UIImageView, UITapGestureRecognizer;

@interface AWEUserShareProfilePreviewViewController : UIViewController <AWEVideosCollectionViewDetailAnimationDelegate>
{
    AWEDonwloadAnimationButton *_downloadButton;
    UIImage *_bigPosterImage;
    UITapGestureRecognizer *_dismissGesture;
    UIImageView *_bigPosterImageView;
}

@property(retain, nonatomic) UIImageView *bigPosterImageView; // @synthesize bigPosterImageView=_bigPosterImageView;
@property(retain, nonatomic) UITapGestureRecognizer *dismissGesture; // @synthesize dismissGesture=_dismissGesture;
@property(retain, nonatomic) UIImage *bigPosterImage; // @synthesize bigPosterImage=_bigPosterImage;
@property(retain, nonatomic) AWEDonwloadAnimationButton *downloadButton; // @synthesize downloadButton=_downloadButton;
- (void).cxx_destruct;
- (id)draggingViewForTransition;
- (long long)itemOffsetSincePush;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveProfilePhoto;
- (void)dismissVC;
- (void)loadSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

