//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/ARMapOperation.h>

#import <QQMainProject/SimpleAlertViewDelegate-Protocol.h>

@class ARMapNewGuideView, NSString, QQARMapSecurityTipsAlert;

@interface ARMapNewGuideOperation : ARMapOperation <SimpleAlertViewDelegate>
{
    ARMapNewGuideView *_guideView;
    QQARMapSecurityTipsAlert *_alert;
}

- (void).cxx_destruct;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)showTheAlert:(id)arg1;
- (void)securityTipsAlert;
- (void)start;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

