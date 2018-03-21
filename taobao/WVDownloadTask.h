//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSData, NSDictionary, NSError, NSObject, NSOutputStream, NSRecursiveLock, NSString, NSURLConnection, NSURLRequest, NSURLResponse;
@protocol OS_dispatch_queue;

@interface WVDownloadTask : NSOperation
{
    _Bool _checkResponse;
    _Bool _shouldResume;
    _Bool _isExecuting;
    _Bool _isFinished;
    NSURLRequest *_request;
    NSDictionary *_userInfo;
    NSURLResponse *_response;
    NSData *_responseData;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _progressBlock;
    NSString *_destinationPath;
    NSRecursiveLock *_lock;
    NSString *_responseString;
    id _responseJson;
    NSURLConnection *_connection;
    long long _totalBytesRead;
    NSOutputStream *_outputStream;
}

+ (id)taskWithRequest:(id)arg1 withPriority:(long long)arg2;
+ (id)taskWithURL:(id)arg1 withPriority:(long long)arg2;
+ (id)taskWithString:(id)arg1 withPriority:(long long)arg2;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) id responseJson; // @synthesize responseJson=_responseJson;
@property(copy, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(nonatomic) _Bool shouldResume; // @synthesize shouldResume=_shouldResume;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(readonly, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic, getter=isCheckResponse) _Bool checkResponse; // @synthesize checkResponse=_checkResponse;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)isConcurrent;
- (void)fixErrorDescription;
- (void)operationFinished;
- (void)operationStartExecute;
- (void)cancelTask;
- (void)startTask;
- (void)cancel;
- (void)start;
- (id)getCompletionQueue;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reportProgress:(long long)arg1 withExpected:(long long)arg2;
- (void)setError:(id)arg1;
- (unsigned long long)responseStringEncoding;
@property(readonly, nonatomic) long long statusCode;
- (void)setResponse:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

@end
