//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TwitterText : NSObject
{
}

+ (id)invalidURLWithoutProtocolPrecedingCharSet;
+ (id)endMentionRegexp;
+ (id)validReplyRegexp;
+ (id)validMentionOrListRegexp;
+ (id)validCashtagRegexp;
+ (id)endHashtagRegexp;
+ (id)validHashtagRegexp;
+ (id)validTCOURLRegexp;
+ (id)invalidShortDomainRegexp;
+ (id)validASCIIDomainRegexp;
+ (id)validURLRegexp;
+ (long long)remainingCharacterCount:(id)arg1 httpURLLength:(long long)arg2 httpsURLLength:(long long)arg3;
+ (long long)remainingCharacterCount:(id)arg1;
+ (long long)tweetLength:(id)arg1 httpURLLength:(long long)arg2 httpsURLLength:(long long)arg3;
+ (long long)tweetLength:(id)arg1;
+ (id)repliedScreenNameInText:(id)arg1;
+ (id)mentionsOrListsInText:(id)arg1;
+ (id)mentionedScreenNamesInText:(id)arg1;
+ (id)symbolsInText:(id)arg1 withURLEntities:(id)arg2;
+ (id)symbolsInText:(id)arg1 checkingURLOverlap:(_Bool)arg2;
+ (id)hashtagsInText:(id)arg1 withURLEntities:(id)arg2;
+ (id)hashtagsInText:(id)arg1 checkingURLOverlap:(_Bool)arg2;
+ (id)URLsInText:(id)arg1;
+ (id)entitiesInText:(id)arg1;
+ (id)endHashtagRegexp;
+ (id)validHashtagRegexp;

@end

