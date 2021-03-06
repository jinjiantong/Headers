//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol ARECircleBtnViewProtocol;

@interface ARECircleBtnView : UIView
{
    UIView *_circleView;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    id <ARECircleBtnViewProtocol> _delegate;
}

@property(nonatomic) __weak id <ARECircleBtnViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapCircleBtnHandler;
- (id)initBottonWithFrame:(struct CGRect)arg1 image:(id)arg2 title:(id)arg3 delegate:(id)arg4;

@end

