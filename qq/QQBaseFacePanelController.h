//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, QQFacePanelView, QQFaceTabBar, UIButton;
@protocol QQBaseFacePanelDelegate;

@interface QQBaseFacePanelController : NSObject
{
    QQFacePanelView *_facePanel;
    QQFaceTabBar *_tabBar;
    UIButton *_sendButton;
    NSMutableDictionary *_dicFaceKeyboard;
    long long _lastTab;
    long long _interfaceOrientation;
    id _textDelegate;
    _Bool _showTabBar;
    _Bool _isTribeDetailInput;
    _Bool _notSupportIOSSystemFace;
    int _xo;
    _Bool _sendBtnSupported;
    NSArray *_firstTabItemList;
}

@property(nonatomic) _Bool sendBtnSupported; // @synthesize sendBtnSupported=_sendBtnSupported;
@property(retain, nonatomic) NSArray *firstTabItemList; // @synthesize firstTabItemList=_firstTabItemList;
@property(readonly, nonatomic) QQFacePanelView *facePanel; // @synthesize facePanel=_facePanel;
- (void)addShareFaceClassicKeyBoard;
- (void)showFacePanelIfNeeds;
- (void)hideFacePanel;
- (void)showFacePanel;
@property(nonatomic) _Bool showTabBar; // @dynamic showTabBar;
- (void)storeSelectTabWithID:(long long)arg1;
- (id)faceKeyBoardForItem:(long long)arg1;
- (_Bool)showFaceKeyboardForItem:(long long)arg1 forPage:(long long)arg2;
- (void)showFaceKeyboardForItem:(long long)arg1;
- (_Bool)selectTabItem:(id)arg1;
- (_Bool)addFaceKeyBoard:(id)arg1 ID:(long long)arg2;
- (void)dealloc;
- (void)switchMainView:(id)arg1;
- (struct CGRect)getQQFaceShowRectNew:(struct CGRect)arg1;
- (struct CGRect)getQQFaceHideRectNew:(struct CGRect)arg1;
- (double)getTabbarWidth;
- (_Bool)attachMainView:(id)arg1;

// Remaining properties
@property(nonatomic) long long interfaceOrientation; // @dynamic interfaceOrientation;
@property(nonatomic) _Bool isTribeDetailInput; // @dynamic isTribeDetailInput;
@property(nonatomic) _Bool notSupportIOSSystemFace; // @dynamic notSupportIOSSystemFace;
@property(nonatomic) id <QQBaseFacePanelDelegate> textDelegate; // @dynamic textDelegate;

@end

