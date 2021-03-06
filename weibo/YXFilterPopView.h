//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXBaseView.h"

@protocol YXFilterPopViewDelegate;

@interface YXFilterPopView : YXBaseView
{
    id <YXFilterPopViewDelegate> _delegate;
}

+ (id)buildPopView_CameraTag;
+ (id)buildPopView;
@property(nonatomic) id <YXFilterPopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)show;
- (void)dismiss;
- (void)btnClick:(id)arg1;
- (void)btnClick2:(id)arg1;
- (void)initUI;
- (void)initCameraUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrameForCameraTag:(struct CGRect)arg1;

@end

