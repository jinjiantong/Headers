//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TranslateServiceBaseClass : NSObject
{
    NSArray *mSupportLan;
    NSArray *mLanguageTable;
}

- (id)TranslateString:(id)arg1 lanarg:(id)arg2 destarg:(id)arg3 otherarg:(id *)arg4;
- (id)getDestLan;
- (id)getSupportLanguage;
- (id)getTranslateStringArrayFromWebService:(id)arg1 tranarg:(_Bool *)arg2;
- (id)getTranslateStringFromWebService:(id)arg1 tranarg:(_Bool *)arg2;
- (void)RDMReport:(id)arg1 lanarg:(id)arg2;
- (id)getTranslateStringArrayFromWebService:(id)arg1 tranarg:(_Bool *)arg2 otherarg:(id *)arg3;
- (id)getTranslateStringFromWebService:(id)arg1 tranarg:(_Bool *)arg2 otherarg:(id *)arg3;
- (void)dealloc;

@end
