//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIORichModel.h>

@class EmotionParseResult, NSMutableArray, NSMutableDictionary;

@interface QQAIOMultRichModel : QQAIORichModel
{
    NSMutableArray *_UIModels;
    NSMutableDictionary *_dataModels;
    _Bool _shouldReLayout;
    NSMutableArray *_subLayList;
    EmotionParseResult *_layoutResult;
}

@property(nonatomic) _Bool shouldReLayout; // @synthesize shouldReLayout=_shouldReLayout;
@property(retain, nonatomic) EmotionParseResult *layoutResult; // @synthesize layoutResult=_layoutResult;
@property(retain, nonatomic) NSMutableArray *subLayList; // @synthesize subLayList=_subLayList;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)dealloc;
- (id)getSubMsgList:(id)arg1 parent:(id)arg2;
- (double)GetMaxWidth:(double)arg1 height:(double)arg2;
- (id)splitLargeMessageInfo:(id)arg1;
- (id)parRichLongStructModel:(id)arg1;
- (id)dataModels;
- (void)layoutUIModel;
- (id)insertMergModel:(id)arg1;
- (void)clearLongMessageList;
- (id)splitRsSubMsgList:(id)arg1;
- (id)getLayoutResult:(id)arg1 fromLine:(int)arg2 toLine:(int)arg3;
- (id)eventHandleClassName;
- (id)cellViewClassName;
- (id)cellClassName;
- (id)cellDataForRow:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (long long)getFontIdFromMsgModel;
- (_Bool)isLongSplitMessage;
- (id)copyRealContent;
- (id)subPaths;
- (id)subUUIDs;
- (id)subUIAIOModels;
- (_Bool)supportReplay;
- (_Bool)containsImg;
- (_Bool)containsText;
- (void)setBSel:(_Bool)arg1;
- (id)forwordShows;
- (id)messageModels;
- (id)favoritesInfoModel;
- (void)setMsgID:(int)arg1 state:(int)arg2 error:(int)arg3;
- (_Bool)containMsgID:(int)arg1;

@end

