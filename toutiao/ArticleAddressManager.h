//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSTimer;

@interface ArticleAddressManager : NSObject
{
    NSTimer *_uploadTimer;
}

+ (void)setReplaceRegularExpress:(id)arg1;
+ (id)replaceRegluarExpress;
+ (double)uploadInterval;
+ (void)setUploadInterval:(double)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSTimer *uploadTimer; // @synthesize uploadTimer=_uploadTimer;
- (void).cxx_destruct;
- (id)processPhoneNumber:(id)arg1;
@property(readonly, nonatomic) NSDictionary *addressBookPersons;
- (id)processPhoneNumbers:(id)arg1 inPerson:(id)arg2;
- (id)postDataFromPersons:(id)arg1;
- (void)startUploadAddressBookWithPermissionBlock:(CDUnknownBlockType)arg1 uploadFinishBlock:(CDUnknownBlockType)arg2;
- (void)startUploadAddressBookWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)upload:(id)arg1;
- (id)init;
- (void)dealloc;

@end
