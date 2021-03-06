//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQBiuUploadBaseViewController.h>

#import <QQMainProject/PhotoBrowserViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQMultiImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/QQRichMediaPickerControllerDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UINavigationControllerDelegate-Protocol.h>

@class HotPicInfo, HtmlPicUploadReqInfo, NSDictionary, NSMutableArray, NSString, QQReadInJoyUGCUploadChooseView, QQReadInJoyUGCUploadShowView;

@interface QQReadInJoyUGCUploadViewController : QQBiuUploadBaseViewController <QQMultiImagePickerControllerDelegate, UINavigationControllerDelegate, QQRichMediaPickerControllerDelegate, PhotoBrowserViewControllerDelegate, UIActionSheetDelegate>
{
    int _currentMsfApnNetworkState;
    _Bool _isUseOriginImage;
    int _seqRequest;
    unsigned int _compressPicElapse;
    unsigned int _uploadPicElapse;
    CDUnknownBlockType _ugcResultCallBackBlock;
    CDUnknownBlockType _ugcResultCallBlockBackup;
    NSDictionary *_query;
    QQReadInJoyUGCUploadChooseView *_chooseView;
    QQReadInJoyUGCUploadShowView *_showView;
    NSMutableArray *_selectedPicInfoList;
    NSMutableArray *_compressedPicInfoList;
    double _ugcStartTime;
    long long _selectedOrientation;
    HtmlPicUploadReqInfo *_htmlPicUpload;
    double _uploadPicStartTime;
    unsigned long long _originPicFileSize;
    unsigned long long _compressPicFileSize;
    HotPicInfo *_hotPicInfo;
}

+ (long long)biuEditMaxCount;
@property(retain, nonatomic) HotPicInfo *hotPicInfo; // @synthesize hotPicInfo=_hotPicInfo;
@property(nonatomic) unsigned int uploadPicElapse; // @synthesize uploadPicElapse=_uploadPicElapse;
@property(nonatomic) unsigned int compressPicElapse; // @synthesize compressPicElapse=_compressPicElapse;
@property(nonatomic) unsigned long long compressPicFileSize; // @synthesize compressPicFileSize=_compressPicFileSize;
@property(nonatomic) unsigned long long originPicFileSize; // @synthesize originPicFileSize=_originPicFileSize;
@property(nonatomic) double uploadPicStartTime; // @synthesize uploadPicStartTime=_uploadPicStartTime;
@property(retain, nonatomic) HtmlPicUploadReqInfo *htmlPicUpload; // @synthesize htmlPicUpload=_htmlPicUpload;
@property(nonatomic) int seqRequest; // @synthesize seqRequest=_seqRequest;
@property(nonatomic) long long selectedOrientation; // @synthesize selectedOrientation=_selectedOrientation;
@property(nonatomic) _Bool isUseOriginImage; // @synthesize isUseOriginImage=_isUseOriginImage;
@property(nonatomic) double ugcStartTime; // @synthesize ugcStartTime=_ugcStartTime;
@property(retain, nonatomic) NSMutableArray *compressedPicInfoList; // @synthesize compressedPicInfoList=_compressedPicInfoList;
@property(retain, nonatomic) NSMutableArray *selectedPicInfoList; // @synthesize selectedPicInfoList=_selectedPicInfoList;
@property(retain, nonatomic) QQReadInJoyUGCUploadShowView *showView; // @synthesize showView=_showView;
@property(retain, nonatomic) QQReadInJoyUGCUploadChooseView *chooseView; // @synthesize chooseView=_chooseView;
@property(retain, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(copy, nonatomic) CDUnknownBlockType ugcResultCallBlockBackup; // @synthesize ugcResultCallBlockBackup=_ugcResultCallBlockBackup;
@property(copy, nonatomic) CDUnknownBlockType ugcResultCallBackBlock; // @synthesize ugcResultCallBackBlock=_ugcResultCallBackBlock;
- (void).cxx_destruct;
- (void)sendBigFace:(id)arg1;
- (void)onChooseFriendInfo:(id)arg1;
- (void)showFriendSelectViewControllerMaxCount:(long long)arg1 andChooseFriendMode:(unsigned long long)arg2;
- (void)onClickAtBtn;
- (void)refreshTextCountLable;
- (void)sendHotPicGifImgUseForward:(id)arg1;
- (void)onClickHotPicBtn;
- (void)onClickExpressionBtn;
- (void)refreshArticleViewLayout;
- (void)refreshEditViewMaxHeightWithMaxY:(double)arg1;
- (void)sendUGC;
- (int)getUGCSrcType;
- (void)onBiuClick:(id)arg1;
- (unsigned long long)getBiuClickType;
- (void)onClickCancelUpload;
- (void)popQQController:(_Bool)arg1;
- (_Bool)isSendBtnShouldEnable;
- (void)onLeftButton:(id)arg1;
- (void)delayCheckCommitState:(id)arg1;
- (id)normalizedImage:(id)arg1;
- (void)QQMultiImagePickerControllerDidCancel:(id)arg1;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didSendEditedPhoto:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didClickPhoto:(id)arg2 isSelected:(_Bool)arg3;
- (void)QQMultiImagePickerController:(id)arg1 didSelectOriginalPhotoList:(id)arg2;
- (void)cancelUpload;
- (id)getUploadImageURL:(id)arg1;
- (_Bool)isMyUploadImageResponse:(id)arg1;
- (void)handleImageUploadFinish:(id)arg1;
- (_Bool)uploadOneImage:(id)arg1;
- (_Bool)uploadImage:(id)arg1;
- (void)richMediaPickerControllerDidCancel:(id)arg1;
- (void)richMediaPickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)presentInViewController:(id)arg1;
- (void)photoBrowserViewContoller:(id)arg1 didSelectImage:(id)arg2;
- (struct CGRect)getRealImageFrame:(struct CGRect)arg1 andImageSize:(struct CGSize)arg2;
- (void)showPreviewImage:(id)arg1 bigFacePath:(id)arg2 apngPath:(id)arg3;
- (void)dealChooseImage:(_Bool)arg1 didSelectPhotoList:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)chooseImage;
- (void)setSendResultCallBackBlock:(CDUnknownBlockType)arg1;
- (id)biuArticleView;
- (void)setMiddleTitle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)createNewSociallizeInfoIfEmpty;
- (id)initWithJSWebQuery:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

