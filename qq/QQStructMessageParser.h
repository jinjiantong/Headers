//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQStructMessageParser : NSObject
{
}

+ (id)decodeQQEmotionString:(id)arg1;
+ (struct _NSRange)rangeOfEmotion:(id)arg1 faceCode:(int *)arg2;
+ (void)encodeQQEmotionForMsgModel:(id)arg1;
+ (id)encodeQQEmotionString:(id)arg1;
+ (id)parse:(const char *)arg1 length:(int)arg2;
+ (id)parse:(id)arg1;
+ (id)removeControlCharacterSet:(id)arg1;
+ (id)parseByString:(id)arg1;
+ (id)decodeHTMLString:(id)arg1;

@end

