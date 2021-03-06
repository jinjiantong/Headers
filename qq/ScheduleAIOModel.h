//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOMsgModel.h>

@class NSString, ScheuduleSummaryInfo;

@interface ScheduleAIOModel : QQAIOMsgModel
{
    double _contentHeight;
    int _extType;
    NSString *_strScheduleId;
    NSString *_strExtTypeText;
    ScheuduleSummaryInfo *_pScheduleData;
}

+ (id)modelWithMessageModel:(id)arg1;
@property(retain, nonatomic) ScheuduleSummaryInfo *pScheduleData; // @synthesize pScheduleData=_pScheduleData;
@property(nonatomic) int extType; // @synthesize extType=_extType;
@property(retain, nonatomic) NSString *strExtTypeText; // @synthesize strExtTypeText=_strExtTypeText;
@property(retain, nonatomic) NSString *strScheduleId; // @synthesize strScheduleId=_strScheduleId;
- (double)getContentHeight;
- (double)cellHeight;
- (id)cellViewClassName;
- (id)cellClassName;
- (void)dealloc;
- (id)initWithMessageModel:(id)arg1;

@end

