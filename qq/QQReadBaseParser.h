//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface QQReadBaseParser : NSObject
{
    long long _wordsCount;
    NSString *_fileContentStr;
    NSMutableDictionary *_specialParaFormatDic;
}

@property(retain, nonatomic) NSMutableDictionary *specialParaFormatDic; // @synthesize specialParaFormatDic=_specialParaFormatDic;
@property(copy, nonatomic) NSString *fileContentStr; // @synthesize fileContentStr=_fileContentStr;
@property(nonatomic) long long wordsCount; // @synthesize wordsCount=_wordsCount;
- (void).cxx_destruct;
- (id)replaceSpace:(id)arg1;
- (_Bool)isHaveLastParaInfo;
- (_Bool)openFile:(id)arg1 withIsHaveLastChpaterLine:(_Bool)arg2 withIsFinished:(_Bool)arg3 withBookID:(id)arg4 withChapterID:(long long)arg5 andIsHaveComment:(_Bool)arg6;
- (id)init;

@end
