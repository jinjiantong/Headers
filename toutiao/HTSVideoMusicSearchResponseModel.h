//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface HTSVideoMusicSearchResponseModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_statusCode;
    NSArray *_musics;
    NSNumber *_hasMore;
    NSNumber *_cursor;
}

+ (id)musicsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSNumber *hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSArray *musics; // @synthesize musics=_musics;
@property(retain, nonatomic) NSNumber *statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
