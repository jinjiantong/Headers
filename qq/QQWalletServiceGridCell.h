//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQServiceGridCell.h>

#import <QQMainProject/QQWalletImageDownloaderDelegate-Protocol.h>

@class NSMutableArray, NSString, QQWalletApp, QQWalletFolder, QQWalletImageDownloader, SFImageView, UIImageView, UILabel;
@protocol QQWalletServiceGridCellDelegate;

@interface QQWalletServiceGridCell : QQServiceGridCell <QQWalletImageDownloaderDelegate>
{
    SFImageView *iconView;
    UILabel *nameLabel;
    UILabel *subNameLabel;
    UIImageView *redPointView;
    QQWalletApp *_app;
    _Bool _hasZipImags;
    QQWalletFolder *_folder;
    _Bool _isFolder;
    _Bool _isFirstLineCell;
    _Bool _showSubTitle;
    UIImageView *markImageView;
    UIImageView *backgroundImageView;
    int _type;
    _Bool _isMoreFolder;
    id <QQWalletServiceGridCellDelegate> _delegate;
    long long _marketType;
    unsigned long long _drawBorder;
    NSMutableArray *_images;
    QQWalletImageDownloader *_downloader;
}

+ (struct CGSize)welfareCell3Size;
+ (struct CGSize)welfareCellSize;
+ (struct CGSize)cellSize;
@property(retain, nonatomic) QQWalletImageDownloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(nonatomic) unsigned long long drawBorder; // @synthesize drawBorder=_drawBorder;
@property(nonatomic) _Bool isMoreFolder; // @synthesize isMoreFolder=_isMoreFolder;
@property(nonatomic) long long marketType; // @synthesize marketType=_marketType;
@property(nonatomic) __weak id <QQWalletServiceGridCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)downloader:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3;
- (void)downloader:(id)arg1 didDownloadImage:(id)arg2 forURL:(id)arg3;
- (id)accessibilityLabel;
- (_Bool)isSmallScreen;
- (void)downloadZipImages;
- (void)fillBackground;
- (id)getImageUrlArrayFromServiceId:(int)arg1;
- (void)setImageUrl:(id)arg1 forServiceId:(int)arg2;
- (void)downloadServiceImages;
- (void)configIconView;
- (void)setApp:(id)arg1 forType:(int)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

