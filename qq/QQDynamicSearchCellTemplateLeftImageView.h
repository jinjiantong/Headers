//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NearbyFriendCellTag, QQAsynUrlImageView, UIImageView;

@interface QQDynamicSearchCellTemplateLeftImageView : UIView
{
    UIImageView *_richMediaIcon;
    NearbyFriendCellTag *_cellTag;
    QQAsynUrlImageView *_avatarImageView;
    NSDictionary *_layoutContentInfo;
    long long _imageType;
}

+ (struct CGSize)imageSizeForContentInfo:(id)arg1;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(retain, nonatomic) NSDictionary *layoutContentInfo; // @synthesize layoutContentInfo=_layoutContentInfo;
@property(retain, nonatomic) QQAsynUrlImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)clearLeftImgContent:(id)arg1;
- (void)loadUrlImage:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

