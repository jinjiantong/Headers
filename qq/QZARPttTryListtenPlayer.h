//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQPttTryListtenPlayer.h>

#import <QQMainProject/QZARVoiceCHangeTryPlayerDelegate-Protocol.h>

@class NSString;
@protocol QZARPttTryListtenPlayerDelegate;

@interface QZARPttTryListtenPlayer : QQPttTryListtenPlayer <QZARVoiceCHangeTryPlayerDelegate>
{
    id <QZARPttTryListtenPlayerDelegate> _qzarPttTryListtenPlayerDelegate;
}

@property(nonatomic) id <QZARPttTryListtenPlayerDelegate> qzarPttTryListtenPlayerDelegate; // @synthesize qzarPttTryListtenPlayerDelegate=_qzarPttTryListtenPlayerDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

