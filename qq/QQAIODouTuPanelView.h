//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQFaceKeyBoard.h>

@class NSArray, NSString, UIImage;

@interface QQAIODouTuPanelView : QQFaceKeyBoard
{
    NSArray *_doutuImages;
    struct CGRect _qqtextfieldFrame;
    UIImage *_cutImage;
    id _pannelController;
    double _maxOffset;
    _Bool _hasCloudEmoji;
    _Bool _clearFlag;
    NSString *_keyword;
    NSArray *_maxEmojis;
    NSArray *_historys;
    unsigned long long _maxCount;
}

@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(retain, nonatomic) NSArray *historys; // @synthesize historys=_historys;
@property(retain, nonatomic) NSArray *maxEmojis; // @synthesize maxEmojis=_maxEmojis;
@property(nonatomic) _Bool clearFlag; // @synthesize clearFlag=_clearFlag;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) _Bool hasCloudEmoji; // @synthesize hasCloudEmoji=_hasCloudEmoji;
- (void).cxx_destruct;
- (void)dealloc;
- (void)willDismiss;
- (void)cancelDelayHidePanel;
- (void)delayHidePanel;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadFace;
- (void)removePlaceHolderCell;
- (void)insertFaceCellWithInfos:(id)arg1 fromIndex:(unsigned long long)arg2;
- (void)reloadWithEmojis:(id)arg1;
- (id)initWithEmojis:(id)arg1;
- (unsigned long long)columnPerPage;

// Remaining properties
@property(retain, nonatomic) UIImage *cutImage; // @dynamic cutImage;
@property(retain, nonatomic) NSArray *doutuImages; // @dynamic doutuImages;
@property(nonatomic) __weak id pannelController; // @dynamic pannelController;
@property(nonatomic) struct CGRect qqtextfieldFrame; // @dynamic qqtextfieldFrame;

@end

