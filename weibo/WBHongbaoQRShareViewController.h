//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

@class NSString, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface WBHongbaoQRShareViewController : WBViewController
{
    UIImageView *qrImgView;
    UILabel *tips;
    UILabel *shareTips;
    UIButton *shareBtn;
    UIView *_shareView;
    NSString *_qrText;
    UIImage *_icon;
}

@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *qrText; // @synthesize qrText=_qrText;
@property(retain, nonatomic) UIView *shareView; // @synthesize shareView=_shareView;
- (void).cxx_destruct;
- (id)shareQRImage:(double)arg1 withIconSize:(double)arg2;
- (id)snapshotImage:(id)arg1;
- (void)shareBtnClicked:(id)arg1;
- (void)loadiconImageURL:(id)arg1;
- (id)createShareView:(_Bool)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)configSubviewsFrame;
- (void)configNaviegation;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

@end

