//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQActivity.h>

@class NSString, UIImage;
@protocol FAViewLinkActivityDelegate;

@interface FAViewLinkActivity : QQActivity
{
    int _xo;
    UIImage *_activityImage;
    NSString *_activityTitle;
    int _type;
    id <FAViewLinkActivityDelegate> _delegate;
}

- (void)prepareWithActivityItems:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) UIImage *activityImage; // @dynamic activityImage;
@property(copy, nonatomic) NSString *activityTitle; // @dynamic activityTitle;
@property(nonatomic) id <FAViewLinkActivityDelegate> delegate; // @dynamic delegate;
@property(nonatomic) int type; // @dynamic type;

@end
