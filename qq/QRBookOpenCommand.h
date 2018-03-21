//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QRBookOpenCommand : NSObject
{
    _Bool _needAddToBookShelf;
    _Bool _useCloudProgress;
    NSString *_bookID;
    long long _chapterID;
}

@property(readonly, nonatomic) _Bool useCloudProgress; // @synthesize useCloudProgress=_useCloudProgress;
@property(readonly, nonatomic) _Bool needAddToBookShelf; // @synthesize needAddToBookShelf=_needAddToBookShelf;
@property(readonly, nonatomic) long long chapterID; // @synthesize chapterID=_chapterID;
@property(readonly, nonatomic) NSString *bookID; // @synthesize bookID=_bookID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
