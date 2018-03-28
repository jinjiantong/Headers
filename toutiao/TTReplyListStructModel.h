//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol Optional, TTAuthorBadgeStructModel><Optional;

@interface TTReplyListStructModel : JSONModel
{
    NSNumber<Optional> *_user_id;
    NSString<Optional> *_text;
    NSString<Optional> *_user_name;
    NSNumber<Optional> *_id;
    NSArray<TTAuthorBadgeStructModel><Optional> *_author_badge;
    NSNumber<Optional> *_user_verified;
    NSNumber<Optional> *_is_pgc_author;
    NSString<Optional> *_user_auth_info;
    NSString<Optional> *_content_rich_span;
}

@property(retain, nonatomic) NSString<Optional> *content_rich_span; // @synthesize content_rich_span=_content_rich_span;
@property(retain, nonatomic) NSString<Optional> *user_auth_info; // @synthesize user_auth_info=_user_auth_info;
@property(retain, nonatomic) NSNumber<Optional> *is_pgc_author; // @synthesize is_pgc_author=_is_pgc_author;
@property(retain, nonatomic) NSNumber<Optional> *user_verified; // @synthesize user_verified=_user_verified;
@property(retain, nonatomic) NSArray<TTAuthorBadgeStructModel><Optional> *author_badge; // @synthesize author_badge=_author_badge;
@property(retain, nonatomic) NSNumber<Optional> *id; // @synthesize id=_id;
@property(retain, nonatomic) NSString<Optional> *user_name; // @synthesize user_name=_user_name;
@property(retain, nonatomic) NSString<Optional> *text; // @synthesize text=_text;
@property(retain, nonatomic) NSNumber<Optional> *user_id; // @synthesize user_id=_user_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
