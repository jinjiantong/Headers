//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/GATextViewInternal.h>

@class UIResponder;
@protocol QQTextViewInternalDelegate;

@interface QQTextViewInternal : GATextViewInternal
{
    _Bool _isDictationPlaceholderShow;
    _Bool _isShortVideo;
    UIResponder *_overrideNextResponder;
}

@property(nonatomic) _Bool isShortVideo; // @synthesize isShortVideo=_isShortVideo;
@property(nonatomic) __weak UIResponder *overrideNextResponder; // @synthesize overrideNextResponder=_overrideNextResponder;
@property(nonatomic) _Bool isDictationPlaceholderShow; // @synthesize isDictationPlaceholderShow=_isDictationPlaceholderShow;
- (void).cxx_destruct;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)nextResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (void)dictationRecordingDidEnd;
- (void)setText:(id)arg1;
- (_Bool)AllEmptyContent;

// Remaining properties
@property(nonatomic) __weak id <QQTextViewInternalDelegate> delegate; // @dynamic delegate;

@end

