//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQImagePreviewController.h>

@class NSArray, NSMutableArray, NSNumber, QQAsset, QzoneFeedModel, SelectedView;

@interface QQMultiImagePreviewController : QQImagePreviewController
{
    NSMutableArray *_selectedList;
    _Bool _showsOriginalPhotoSend;
    _Bool _showFlashPicSend;
    SelectedView *_headerRightButton;
    NSArray *_allImagelist;
    unsigned long long _maxSelectCount;
    _Bool _showCheckCycle;
    _Bool _isCheckboxSelected;
    _Bool _isSuperShowSend2TroopAlbumBar;
    _Bool _isSupportMix;
    _Bool _isNotFastSend;
    _Bool _aVChatComingDismiss;
    _Bool _showPreviewBottomBar;
    float _maxHWProportion;
    float _minHWProportion;
    float _maxHPixels;
    float _maxWPixels;
    float _maxSize;
    QzoneFeedModel *_feedModelSelectedTroopAlbum;
    unsigned long long _maxSelectedSize;
    long long _maxVideoNum;
    NSNumber *_videoFileSizeLimit;
    long long _maxVideoDur;
    QQAsset *_lastSelectedAsset;
}

@property(retain, nonatomic) QQAsset *lastSelectedAsset; // @synthesize lastSelectedAsset=_lastSelectedAsset;
@property(nonatomic) _Bool showPreviewBottomBar; // @synthesize showPreviewBottomBar=_showPreviewBottomBar;
@property(nonatomic) _Bool aVChatComingDismiss; // @synthesize aVChatComingDismiss=_aVChatComingDismiss;
@property(nonatomic) _Bool isNotFastSend; // @synthesize isNotFastSend=_isNotFastSend;
@property(nonatomic) long long maxVideoDur; // @synthesize maxVideoDur=_maxVideoDur;
@property(retain, nonatomic) NSNumber *videoFileSizeLimit; // @synthesize videoFileSizeLimit=_videoFileSizeLimit;
@property(nonatomic) long long maxVideoNum; // @synthesize maxVideoNum=_maxVideoNum;
@property(nonatomic) _Bool isSupportMix; // @synthesize isSupportMix=_isSupportMix;
@property(nonatomic) float maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) float maxWPixels; // @synthesize maxWPixels=_maxWPixels;
@property(nonatomic) float maxHPixels; // @synthesize maxHPixels=_maxHPixels;
@property(nonatomic) float minHWProportion; // @synthesize minHWProportion=_minHWProportion;
@property(nonatomic) float maxHWProportion; // @synthesize maxHWProportion=_maxHWProportion;
@property(nonatomic) unsigned long long maxSelectedSize; // @synthesize maxSelectedSize=_maxSelectedSize;
@property(nonatomic) _Bool isSuperShowSend2TroopAlbumBar; // @synthesize isSuperShowSend2TroopAlbumBar=_isSuperShowSend2TroopAlbumBar;
@property(nonatomic) _Bool isCheckboxSelected; // @synthesize isCheckboxSelected=_isCheckboxSelected;
@property(retain, nonatomic) QzoneFeedModel *feedModelSelectedTroopAlbum; // @synthesize feedModelSelectedTroopAlbum=_feedModelSelectedTroopAlbum;
- (void)imageView:(id)arg1 photoPlayButtonPressed:(id)arg2 photo:(id)arg3;
- (void)refreshSelectedView;
- (void)didRotatePhoto:(id)arg1 toNewOrientation:(long long)arg2;
- (void)didScrollToPage:(int)arg1;
- (void)QQImagePickerBottomBarSendButtonDidClickAct;
- (void)QQImagePickerBottomBarSendButtonDidClick;
- (void)QQImagePickerBottomBarSizeButtonDidClickAct:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)QQImagePickerBottomBarSizeButtonDidClick:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)QQImagePickerBottomBarSizeButtonDidClick:(_Bool)arg1;
- (void)QQImagePickerBottomBarFlashButtonDidClickAct:(_Bool)arg1;
- (void)QQImagePickerBottomBarFlashButtonDidClick:(_Bool)arg1;
- (void)cleanIsAllSelectedPhotoLessThanCompleteBlock;
- (void)isAllSelectedPhotoLessThan:(long long)arg1 curIndex:(int)arg2;
- (void)isAllSelectedPhotoLessThan:(long long)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)getSelectedPhotoSizeStringForOriginalCompleteBlock:(CDUnknownBlockType)arg1;
- (void)cleanGetSelectedPhotoSizeCompleteBlock;
- (void)getSelectedPhotoSizeCursize:(long long)arg1 curIndex:(int)arg2;
- (void)getSelectedPhotoSizeCompleteBlock:(CDUnknownBlockType)arg1;
- (void)gotoShowEditActionSheet;
- (void)QQImagePickerBottomBarEditButtonDidClick;
- (void)cleanCheckAvailableCompleteBlock;
- (void)checkAvailable:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)selectedListSize;
- (void)setBottomBarFlashButtonSelected:(_Bool)arg1;
- (void)setBottomBarSizeButtonTitle:(id)arg1 selected:(_Bool)arg2;
- (void)resetBottomBarState;
@property(retain, nonatomic) NSArray *allImagelist; // @dynamic allImagelist;
@property(retain, nonatomic) NSMutableArray *selectedList; // @dynamic selectedList;
- (void)onRightButtonClickAct:(id)arg1 sender:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)onRightButtonClickAfterCheck:(_Bool)arg1 sender:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)onRightButtonClick:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)onRightButtonClick:(id)arg1;
- (void)onLeftButtonClick:(id)arg1;
- (void)removeAssetFromList:(id)arg1;
- (_Bool)isAssetSelected:(id)arg1;
- (void)setShowFlashPicSend:(_Bool)arg1;
- (void)setShowsOriginalPhotoSend:(_Bool)arg1;
- (void)resetTitleText:(int)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)getToolbar;
- (void)singleTapDetected;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned long long maxSelectCount; // @dynamic maxSelectCount;
@property(nonatomic) _Bool showCheckCycle; // @dynamic showCheckCycle;

@end

