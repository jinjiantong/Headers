//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKDataBaseObject.h"

@class NSMutableArray, NSString;

@interface MovieSDKAsynChosenWeiboData : MovieSDKDataBaseObject
{
    _Bool _is_asyn;
    NSString *_url;
    NSMutableArray *_list;
}

@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool is_asyn; // @synthesize is_asyn=_is_asyn;
- (void).cxx_destruct;
- (_Bool)parser:(id)arg1;

@end

