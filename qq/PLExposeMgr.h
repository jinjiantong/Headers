//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/CSChannelDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol PLExposeDelegate;

@interface PLExposeMgr : NSObject <CSChannelDelegate>
{
    _Bool _isSuperExposeUser;
    id <PLExposeDelegate> _delegate;
    NSMutableDictionary *_exposeInfo;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *exposeInfo; // @synthesize exposeInfo=_exposeInfo;
@property(nonatomic) __weak id <PLExposeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isSuperExposeUser; // @synthesize isSuperExposeUser=_isSuperExposeUser;
- (void).cxx_destruct;
- (void)onError:(id)arg1;
- (void)onReceviceData:(struct LCMessage *)arg1;
- (void)fetchData:(id)arg1;
- (void)exposeWithUin:(unsigned long long)arg1 type:(long long)arg2 feedsId:(id)arg3 andContent:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
