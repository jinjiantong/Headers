//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRecmdCardBaseProvider.h"

#import "TBRecmdCardProvider-Protocol.h"

@class NSString;

@interface TBRecmdItemCardProvider : TBRecmdCardBaseProvider <TBRecmdCardProvider>
{
    double _height;
}

+ (id)factoryKey;
@property(nonatomic) double height; // @synthesize height=_height;
- (void)clickTrack;
- (void)cardClicked;
- (void)updateModel:(id)arg1;
- (_Bool)hasDesc;
- (void)updateCardWithData;
- (id)selfView;
- (id)selfModel;
- (id)createCard;
- (Class)cardClass;
- (id)initWithData:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
