//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_TPBaseEngine.h>

#import <QQMainProject/WalletMulMemSelBusiProcessDelegate-Protocol.h>

@class CFT_UILoadingView, NSString, UINavigationController;

@interface CFT_TPSelectFriendForPayEngine : CFT_TPBaseEngine <WalletMulMemSelBusiProcessDelegate>
{
    CFT_UILoadingView *_loadingView;
    _Bool _isMutilSelect;
    int _scene;
    int _selectedFriendCount;
    NSString *_friendUin;
    UINavigationController *_naviController;
}

@property(nonatomic) int selectedFriendCount; // @synthesize selectedFriendCount=_selectedFriendCount;
@property(nonatomic) _Bool isMutilSelect; // @synthesize isMutilSelect=_isMutilSelect;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) UINavigationController *naviController; // @synthesize naviController=_naviController;
@property(nonatomic) NSString *friendUin; // @synthesize friendUin=_friendUin;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

