//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface ARUPStatisticsObject : NSObject
{
    int _port;
    int _ret;
    float _size;
    float _costTime;
    int _errorCode;
    int _subcode;
    int _retryTimes;
    float _conntime;
    NSString *_biz;
    NSString *_ip;
    NSString *_fileID;
    NSString *_token;
    NSString *_errorMsg;
    NSDictionary *_exitDict;
    NSDate *_startRequestTokenDate;
    NSDate *_endRequestTokenDate;
    NSDate *_endUploadDate;
    NSDate *_startConnDate;
    NSDate *_endConnDate;
}

@property(retain, nonatomic) NSDate *endConnDate; // @synthesize endConnDate=_endConnDate;
@property(retain, nonatomic) NSDate *startConnDate; // @synthesize startConnDate=_startConnDate;
@property(retain, nonatomic) NSDate *endUploadDate; // @synthesize endUploadDate=_endUploadDate;
@property(retain, nonatomic) NSDate *endRequestTokenDate; // @synthesize endRequestTokenDate=_endRequestTokenDate;
@property(retain, nonatomic) NSDate *startRequestTokenDate; // @synthesize startRequestTokenDate=_startRequestTokenDate;
@property(retain, nonatomic) NSDictionary *exitDict; // @synthesize exitDict=_exitDict;
@property(nonatomic) float conntime; // @synthesize conntime=_conntime;
@property(nonatomic) int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) int subcode; // @synthesize subcode=_subcode;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(nonatomic) float costTime; // @synthesize costTime=_costTime;
@property(nonatomic) float size; // @synthesize size=_size;
@property(nonatomic) int ret; // @synthesize ret=_ret;
@property(nonatomic) int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(retain, nonatomic) NSString *biz; // @synthesize biz=_biz;
- (void).cxx_destruct;
- (double)getCostTransmissionConsumingTime;
- (double)getConnectionConsumingTime;

@end
