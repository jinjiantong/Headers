//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, UIButton, WXSDKInstance;

@interface TBLifeCircleUnFoldView : UIView
{
    CDUnknownBlockType _onClickedBlock;
    CDUnknownBlockType _renderFinshBlock;
    NSString *_url;
    NSDictionary *_data;
    NSString *_storeId;
    UIButton *_foldButton;
    WXSDKInstance *_wxInstance;
    UIView *_weexView;
}

@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(retain, nonatomic) WXSDKInstance *wxInstance; // @synthesize wxInstance=_wxInstance;
@property(retain, nonatomic) UIButton *foldButton; // @synthesize foldButton=_foldButton;
@property(copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) CDUnknownBlockType renderFinshBlock; // @synthesize renderFinshBlock=_renderFinshBlock;
@property(copy, nonatomic) CDUnknownBlockType onClickedBlock; // @synthesize onClickedBlock=_onClickedBlock;
- (void).cxx_destruct;
- (void)foldButtonClick;
- (void)loadWeexView:(id)arg1;
- (void)renderWeexWithUrl:(id)arg1 Data:(id)arg2 storeId:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
