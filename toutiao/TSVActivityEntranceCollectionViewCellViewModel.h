//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TSVActivityEntranceModel, TTImageInfosModel;

@interface TSVActivityEntranceCollectionViewCellViewModel : NSObject
{
    TTImageInfosModel *_coverImageModel;
    NSString *_activityPromotionText;
    NSString *_activityNameText;
    NSString *_participateCountText;
    unsigned long long _style;
    TSVActivityEntranceModel *_model;
}

@property(retain, nonatomic) TSVActivityEntranceModel *model; // @synthesize model=_model;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *participateCountText; // @synthesize participateCountText=_participateCountText;
@property(copy, nonatomic) NSString *activityNameText; // @synthesize activityNameText=_activityNameText;
@property(copy, nonatomic) NSString *activityPromotionText; // @synthesize activityPromotionText=_activityPromotionText;
@property(retain, nonatomic) TTImageInfosModel *coverImageModel; // @synthesize coverImageModel=_coverImageModel;
- (void).cxx_destruct;
- (void)bindWithModel;
- (id)initWithModel:(id)arg1;

@end

