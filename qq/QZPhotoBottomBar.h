//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>
#import <QQMainProject/QZPhotoBottomBarInVideoPlayerDelegate-Protocol.h>

@class CALayer, NSDictionary, NSString, QZRichTextLabel, QZVideoPlayerToolBarWithPlayAndPause, QzonePhotoModel, UIButton, UIColor, UIImageView, UILabel;
@protocol QZCommonVideoViewDelegate, QZPhotoBottomBarDelegate;

@interface QZPhotoBottomBar : UIView <CAAnimationDelegate, QZPhotoBottomBarInVideoPlayerDelegate>
{
    int _xo;
    UIView *_toolView;
    UIView *_descriptionBackgroundView;
    UIImageView *_decriptionIcon;
    UIColor *_enableColor;
    UIColor *_disableColor;
    NSDictionary *_seletorDic;
    UIView *_videoPlayerBarBackgroundView;
    QZRichTextLabel *_descriptionLabel;
    UIButton *_moreBtn;
    UIButton *_likeBtn;
    UIButton *_commentBtn;
    UIButton *_inputBtn;
    UILabel *_likeLabel;
    UILabel *_commentLabel;
    _Bool _showDescription;
    _Bool _showOneLineDescription;
    _Bool _isShareAlbum;
    long long _anonymity;
    QzonePhotoModel *_photoModel;
    double _isLandscape;
    id <QZPhotoBottomBarDelegate> _delegate;
    id <QZCommonVideoViewDelegate> _videoPlayerDelegate;
    QZVideoPlayerToolBarWithPlayAndPause *_videoPlayerControlBar;
    long long _style;
    _Bool _showDate;
    CALayer *_likeAnimateLayer;
}

@property(nonatomic) _Bool showDate; // @synthesize showDate=_showDate;
@property(retain, nonatomic) CALayer *likeAnimateLayer; // @synthesize likeAnimateLayer=_likeAnimateLayer;
@property(retain, nonatomic) QZVideoPlayerToolBarWithPlayAndPause *videoPlayerControlBar; // @synthesize videoPlayerControlBar=_videoPlayerControlBar;
@property(nonatomic) id <QZCommonVideoViewDelegate> videoPlayerDelegate; // @synthesize videoPlayerDelegate=_videoPlayerDelegate;
@property(nonatomic) id <QZPhotoBottomBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) QzonePhotoModel *photoModel; // @synthesize photoModel=_photoModel;
- (void)dealloc;

// Remaining properties
@property(nonatomic) long long anonymity; // @dynamic anonymity;
@property(retain, nonatomic) UIButton *commentBtn; // @dynamic commentBtn;
@property(retain, nonatomic) UILabel *commentLabel; // @dynamic commentLabel;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) UIImageView *decriptionIcon; // @dynamic decriptionIcon;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIView *descriptionBackgroundView; // @dynamic descriptionBackgroundView;
@property(retain, nonatomic) QZRichTextLabel *descriptionLabel; // @dynamic descriptionLabel;
@property(retain, nonatomic) UIColor *disableColor; // @dynamic disableColor;
@property(retain, nonatomic) UIColor *enableColor; // @dynamic enableColor;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIButton *inputBtn; // @dynamic inputBtn;
@property(nonatomic) _Bool isShareAlbum; // @dynamic isShareAlbum;
@property(retain, nonatomic) UIButton *likeBtn; // @dynamic likeBtn;
@property(retain, nonatomic) UILabel *likeLabel; // @dynamic likeLabel;
@property(retain, nonatomic) UIButton *moreBtn; // @dynamic moreBtn;
@property(retain, nonatomic) UIButton *originButton; // @dynamic originButton;
@property(copy, nonatomic) NSDictionary *seletorDic; // @dynamic seletorDic;
@property(nonatomic) _Bool showDescription; // @dynamic showDescription;
@property(nonatomic) _Bool showOneLineDescription; // @dynamic showOneLineDescription;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView *toolView; // @dynamic toolView;
@property(retain, nonatomic) UIView *videoPlayerBarBackgroundView; // @dynamic videoPlayerBarBackgroundView;

@end

