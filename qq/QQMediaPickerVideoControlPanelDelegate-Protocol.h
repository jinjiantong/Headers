//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class MCGridVideoItem, MCTmplItem, QQMediaPickerVideoControlPanel;

@protocol QQMediaPickerVideoControlPanelDelegate <NSObject>

@optional
- (void)reFreshFaceDetectingWording;
- (void)QQMediaPickerVideoControlPanel:(QQMediaPickerVideoControlPanel *)arg1 selectGridVideoTemplItem:(MCGridVideoItem *)arg2;
- (void)QQMediaPickerVideoControlPanel:(QQMediaPickerVideoControlPanel *)arg1 onFaceUButtonClick:(id)arg2;
- (void)QQMediaPickerVideoControlPanel:(QQMediaPickerVideoControlPanel *)arg1 beginDraging:(_Bool)arg2;
- (void)QQMediaPickerVideoControlPanel:(QQMediaPickerVideoControlPanel *)arg1 downloadFailTemplItem:(MCTmplItem *)arg2;
- (void)QQMediaPickerVideoControlPanel:(QQMediaPickerVideoControlPanel *)arg1 selectTemplItem:(MCTmplItem *)arg2;
- (void)QQMediaPickerVideoControlPanel:(QQMediaPickerVideoControlPanel *)arg1 onRemakeButtonClick:(id)arg2;
- (void)QQMediaPickerVideoControlPanel:(QQMediaPickerVideoControlPanel *)arg1 onCustomButtonClick:(id)arg2;
- (void)QQMediaPickerVideoControlPanel:(QQMediaPickerVideoControlPanel *)arg1 onSendButtonClick:(id)arg2;
- (void)QQMediaPickerVideoControlPanel:(QQMediaPickerVideoControlPanel *)arg1 recordButtonCancel:(id)arg2;
- (void)QQMediaPickerVideoControlPanel:(QQMediaPickerVideoControlPanel *)arg1 recordButtonUp:(id)arg2;
- (void)QQMediaPickerVideoControlPanel:(QQMediaPickerVideoControlPanel *)arg1 recordButtonDown:(id)arg2;
@end
