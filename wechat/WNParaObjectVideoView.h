//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNParaObjectBaseView.h"

#import "IUiUtilExt-Protocol.h"
#import "WNParaImageViewDelegate-Protocol.h"

@class NSString, SightIconView, WNParaImageView, WNSightViewController;

@interface WNParaObjectVideoView : WNParaObjectBaseView <WNParaImageViewDelegate, IUiUtilExt>
{
    WNParaImageView *_imageView;
    SightIconView *_playIconView;
    WNSightViewController *_videoPlayerVC;
}

+ (double)getHightOfParaInfo:(id)arg1;
- (void).cxx_destruct;
- (void)onLoadComplete:(id)arg1 SourcePath:(id)arg2;
- (void)playInFullScreen;
- (void)onClickObject;
- (void)layoutView;
- (void)clearImage;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

