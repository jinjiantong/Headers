//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, UIImage, UIImageView;
@protocol PhotoCollectionViewCellDelegate;

@interface PhotoCollectionViewCell : UICollectionViewCell
{
    UIButton *_iconButton;
    UIButton *_closeButton;
    UIImage *_image;
    UIImageView *_photoView;
    id <PhotoCollectionViewCellDelegate> _delegate;
}

+ (id)identifier;
@property(nonatomic) __weak id <PhotoCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
- (void).cxx_destruct;
- (void)closeBtnClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

