//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface QQARRetrievalClassInfo : NSObject
{
    int _iClass;
    int _iStatus;
    NSString *_sClass;
    double _dClassProb;
    NSMutableArray *_vItem;
}

@property(nonatomic) int iStatus; // @synthesize iStatus=_iStatus;
@property(retain, nonatomic) NSMutableArray *vItem; // @synthesize vItem=_vItem;
@property(nonatomic) double dClassProb; // @synthesize dClassProb=_dClassProb;
@property(retain, nonatomic) NSString *sClass; // @synthesize sClass=_sClass;
@property(nonatomic) int iClass; // @synthesize iClass=_iClass;
- (void).cxx_destruct;

@end

