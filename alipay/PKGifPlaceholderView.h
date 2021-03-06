//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class APImageRequest, MFVideoProgress, NSDictionary, NSString, UIButton, UIImageView, UILabel;

@interface PKGifPlaceholderView : UIView
{
    CDUnknownBlockType _downloadCompletionBlock;
    NSDictionary *_gifData;
    UIImageView *_firtFrameView;
    UIImageView *_gifView;
    UIButton *_downloadButton;
    UILabel *_sizeLabel;
    MFVideoProgress *_progressView;
    UIImageView *_failImage;
    NSString *_cloudId;
    NSString *_business;
    APImageRequest *_imageRequest;
}

@property(retain, nonatomic) APImageRequest *imageRequest; // @synthesize imageRequest=_imageRequest;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
@property(retain, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
@property(retain, nonatomic) UIImageView *failImage; // @synthesize failImage=_failImage;
@property(retain, nonatomic) MFVideoProgress *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) UIImageView *gifView; // @synthesize gifView=_gifView;
@property(retain, nonatomic) UIImageView *firtFrameView; // @synthesize firtFrameView=_firtFrameView;
@property(retain, nonatomic) NSDictionary *gifData; // @synthesize gifData=_gifData;
@property(copy, nonatomic) CDUnknownBlockType downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)uploadPrgress:(id)arg1;
- (void)startDownloadGif:(id)arg1 bussiness:(id)arg2;
- (void)setDonwloadProgress:(double)arg1;
- (void)refreshState:(unsigned long long)arg1;
- (void)commonInitialization;
- (void)downloadGif:(id)arg1;
- (void)reryDownloadGif:(id)arg1;
- (void)dealloc;
- (id)init;

@end

