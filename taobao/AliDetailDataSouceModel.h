//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AliDetailComponentModel, NSArray, NSString;
@protocol AliDetailComponentModel;

@interface AliDetailDataSouceModel : NSObject
{
    AliDetailComponentModel *_naviModel;
    AliDetailComponentModel *_headerModel;
    AliDetailComponentModel *_toolbarModel;
    NSString *_requestMap;
    NSArray<AliDetailComponentModel> *_mainModelList;
}

@property(retain, nonatomic) NSArray<AliDetailComponentModel> *mainModelList; // @synthesize mainModelList=_mainModelList;
@property(retain, nonatomic) NSString *requestMap; // @synthesize requestMap=_requestMap;
@property(retain, nonatomic) AliDetailComponentModel *toolbarModel; // @synthesize toolbarModel=_toolbarModel;
@property(retain, nonatomic) AliDetailComponentModel *headerModel; // @synthesize headerModel=_headerModel;
@property(retain, nonatomic) AliDetailComponentModel *naviModel; // @synthesize naviModel=_naviModel;
- (void).cxx_destruct;

@end
