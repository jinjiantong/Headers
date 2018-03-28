//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SSActivityViewDelegate-Protocol.h"

@class NSString, SDWebImageManager, SSActivityView, TTActivityShareManager;

@interface TTMomentProfileShareHelper : NSObject <SSActivityViewDelegate>
{
    NSString *_userID;
    NSString *_mediaID;
    SDWebImageManager *_imageManager;
    long long _curShareSourceType;
    SSActivityView *_phoneShareView;
    TTActivityShareManager *_shareManager;
}

@property(retain, nonatomic) TTActivityShareManager *shareManager; // @synthesize shareManager=_shareManager;
@property(retain, nonatomic) SSActivityView *phoneShareView; // @synthesize phoneShareView=_phoneShareView;
@property(nonatomic) long long curShareSourceType; // @synthesize curShareSourceType=_curShareSourceType;
@property(retain, nonatomic) SDWebImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)activityView:(id)arg1 didCompleteByItemType:(long long)arg2;
- (void)shareWithUserID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
