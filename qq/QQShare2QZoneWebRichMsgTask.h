//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQShareWebRichMsgTaskBase.h>

#import <QQMainProject/QQRichMsgUtilDelegate-Protocol.h>

@class NSString;

@interface QQShare2QZoneWebRichMsgTask : QQShareWebRichMsgTaskBase <QQRichMsgUtilDelegate>
{
}

- (void)shareToZoneDoReport:(id)arg1;
- (void)dealloc;
- (void)shareToQZoneFail;
- (void)shareToQZoneSuccess;
- (void)shareToQZoneCancelled;
- (void)shareToQZone:(id)arg1;
- (void)doShare:(id)arg1;
- (void)shareWithRichData:(id)arg1;
- (void)processPreviewImage:(id)arg1;
- (_Bool)shareWebRichMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
