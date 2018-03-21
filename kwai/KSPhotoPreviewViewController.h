//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

@class KSMagicFace, KSMovieInfo, NSString, UIImage, UIView;

@interface KSPhotoPreviewViewController : KSBaseViewController
{
    UIImage *_photo;
    KSMovieInfo *_imageInfo;
    KSMagicFace *_magicFace;
    NSString *_initalCaption;
    UIView *_navigationBar;
}

@property(retain, nonatomic) UIView *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) NSString *initalCaption; // @synthesize initalCaption=_initalCaption;
@property(retain, nonatomic) KSMagicFace *magicFace; // @synthesize magicFace=_magicFace;
@property(retain, nonatomic) KSMovieInfo *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(retain, nonatomic) UIImage *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)didClickConfirm:(id)arg1;
- (void)didClickBack:(id)arg1;
- (void)setupNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end
