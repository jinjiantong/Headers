//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ATSBundleComponent, ATSCustomize, ATSFooterModel, ATSLandingHeaderModel, ATSStatus, NSMutableArray;
@protocol ATSDataBuilderDelegate;

@interface ATSDataBuilder : NSObject
{
    id <ATSDataBuilderDelegate> _delegate;
    NSMutableArray *_dataArray;
    ATSBundleComponent *_invalidBundle;
    ATSFooterModel *_footerModel;
    ATSLandingHeaderModel *_headerModel;
    ATSStatus *_status;
    long long _totalCount;
    double _serverTimeOffset;
    ATSCustomize *_cellCustomize;
    unsigned long long _dataSourceType;
}

@property(nonatomic) unsigned long long dataSourceType; // @synthesize dataSourceType=_dataSourceType;
@property(retain, nonatomic) ATSCustomize *cellCustomize; // @synthesize cellCustomize=_cellCustomize;
@property(nonatomic) double serverTimeOffset; // @synthesize serverTimeOffset=_serverTimeOffset;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) ATSStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) ATSLandingHeaderModel *headerModel; // @synthesize headerModel=_headerModel;
@property(retain, nonatomic) ATSFooterModel *footerModel; // @synthesize footerModel=_footerModel;
@property(retain, nonatomic) ATSBundleComponent *invalidBundle; // @synthesize invalidBundle=_invalidBundle;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak id <ATSDataBuilderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clearUIModel;
- (void)switchSourceType:(unsigned long long)arg1;
- (void)clearData;
- (void)parseLandingItemContextModel:(id)arg1;
- (void)parseLandingItemsModel:(id)arg1;
- (void)parseLandingSourceModel:(id)arg1;
- (void)parseLandingBundles:(id)arg1;
- (void)parseLandingHeader:(id)arg1;
- (void)parseEngineFooter:(id)arg1;
- (void)parseFlexibleModel:(id)arg1;
- (void)parseFlexibleModel:(id)arg1 flexibleStyle:(unsigned long long)arg2 cellHeight:(double)arg3;
- (void)parseShopModel:(id)arg1;
- (void)parseItemContextModel:(id)arg1;
- (void)parseEngineValidBundles:(id)arg1;
- (void)parseEngineNavigator:(id)arg1;
- (void)buildLandingData;
- (void)buildData;

@end

