//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, WBMusicPluginView;

@interface WBMusicPluginPanelView : UIView
{
    WBMusicPluginView *_pluginView;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) WBMusicPluginView *pluginView; // @synthesize pluginView=_pluginView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)closeBtnPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

