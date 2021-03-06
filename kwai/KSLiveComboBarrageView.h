//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSCommentComboView.h"

#import "KSBarrageView-Protocol.h"

@class KSBarrage, KSLiveComboBarrage, NSString;

@interface KSLiveComboBarrageView : KSCommentComboView <KSBarrageView>
{
    NSString *_reuseIdentifier;
    KSLiveComboBarrage *_comboBarrage;
    NSString *_barrageChangedToken;
}

@property(retain, nonatomic) NSString *barrageChangedToken; // @synthesize barrageChangedToken=_barrageChangedToken;
@property(retain, nonatomic) KSLiveComboBarrage *comboBarrage; // @synthesize comboBarrage=_comboBarrage;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void).cxx_destruct;
- (void)removeBarrageChangeObserver;
- (void)addBarrageChangeObserver;
- (void)prepareToReuse;
@property(readonly, nonatomic) KSBarrage *barrage; // @dynamic barrage;
- (void)drawWithBarrage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

