//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/QQCircularProgressViewDelegate-Protocol.h>
#import <QQMainProject/QQPhotoDelegate-Protocol.h>
#import <QQMainProject/QQTinyVideoImageViewDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class GifViewAdapter, MQZFaceDetectorCoverView, NSString, QQAnimatedRevealMaskView, QQBasePhoto, QQCircularProgressView, QQImageViewSrollView, QQTwinkleCircleProgressView, QZZoomTipsView, QzoneGifViewAdapter, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UIPinchGestureRecognizer;
@protocol QQImageViewDelegate;

@interface QQImageView : UIView <QQTinyVideoImageViewDelegate, UIScrollViewDelegate, QQPhotoDelegate, QQCircularProgressViewDelegate, UIGestureRecognizerDelegate>
{
    struct CGSize _imageSize;
    UIView *_imageView;
    QQImageViewSrollView *_scrollView;
    _Bool _isCurrentPage;
    _Bool _canDownload;
    _Bool _isHandleLongPress;
    _Bool _isAnimating;
    _Bool _hasNotifyDownloadFail;
    int _imageState;
    QQCircularProgressView *_progressView;
    id <QQImageViewDelegate> _touchDelegate;
    QQBasePhoto *_photo;
    _Bool _imageLoading;
    _Bool _enableCorrectThumbnailRect;
    UILabel *_overSizeLabel;
    UILabel *_picSourceLabel;
    int _xo;
    _Bool _shouldUpdateImage;
    double _lastRotation;
    struct CGAffineTransform _lastScrollViewTransform;
    _Bool _shouldBeginRotate;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    GifViewAdapter *_gifAdapter;
    QzoneGifViewAdapter *_sharpPAdapter;
    UIButton *_photoPlayButton;
    UIImageView *_detailImageView;
    double _displayingZoomScaler;
    double _orginalImageZoomScaler;
    struct CGSize _orginalImageSize;
    NSString *_picSourceStr;
    QQTwinkleCircleProgressView *_tcProgressView;
    QQAnimatedRevealMaskView *_revealMaskView;
    QZZoomTipsView *_tipsView;
    UIButton *_rankBtn;
    _Bool _ignoreMakeRedEnv;
    _Bool _canReceiveTap;
    MQZFaceDetectorCoverView *_coverView;
    struct CGSize _realImageSize;
}

@property(nonatomic) _Bool canReceiveTap; // @synthesize canReceiveTap=_canReceiveTap;
@property(retain, nonatomic) MQZFaceDetectorCoverView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) _Bool ignoreMakeRedEnv; // @synthesize ignoreMakeRedEnv=_ignoreMakeRedEnv;
@property(nonatomic) struct CGSize realImageSize; // @synthesize realImageSize=_realImageSize;
- (void)statusBarOrientationChange:(id)arg1;
- (void)resetTCProgressView;
- (void)setTCProgress:(double)arg1;
- (void)showTCProgressView:(_Bool)arg1;
- (void)resetOverSizeLabel;
- (void)hideFileOverSizeView;
- (void)showFileFailView:(_Bool)arg1;
- (_Bool)isFileNeedDownloadThumb;
- (void)notifyProgressiveJpgInfo:(id)arg1;
- (void)removeAllAnimations;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)updateImageAfterDelay;
- (void)notifyAnimationFinished:(id)arg1;
- (void)notifyDownloadThumbFail:(id)arg1;
- (void)notifyDownloadThumbSuccess:(id)arg1;
- (void)notifyDownloadFail:(id)arg1;
- (void)notifyNetWorkError:(id)arg1;
- (void)notifyAsynLoadImageFail:(id)arg1;
- (void)notifyAsynLoadImageSuccess:(id)arg1;
- (void)notifyDownloadSuccess:(id)arg1;
- (void)notifyDownloadProgress:(id)arg1;
- (void)notifyDownloadSuperPicSuccess:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)handleDoubleTap:(id)arg1;
- (void)handleTinyVideoHBDoulbeTap:(id)arg1;
- (void)handleSingleTapRedEnvAfterDelay:(id)arg1;
- (void)handleSingleTapAfterDelay;
- (void)handleSingleTap:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleTapGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleRotationGesture:(id)arg1;
- (long long)getNextOrientation:(long long)arg1 isClockwise:(_Bool)arg2 count:(int)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)prepareMakeRedEnvelopeParam;
- (void)removeDetailImageView;
- (void)loadDetailImage;
- (void)showDetailImageView;
- (struct CGRect)getCurrentImageDisplayRect;
- (id)getMsgOwnerUin;
- (id)getTinyVideoShortVideoId;
- (void)onPlayVideoButtonClick:(id)arg1;
- (_Bool)shouldPlayTinyVideo:(id)arg1;
- (void)resetFrameWithVideoSize:(struct CGSize)arg1;
- (void)stopTinyVideo;
- (void)playTinyVideo;
- (int)getImageViewImageState;
- (void)setCanDownload:(_Bool)arg1;
- (void)setIsCurrentPage:(_Bool)arg1;
- (void)delayShowFailedTips:(id)arg1;
- (void)showDownloadFailNotice:(id)arg1;
- (void)downloadImageIfNeeded;
- (void)updateProgressView;
- (void)showProgressLoading;
- (void)hideProgressView;
- (void)showProgressView;
- (_Bool)shouldShowProgress;
- (void)resetZoomScale;
- (void)reloadPhoto;
- (void)asynLoadImage;
- (void)loadImage;
- (void)showAnimateAndLoadImage;
- (void)loadImageInDefaultRunLoopMode;
- (void)setFrame:(struct CGRect)arg1;
- (void)setImage:(id)arg1;
- (void)openVideoFloat:(id)arg1;
- (void)setupQzonePhotoPlayButtonHidden;
- (id)createPlayerView:(id)arg1;
- (struct CGSize)getSizeWithTransform:(struct CGAffineTransform)arg1 inputSize:(struct CGSize)arg2;
- (id)createCommonVideoInfo:(id)arg1;
- (void)onRankBtnClick:(id)arg1;
- (_Bool)showPosDanceTailByMessageType;
- (void)setPhoto:(id)arg1;
- (void)resetImageFrame;
- (void)showPicSourceLabel:(id)arg1;
- (void)dealloc;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enableCorrectThumbnailRect; // @dynamic enableCorrectThumbnailRect;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool imageLoading; // @dynamic imageLoading;
@property(readonly, nonatomic) int imageState; // @dynamic imageState;
@property(readonly, nonatomic) UIView *imageView; // @dynamic imageView;
@property(readonly, nonatomic) QQBasePhoto *photo; // @dynamic photo;
@property(readonly, nonatomic) QQImageViewSrollView *scrollView; // @dynamic scrollView;
@property(readonly) Class superclass;
@property(nonatomic) id <QQImageViewDelegate> touchDelegate; // @dynamic touchDelegate;

@end

