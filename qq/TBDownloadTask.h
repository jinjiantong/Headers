//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileHandle, NSMutableURLRequest, NSString, NSURL, QQHttpClientSession;

@interface TBDownloadTask : NSObject
{
    _Bool _isCompeletedDownloaded;
    _Bool _noIPConnection;
    _Bool _enableDownloadPiece;
    int _state;
    int _taskType;
    unsigned long long _tryCount;
    NSString *_destination;
    NSString *_tempFilePath;
    unsigned long long _fileLength;
    double _timeout;
    NSURL *_url;
    unsigned long long _offset;
    unsigned long long _downLoadingOffset;
    double _downloadTime;
    CDUnknownBlockType _headerResponseBlock;
    CDUnknownBlockType _dataReceiveBlock;
    CDUnknownBlockType _didFinishBlock;
    CDUnknownBlockType _didFailBlock;
    unsigned long long _endOffset;
    unsigned long long _endSize;
    unsigned long long _pieceLength;
    QQHttpClientSession *_session;
    NSMutableURLRequest *_request;
    NSFileHandle *_fileHandle;
    NSString *_taskIdentify;
}

@property(retain, nonatomic) NSString *taskIdentify; // @synthesize taskIdentify=_taskIdentify;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) QQHttpClientSession *session; // @synthesize session=_session;
@property(nonatomic) unsigned long long pieceLength; // @synthesize pieceLength=_pieceLength;
@property(nonatomic) _Bool enableDownloadPiece; // @synthesize enableDownloadPiece=_enableDownloadPiece;
@property(nonatomic) _Bool noIPConnection; // @synthesize noIPConnection=_noIPConnection;
@property(nonatomic) unsigned long long endSize; // @synthesize endSize=_endSize;
@property(nonatomic) unsigned long long endOffset; // @synthesize endOffset=_endOffset;
@property(copy, nonatomic) CDUnknownBlockType didFailBlock; // @synthesize didFailBlock=_didFailBlock;
@property(copy, nonatomic) CDUnknownBlockType didFinishBlock; // @synthesize didFinishBlock=_didFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType dataReceiveBlock; // @synthesize dataReceiveBlock=_dataReceiveBlock;
@property(copy, nonatomic) CDUnknownBlockType headerResponseBlock; // @synthesize headerResponseBlock=_headerResponseBlock;
@property(nonatomic) double downloadTime; // @synthesize downloadTime=_downloadTime;
@property(nonatomic) _Bool isCompeletedDownloaded; // @synthesize isCompeletedDownloaded=_isCompeletedDownloaded;
@property(nonatomic) int taskType; // @synthesize taskType=_taskType;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) unsigned long long downLoadingOffset; // @synthesize downLoadingOffset=_downLoadingOffset;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) unsigned long long fileLength; // @synthesize fileLength=_fileLength;
@property(retain, nonatomic) NSString *tempFilePath; // @synthesize tempFilePath=_tempFilePath;
@property(retain, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long tryCount; // @synthesize tryCount=_tryCount;
- (void).cxx_destruct;
- (long long)requestTask:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)keyForString:(id)arg1;
- (long long)getSessionResponseStatusCode;
- (void)cancel;
- (void)start;
- (void)refreshStartState;
- (void)dealloc;
- (void)initRequest;
- (id)initWithURL:(id)arg1;

@end

