//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, OnlineTag, QRBookInfo, QRBookMarkInfo, QRSetting, ReaderRender, TextBaseViewController;

@interface QRReadingDataSource : NSObject
{
    struct CGSize _pageSize;
    _Bool _isBookClosed;
    _Bool _isLoadingNewChapter;
    _Bool _isOnlineReadingError;
    OnlineTag *_onlineTag;
    _Bool _isOnlineReading;
    QRBookInfo *_bookInfo;
    QRSetting *_setting;
    ReaderRender *_readerRender;
    long long _unFinishAnimation;
    TextBaseViewController *_textViewController;
    _Bool _isDayMode;
    unsigned long long _readPercent;
    NSMutableArray *_charpterInfoList;
    _Bool _setPageViewControllerFinished;
    _Bool _isCoverPage;
    NSString *_chapterTitleOnCoverPage;
    int _xo;
    _Bool _pageAnimationFinished;
    int _onlineReadingErrorType;
    long long _onlineReadingErrorValue;
    NSArray *_localChapterInfoList;
}

@property(retain, nonatomic) NSArray *localChapterInfoList; // @synthesize localChapterInfoList=_localChapterInfoList;
@property(nonatomic) long long onlineReadingErrorValue; // @synthesize onlineReadingErrorValue=_onlineReadingErrorValue;
@property(nonatomic) int onlineReadingErrorType; // @synthesize onlineReadingErrorType=_onlineReadingErrorType;
@property(retain, nonatomic) QRSetting *setting; // @dynamic setting;
@property(nonatomic) _Bool setPageViewControllerFinished; // @dynamic setPageViewControllerFinished;
@property(nonatomic) _Bool isLoadingNewChapter; // @dynamic isLoadingNewChapter;
@property(readonly, nonatomic) QRBookMarkInfo *currentLocalChapter;
- (_Bool)hasNextChapter;
- (_Bool)hasLastChapter;
- (double)commentSeizeParaPosY;
- (double)adSeizeParaPosY;
- (_Bool)isBottomPage;
- (_Bool)isTopPage;
@property(nonatomic) _Bool isCoverPage; // @dynamic isCoverPage;
- (void)didTurnToPageAtIndex;
- (void)didTurnToPageNext:(_Bool)arg1;
- (void)resetForNewBook;
- (id)getPrePageImage;
- (struct CGImage *)getNextImageRef;
- (struct CGImage *)getCurImageRef;
- (id)coverPageInfoWithChapterInformation:(id)arg1;
- (id)pageInfoWithChapterInfo:(id)arg1 pagePosition:(long long)arg2;
- (id)cachePageInfoWithChpaterId:(long long)arg1 pagePosition:(long long)arg2;
- (id)getPageInfoWithChapterId:(long long)arg1 pagePosition:(long long)arg2;
- (struct CGRect)getBoundRectIsFullScreen:(_Bool)arg1;
- (void)loadRender;
- (void)dealloc;
- (id)init;
- (_Bool)readerRenderBackgroundInContext:(struct CGContext *)arg1;
- (_Bool)readerRenderPageInContext:(struct CGContext *)arg1;
- (_Bool)drawPageAtPagePosition:(long long)arg1 inContext:(struct CGContext *)arg2;
- (id)imageForCoverPage;
- (id)imageForPagePosition:(long long)arg1;
- (unsigned long long)chapterInfoCount;
- (id)getChapterInformationWithoutUseDefaultWithChapterId:(long long)arg1;
- (id)getChapterInformationWithChapterId:(long long)arg1;
- (void)setChapterAlreadyDownloadWithOnlineTag:(id)arg1;
- (void)setChapterListWithOnlineTag:(id)arg1;
- (void)setChapterInfoWithDefaultInfoFromChapterId:(long long)arg1 toChapterId:(long long)arg2;
@property(nonatomic) _Bool isOnlineReading; // @dynamic isOnlineReading;
- (void)resetEngineConfig;
- (void)jumpToParaOffset:(long long)arg1;
- (void)jumpToChapretID:(long long)arg1 paraOffset:(long long)arg2;
- (void)jumpToBookMark:(id)arg1;
- (void)jumpToNewChapterWithChapterInfo:(id)arg1 readingType:(long long)arg2;
- (_Bool)openOnlineTag:(id)arg1;
- (void)openChapterNeedDownloadWithOnlineTag:(id)arg1;
- (void)saveReadProgress;
- (void)closeBook;
- (_Bool)reopenBook:(id)arg1;
- (_Bool)openBook:(id)arg1;
- (void)loadCurrentChapterAndPayIfNeeded:(_Bool)arg1;
- (void)loadCurrentChapter;

// Remaining properties
@property(retain, nonatomic) QRBookInfo *bookInfo; // @dynamic bookInfo;
@property(retain, nonatomic) NSString *chapterTitleOnCoverPage; // @dynamic chapterTitleOnCoverPage;
@property(retain, nonatomic) NSMutableArray *charpterInfoList; // @dynamic charpterInfoList;
@property(nonatomic) _Bool isDayMode; // @dynamic isDayMode;
@property(nonatomic) _Bool isOnlineReadingError; // @dynamic isOnlineReadingError;
@property(retain, nonatomic) OnlineTag *onlineTag; // @dynamic onlineTag;
@property(nonatomic) _Bool pageAnimationFinished; // @dynamic pageAnimationFinished;
@property(nonatomic) unsigned long long readPercent; // @dynamic readPercent;
@property(retain, nonatomic) ReaderRender *readerRender; // @dynamic readerRender;
@property(nonatomic) TextBaseViewController *textViewController; // @dynamic textViewController;
@property(nonatomic) long long unFinishAnimation; // @dynamic unFinishAnimation;

@end

