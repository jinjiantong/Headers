//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MKTNetwork : NSObject
{
    id _delegate;
    NSMutableDictionary *_connDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *connDict; // @synthesize connDict=_connDict;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)accsChannelConnectDidChanged:(_Bool)arg1;
- (void)messageArrive:(id)arg1;
- (id)getConnectionByType:(id)arg1;
- (void)registerConnection:(id)arg1 type:(id)arg2;

@end

