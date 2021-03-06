//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/FAPrinterPickerViewControllerDelegate-Protocol.h>

@class FAPrinter, NSArray, NSString, UIButton, UILabel, UIStepper, UISwitch, UIView;

@interface PrinterSetController : QQViewController <FAPrinterPickerViewControllerDelegate>
{
    int _nFromSrc;
    UIButton *_selBtn;
    UILabel *_selPrinterName;
    UILabel *_copiesValueLabel;
    UIButton *_printBtn;
    unsigned int _printCopies;
    _Bool _isDuplex;
    NSArray *_printFileList;
    UIStepper *_stepper;
    UISwitch *_switchBtn;
    UILabel *_duplexLabel;
    UILabel *_tipsLabel;
    UIView *_printerSetView;
    FAPrinter *_selectedPrinter;
}

@property(retain, nonatomic) FAPrinter *selectedPrinter; // @synthesize selectedPrinter=_selectedPrinter;
@property(nonatomic) int nFromSrc; // @synthesize nFromSrc=_nFromSrc;
- (void)printerPicker:(id)arg1 didSelectPrinter:(id)arg2;
- (void)printerManagerPrintersDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)actionClickSelBtn:(id)arg1;
- (void)dataReportSelFileType;
- (void)dataReportPrintSrc;
- (void)printFilesWithPrinter:(id)arg1;
- (void)actionClickPrintBtn:(id)arg1;
- (void)updatePrinterSetUI;
- (void)enableDuplex:(_Bool)arg1;
- (void)enableCopies:(_Bool)arg1;
- (void)setPrintFileList:(id)arg1;
- (void)stepperPressed:(id)arg1;
- (void)duplexPrintAction:(id)arg1;
- (void)setPrinterNameLabelText:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

