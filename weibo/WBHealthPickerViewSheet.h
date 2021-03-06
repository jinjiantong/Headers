//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBListPickerViewDelegate-Protocol.h"

@class NSString;
@protocol WBListPickerViewDelegate;

@interface WBHealthPickerViewSheet : UIView <WBListPickerViewDelegate>
{
    UIView *_pickerView;
    UIView *_backdropView;
    id <WBListPickerViewDelegate> _initialDelegate;
}

+ (id)sheetWithPickerView:(id)arg1;
@property(nonatomic) __weak id <WBListPickerViewDelegate> initialDelegate; // @synthesize initialDelegate=_initialDelegate;
@property(retain, nonatomic) UIView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *pickerView; // @synthesize pickerView=_pickerView;
- (void).cxx_destruct;
- (void)listPickFinished:(id)arg1 withItemsDic:(id)arg2;
- (void)showInView:(id)arg1;
- (void)backdropPressed:(id)arg1;
- (id)initWithPickerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

