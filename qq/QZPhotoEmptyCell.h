//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZPhotoModuleCell.h>

#import <QQMainProject/QZPhotoModuleDownloaderInterfaceDelegate-Protocol.h>

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface QZPhotoEmptyCell : QZPhotoModuleCell <QZPhotoModuleDownloaderInterfaceDelegate>
{
    UIImageView *_bgImgView;
    UILabel *_msgLabel;
    UIButton *_bgButton;
    UIView *_joinShareAlbumTipView;
    UILabel *_tipLabel;
    UIImageView *_tipIcon;
    _Bool _bgBtnHidden;
    _Bool _joinTipHidden;
    NSString *_bgURL;
    NSString *_bgBtnTitle;
    CDUnknownBlockType _buttonBlock;
    NSString *_emptyNoContentTitle;
    long long _state;
    long long _errorCode;
    NSString *_joinTip;
    double _offset;
}

@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *joinTip; // @synthesize joinTip=_joinTip;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *emptyNoContentTitle; // @synthesize emptyNoContentTitle=_emptyNoContentTitle;
@property(nonatomic) _Bool joinTipHidden; // @synthesize joinTipHidden=_joinTipHidden;
@property(nonatomic) _Bool bgBtnHidden; // @synthesize bgBtnHidden=_bgBtnHidden;
@property(copy, nonatomic) CDUnknownBlockType buttonBlock; // @synthesize buttonBlock=_buttonBlock;
@property(retain, nonatomic) NSString *bgBtnTitle; // @synthesize bgBtnTitle=_bgBtnTitle;
@property(retain, nonatomic) NSString *bgURL; // @synthesize bgURL=_bgURL;
- (void).cxx_destruct;
- (void)setState:(long long)arg1 url:(id)arg2;
- (void)onBgButtonClick:(id)arg1;
- (void)requestFinishedisSuccess:(_Bool)arg1 image:(id)arg2 reqUrl:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
