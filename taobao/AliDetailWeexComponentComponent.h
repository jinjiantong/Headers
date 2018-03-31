//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliProductDetailComponent.h"

#import "VLViewDelegate-Protocol.h"

@class AliDetailWeexComponentModel, NSString, VLView, WJSBundleModel;

@interface AliDetailWeexComponentComponent : AliProductDetailComponent <VLViewDelegate>
{
    AliDetailWeexComponentModel *_model;
    VLView *_vlView;
    WJSBundleModel *_jsCacheModel;
}

+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) WJSBundleModel *jsCacheModel; // @synthesize jsCacheModel=_jsCacheModel;
@property(retain, nonatomic) VLView *vlView; // @synthesize vlView=_vlView;
@property(retain, nonatomic) AliDetailWeexComponentModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)sendReloadSingleCellEvent;
- (void)viewCall:(id)arg1 Callback:(CDUnknownBlockType)arg2;
- (void)onLoadVLView:(id)arg1 Error:(id)arg2;
- (void)onLoadFinishWithVLView:(id)arg1;
- (void)setObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

