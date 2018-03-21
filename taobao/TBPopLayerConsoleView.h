//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBPopLayerConsoleHeaderProtocal-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, TBPopLayerConsoleHeader, UITableView, UITextView;
@protocol PopLayerStatusConsoleProtocol, TBPopLayerConsoleViewProtocal;

@interface TBPopLayerConsoleView : UIView <UITableViewDataSource, UITableViewDelegate, TBPopLayerConsoleHeaderProtocal>
{
    id <TBPopLayerConsoleViewProtocal> _delegate;
    TBPopLayerConsoleHeader *_consoleHeader;
    UITableView *_menu;
    NSArray *_menuItemContent;
    UITextView *_currentConsole;
    UITextView *_popLayerStatusConsole;
    id <PopLayerStatusConsoleProtocol> _popLayerStatusConsoleDelegate;
    UITextView *_appPopLayerStatusConsole;
    id <PopLayerStatusConsoleProtocol> _appPopLayerStatusConsoleDelegate;
    UITextView *_popLayerViewLogConsole;
    UITextView *_popLayerWindVaneConsole;
    UITextView *_popLayerTrackingConsole;
    NSMutableArray *_trackingTexts;
    struct CGRect _oldFrame;
}

@property(retain, nonatomic) NSMutableArray *trackingTexts; // @synthesize trackingTexts=_trackingTexts;
@property(retain, nonatomic) UITextView *popLayerTrackingConsole; // @synthesize popLayerTrackingConsole=_popLayerTrackingConsole;
@property(retain, nonatomic) UITextView *popLayerWindVaneConsole; // @synthesize popLayerWindVaneConsole=_popLayerWindVaneConsole;
@property(retain, nonatomic) UITextView *popLayerViewLogConsole; // @synthesize popLayerViewLogConsole=_popLayerViewLogConsole;
@property(nonatomic) __weak id <PopLayerStatusConsoleProtocol> appPopLayerStatusConsoleDelegate; // @synthesize appPopLayerStatusConsoleDelegate=_appPopLayerStatusConsoleDelegate;
@property(retain, nonatomic) UITextView *appPopLayerStatusConsole; // @synthesize appPopLayerStatusConsole=_appPopLayerStatusConsole;
@property(nonatomic) __weak id <PopLayerStatusConsoleProtocol> popLayerStatusConsoleDelegate; // @synthesize popLayerStatusConsoleDelegate=_popLayerStatusConsoleDelegate;
@property(retain, nonatomic) UITextView *popLayerStatusConsole; // @synthesize popLayerStatusConsole=_popLayerStatusConsole;
@property(retain, nonatomic) UITextView *currentConsole; // @synthesize currentConsole=_currentConsole;
@property(copy, nonatomic) NSArray *menuItemContent; // @synthesize menuItemContent=_menuItemContent;
@property(retain, nonatomic) UITableView *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) TBPopLayerConsoleHeader *consoleHeader; // @synthesize consoleHeader=_consoleHeader;
@property(nonatomic) struct CGRect oldFrame; // @synthesize oldFrame=_oldFrame;
@property(nonatomic) __weak id <TBPopLayerConsoleViewProtocal> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)appendPopLayerTrackingConsoleWithText:(id)arg1;
- (void)appendPopLayerWindVaneConsoleWithText:(id)arg1;
- (void)appendPopLayerViewLogConsoleWithAttributedText:(id)arg1;
- (void)setAppPopLayerStatusConsoleWithAttributedText:(id)arg1;
- (void)setPopLayerStatusConsoleWithAttributedText:(id)arg1;
- (id)getTextView;
- (void)trackingConsoleTapped:(id)arg1;
- (void)appPopLayerStatusConsoleTapped:(id)arg1;
- (void)popLayerStatusConsoleTapped:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getTextViewWithIndex:(unsigned long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)close;
- (void)maxmize;
- (void)revert;
- (void)minimize;
- (void)menuButtonClicked;
- (void)pan:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
