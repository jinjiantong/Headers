//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCOfficialBaseProcessor.h"

@class TBMCDetailItem;

@interface MCOfficialOldDataProcessor : MCOfficialBaseProcessor
{
    CDUnknownBlockType _selectAction;
    CDUnknownBlockType _selectReCallAction;
    CDUnknownBlockType _deleteAction;
    CDUnknownBlockType _noMoreRemindAction;
    TBMCDetailItem *_item;
    unsigned long long _lastTapTime;
    TBMCDetailItem *_noMoreRemindItem;
}

@property(nonatomic) __weak TBMCDetailItem *noMoreRemindItem; // @synthesize noMoreRemindItem=_noMoreRemindItem;
@property(nonatomic) unsigned long long lastTapTime; // @synthesize lastTapTime=_lastTapTime;
@property(retain, nonatomic) TBMCDetailItem *item; // @synthesize item=_item;
@property(copy, nonatomic) CDUnknownBlockType noMoreRemindAction; // @synthesize noMoreRemindAction=_noMoreRemindAction;
@property(copy, nonatomic) CDUnknownBlockType deleteAction; // @synthesize deleteAction=_deleteAction;
@property(copy, nonatomic) CDUnknownBlockType selectReCallAction; // @synthesize selectReCallAction=_selectReCallAction;
@property(copy, nonatomic) CDUnknownBlockType selectAction; // @synthesize selectAction=_selectAction;
- (void).cxx_destruct;
- (id)dateByMessageDOOrVO:(id)arg1;
- (void)sortByTimeWithMessageDOOrVO:(id)arg1;
- (void)sortByTimeMergeArray:(id)arg1;
- (void)handleMergeArray:(id)arg1;
- (id)mergeArrayForTopicKeyAndValues:(id)arg1 withUnKnownTopic:(id)arg2;
- (id)topicKeyAndValuesForDetailItems:(id)arg1 withUnKnownTopic:(id)arg2;
- (id)processDetailItems:(id)arg1;
- (id)getCellByOfficialVO:(id)arg1 tableView:(id)arg2 config:(id)arg3;
- (void)sortVoMapIndex:(id)arg1;
- (id)doTransformProcessorData:(id)arg1 config:(id)arg2;
- (id)init;

@end

