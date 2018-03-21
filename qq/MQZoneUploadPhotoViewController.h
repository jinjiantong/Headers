//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZoneViewController.h>

#import <QQMainProject/MQZGroupPhotoesPickerDelegate-Protocol.h>
#import <QQMainProject/MQZMultiImagePickerWrapperDelegate-Protocol.h>
#import <QQMainProject/MQZonePhotoEditInputCellDelegate-Protocol.h>
#import <QQMainProject/MQzoneAlbumPickerDelegate-Protocol.h>
#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>
#import <QQMainProject/QZUploadPhotoViewModelDelegate-Protocol.h>

@class MQZMultiImagePickerWrapper, NSMutableArray, NSString, QUIActionSheet, QZUploadPhotoViewModel;

@interface MQZoneUploadPhotoViewController : QZoneViewController <QUIActionSheetDelegate, MQZonePhotoEditInputCellDelegate, MQZMultiImagePickerWrapperDelegate, QZUploadPhotoViewModelDelegate, MQZGroupPhotoesPickerDelegate, MQzoneAlbumPickerDelegate>
{
    NSString *_refer;
    _Bool _waitForWiFi;
    _Bool _waitForNet;
    id _leftClickTarget;
    _Bool _isFromthirdApp;
    NSString *_appID;
    QUIActionSheet *_actionSheet;
    MQZMultiImagePickerWrapper *_picker;
    QZUploadPhotoViewModel *_uploadViewModel;
    NSMutableArray *_photoModelList;
    CDUnknownBlockType _onUploadComplete;
    SEL _leftClickSel;
    QZoneViewController *_parentVC;
    long long _currentIndex;
}

+ (id)feedPictureFromPhotoUploadJob:(id)arg1 imageModel:(id)arg2 albumID:(id)arg3 albumAnonymity:(long long)arg4;
+ (void)uploadGroupPhoto:(long long)arg1 photoList:(id)arg2 albumName:(id)arg3 albumID:(id)arg4 albumDesc:(id)arg5 refer:(id)arg6 clientKey:(id)arg7 batchID:(long long)arg8 compressBatchId:(long long)arg9 uploadTime:(long long)arg10 quality:(long long)arg11 waitForWiFi:(_Bool)arg12 shootInfo:(id)arg13 lbsLocationString:(id)arg14 lbsGPS:(id)arg15 fakeFeed:(_Bool)arg16 uploadEntrace:(long long)arg17 preUploadId:(id)arg18;
+ (void)uploadAIOGroupPhoto:(long long)arg1 albumModel:(id)arg2 refer:(id)arg3 compressBatchId:(long long)arg4 quality:(long long)arg5 uploadEntrance:(long long)arg6;
+ (id)getPhotoListWithQuality:(long long)arg1 compressBatchId:(long long)arg2;
+ (void)handleQzonePhotoQuoteToQzoneWithFeedModel:(id)arg1 albumID:(id)arg2 photoDes:(id)arg3 isOriginal:(_Bool)arg4 photoModels:(id)arg5;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak QZoneViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(nonatomic) SEL leftClickSel; // @synthesize leftClickSel=_leftClickSel;
@property(copy, nonatomic) CDUnknownBlockType onUploadComplete; // @synthesize onUploadComplete=_onUploadComplete;
@property(retain, nonatomic) NSMutableArray *photoModelList; // @synthesize photoModelList=_photoModelList;
@property(retain, nonatomic) QZUploadPhotoViewModel *uploadViewModel; // @synthesize uploadViewModel=_uploadViewModel;
- (void).cxx_destruct;
- (void)configureNavigationBar;
- (void)inputCell:(id)arg1 textDidChange:(id)arg2;
- (void)inputCellBecomeActive:(id)arg1;
- (void)inputCellFinishEdit:(id)arg1 text:(id)arg2;
- (void)MQZMultiImagePickerController:(id)arg1 didSendEditedPhoto:(id)arg2;
- (void)MQZMultiImagePicker:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)didFinishPickingQZonePhotoes:(id)arg1;
- (void)clickPickerQZonePhotoButton;
- (_Bool)isNeedFakeFeed;
- (void)startPreUpload:(id)arg1;
- (void)uploadPhotosForGroupZone;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)queryPhotoCountInAlbum:(id)arg1 albumType:(id)arg2;
- (void)queryAlbumInfo:(_Bool)arg1;
- (_Bool)needsQueryAlbumInfo;
- (void)readyUploadForGroupZone;
- (void)forwardGetServerTimeTimeout;
- (void)handleClickRightButtonForGroupZone;
- (void)handleClickRightButtonForQuoteToQzone;
- (void)fowardGetAlbumInfoTimeout;
- (void)getAlbumInfoInWorkingState;
- (void)handleClickRightButtonForQQZone;
- (void)showEmptyAlbumTips;
- (void)showFullAlbumTips;
- (void)checkUploadScaleTypeWithLoading;
- (void)handleClickRightButton;
- (void)checkTrafficThreshold;
- (void)realhandleClickRightButton;
- (void)onRightButtonClick:(id)arg1 forEvent:(id)arg2;
- (void)didSelectAlbum:(id)arg1;
- (void)enterShootInfoClick;
- (void)selectQualityClick;
- (void)photoCellPlusButtonClick;
- (void)selectAlbumClicK;
- (void)updatePhotoList:(id)arg1;
- (void)didSelect:(id)arg1 qualityViewStyle:(long long)arg2 PhotoQuality:(id)arg3 videoQuality:(id)arg4 withTitle:(id)arg5;
- (unsigned long long)calculateOriginalPhotoSize;
- (void)qunGetTime:(_Bool)arg1;
- (void)leftButtonClick:(id)arg1;
- (int)onNotifyGetPhotoCountResult:(id)arg1;
- (long long)onGetPOIListNotifyV2:(id)arg1;
- (long long)onQunGetTimeNotify:(id)arg1;
- (void)onChooseQunAlbum:(id)arg1;
- (long long)onGetBatchGeoSuccessNotify:(id)arg1;
- (void)onNotifyAlbumListResult:(id)arg1;
- (void)onForeOffLine:(id)arg1;
- (void)imageWriteFinished:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)resetRightButtonState;
- (void)requestQBossPhotoAdvWithId:(int)arg1;
- (void)dismissModal:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)setWeatherInfo:(id)arg1;
- (void)setPhotoPOIInfo:(id)arg1;
- (void)resetPhotoPOIInfo;
- (id)getPictureFromPhotoModel:(id)arg1;
- (void)checkUploadScaleType;
- (long long)currentQualityViewStyle;
- (unsigned long long)currrentSelectedFilesTotalSize;
- (void)requestAlbumList;
- (void)configureAlbumModel;
- (void)configSelectAlbumButtonAlbumType;
- (_Bool)isTargetQZone;
- (_Bool)isForwardPhoto;
- (_Bool)isGroupPhoto;
- (_Bool)isForwardQZone;
- (long long)uploadFrom;
- (void)setUploadFrom:(long long)arg1;
- (_Bool)isEditingMode;
- (void)setIsEditingMode:(_Bool)arg1;
- (long long)albumType;
- (void)setAlbumType:(long long)arg1;
- (id)eventTitle;
- (void)setEventTitle:(id)arg1;
- (_Bool)fromQunH5;
- (void)setFromQunH5:(_Bool)arg1;
- (id)schemaParam;
- (void)setSchemaParam:(id)arg1;
- (long long)uploadEntrance;
- (void)setUploadEntrance:(long long)arg1;
- (id)photoes;
- (void)setPhotoes:(id)arg1;
- (void)dealloc;
- (void)initNotificationObservers:(id)arg1;
- (id)initWithPhotoModels:(id)arg1 sourceLocation:(long long)arg2 targetLocation:(long long)arg3;
- (id)initWithGroupCode:(long long)arg1 uploadFrom:(long long)arg2;
- (id)initWithGroupCode:(long long)arg1 albumModel:(id)arg2 uploadFrom:(long long)arg3;
- (id)initWithAlbumModel:(id)arg1 uploadFrom:(long long)arg2;
- (id)initWithUploadFrom:(long long)arg1;
- (id)init;
- (id)albumReferOfUploadEntrance:(long long)arg1;
- (void)updateFakeAlbumInAlbumListIfNeeded:(id)arg1;
- (void)addFakeVideoToVideoList:(id)arg1 currentUin:(long long)arg2;
- (id)createFakeFeedVideo:(id)arg1 currentUin:(long long)arg2;
- (id)createAlbumPhotoUploadJob:(id)arg1 index:(long long)arg2 isFirsPhotoHaveExif:(_Bool *)arg3 currentUin:(long long)arg4;
- (id)createAlbumVideoUploadJob:(id)arg1 currentUin:(long long)arg2 index:(long long)arg3;
- (id)createPhotoUploadJobFromImageModels:(id)arg1 fakeFeedPictures:(id)arg2;
- (void)checkCurrentQualityAndBatchMediaType;
- (void)updateLastSelectAlbumInfo:(id)arg1;
- (void)uploadPhotosForQQZone;
- (void)uploadPhotosWithFeedModel:(id)arg1 uploadEntrance:(long long)arg2 serverTime:(long long)arg3;
- (void)uploadPhotosForGroupZone_quote;
- (void)uploadPhotosForGroupZone_local;
- (void)forwardCloudRecommendPhotos;
- (void)handleQzonePhotoQuoteToQzone;
- (void)forwardAIOPhotos;
- (id)selectedAlbumType;
- (id)selectedAlbumID;
- (id)forwardDescription;

// Remaining properties
@property(copy, nonatomic) NSString *appID; // @dynamic appID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isFromthirdApp; // @dynamic isFromthirdApp;
@property(nonatomic) id leftClickTarget; // @dynamic leftClickTarget;
@property(copy, nonatomic) NSString *refer; // @dynamic refer;
@property(readonly) Class superclass;
@property(nonatomic) _Bool waitForNet; // @dynamic waitForNet;
@property(nonatomic) _Bool waitForWiFi; // @dynamic waitForWiFi;

@end
