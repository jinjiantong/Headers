//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QQMainProject/QQImagePickerBottomBarDelegate-Protocol.h>
#import <QQMainProject/QQMultiImagePickerControllerDelegate-Protocol.h>

@class NSString, PECropView, QQImagePickerBottomBar, UIButton, UIImage, UIView;
@protocol PECropViewControllerDelegate;

@interface PECropViewController : UIViewController <QQImagePickerBottomBarDelegate, QQMultiImagePickerControllerDelegate>
{
    _Bool _isShowAvatarPendant;
    _Bool _isCropAIOBackgroud;
    _Bool _isUserSummaryCover;
    unsigned long long _cropType;
    int _xo;
    UIImage *_image;
    struct CGSize _cropSize;
    struct CGRect _lastNavigationBarFrame;
    id <PECropViewControllerDelegate> _delegate;
    PECropView *_cropView;
    QQImagePickerBottomBar *_bottomBar;
    UIView *_bottomBarForAvatar;
    UIButton *_shareToQZoneButton;
    UIButton *_doneButton;
    _Bool _didUserOperateShareButton;
    _Bool _isForAvatarCrop;
    _Bool _shouldShowLibraryButton;
    UIViewController *_parentController;
}

@property(nonatomic) _Bool shouldShowLibraryButton; // @synthesize shouldShowLibraryButton=_shouldShowLibraryButton;
@property(retain, nonatomic) UIViewController *parentController; // @synthesize parentController=_parentController;
@property(nonatomic) _Bool isForAvatarCrop; // @synthesize isForAvatarCrop=_isForAvatarCrop;
@property(nonatomic) struct CGSize cropSize; // @synthesize cropSize=_cropSize;
- (void)QQMultiImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)showImagePicker;
- (void)QQImagePickerBottomBarLibraryButtonDidClick;
- (void)QQImagePickerBottomBarSendButtonDidClick;
- (_Bool)shouldShareToQZone;
- (void)doneAction:(id)arg1;
- (void)shouldShareToQZoneButtonAction:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
- (void)onLeftButtonClick:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned long long cropType; // @dynamic cropType;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <PECropViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isCropAIOBackgroud; // @dynamic isCropAIOBackgroud;
@property(nonatomic) _Bool isShowAvatarPendant; // @dynamic isShowAvatarPendant;
@property(nonatomic) _Bool isUserSummaryCover; // @dynamic isUserSummaryCover;
@property(readonly) Class superclass;

@end
