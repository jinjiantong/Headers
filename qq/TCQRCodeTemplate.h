//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TCQRCodeTemplateManager;

@interface TCQRCodeTemplate : NSObject
{
    TCQRCodeTemplateManager *_templatesMgr;
    id _identifier;
    unsigned int _qrsz;
    int _xo;
}

+ (id)templateWithParams:(id)arg1 andTemplateMgr:(id)arg2;
+ (id)RuleVer;
- (void)markAsCurrent;
- (id)unloadedResources;
- (_Bool)postLoadingTask;
- (void)loadResources;
- (_Bool)isAvailable;
- (_Bool)updateParams:(id)arg1;
- (id)initWithTemplatesMgr:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) id identifier; // @dynamic identifier;
@property(nonatomic) unsigned int qrsz; // @dynamic qrsz;
@property(retain, nonatomic) TCQRCodeTemplateManager *templatesMgr; // @dynamic templatesMgr;

@end

