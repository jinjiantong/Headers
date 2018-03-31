//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable, TBDTemplateItem, TBDViewItem, TDMTemplateInfo;

@interface TDMDinamicItem : NSObject
{
    TBDTemplateItem *_templateItem;
    TBDViewItem *_viewItem;
    TDMTemplateInfo *_templateInfo;
    long long _type;
    NSMapTable *_context;
}

@property(retain, nonatomic) NSMapTable *context; // @synthesize context=_context;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) TDMTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(retain, nonatomic) TBDViewItem *viewItem; // @synthesize viewItem=_viewItem;
@property(readonly, nonatomic) TBDTemplateItem *templateItem; // @synthesize templateItem=_templateItem;
- (void).cxx_destruct;
- (void)addDinamicItemContext:(id)arg1 data:(id)arg2 extraData:(id)arg3;
- (id)viewGenerator;
- (id)bindViewData:(id)arg1 extraData:(id)arg2 failure:(CDUnknownBlockType)arg3;
- (id)updateViewData:(id)arg1 extraData:(id)arg2 failure:(CDUnknownBlockType)arg3;
- (double)emstimateViewHeightWithData:(id)arg1 extraData:(id)arg2 failure:(CDUnknownBlockType)arg3;
- (id)initWithTemplateInfo:(id)arg1 businessType:(long long)arg2;

@end

