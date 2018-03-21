//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UserSummaryCardBGModel, UserSummaryCardTemplateModel;

@interface QQVIPSummaryCardAuth : NSObject
{
    _Bool _canSetTemplate;
    _Bool _canSetBackground;
    _Bool _canSetCard;
    unsigned long long _templateAuthType;
    unsigned long long _backgroundAuthType;
    unsigned long long _cardAuthType;
    UserSummaryCardTemplateModel *_templateModel;
    UserSummaryCardBGModel *_bgModel;
    int _xo;
}

- (void).cxx_destruct;
- (id)initWithTemplateModel:(id)arg1 andBackgroundModel:(id)arg2;

// Remaining properties
@property(nonatomic) unsigned long long backgroundAuthType; // @dynamic backgroundAuthType;
@property(retain, nonatomic) UserSummaryCardBGModel *bgModel; // @dynamic bgModel;
@property(nonatomic) _Bool canSetBackground; // @dynamic canSetBackground;
@property(nonatomic) _Bool canSetCard; // @dynamic canSetCard;
@property(nonatomic) _Bool canSetTemplate; // @dynamic canSetTemplate;
@property(nonatomic) unsigned long long cardAuthType; // @dynamic cardAuthType;
@property(nonatomic) unsigned long long templateAuthType; // @dynamic templateAuthType;
@property(retain, nonatomic) UserSummaryCardTemplateModel *templateModel; // @dynamic templateModel;

@end
