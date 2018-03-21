//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSLiveBaseComponent.h"

#import "KSModelDelegate-Protocol.h"

@class KSReportMenuModel, NSArray, NSMutableArray, NSString;

@interface KSLiveReportComponent : KSLiveBaseComponent <KSModelDelegate>
{
    KSReportMenuModel *_reportModel;
    NSArray *_anchorItems;
    NSArray *_audienceItems;
    NSMutableArray *_reportRequestModels;
}

@property(retain, nonatomic) NSMutableArray *reportRequestModels; // @synthesize reportRequestModels=_reportRequestModels;
@property(retain, nonatomic) NSArray *audienceItems; // @synthesize audienceItems=_audienceItems;
@property(retain, nonatomic) NSArray *anchorItems; // @synthesize anchorItems=_anchorItems;
@property(retain, nonatomic) KSReportMenuModel *reportModel; // @synthesize reportModel=_reportModel;
- (void).cxx_destruct;
- (void)_reportWithItem:(id)arg1 type:(unsigned long long)arg2;
- (void)_loadReportItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadAudienceReportItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadAnchorReportItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)reportAudienceWithItem:(id)arg1 user:(id)arg2;
- (void)reportAnchorWithItem:(id)arg1;
- (void)reportAudience:(id)arg1;
- (void)reportAnchor;
- (id)initWithContainer:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
